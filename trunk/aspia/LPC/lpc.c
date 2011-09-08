/*
 * PROJECT:         Aspia
 * FILE:            aspia/LPC/lpc.c
 * LICENSE:         LGPL (GNU Lesser General Public License)
 * PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
 *
 *    Based on /Hardware/LPC/LPCIO.cs from Open Hardware Monitor
 */

#include "../main.h"
#include "lpc.h"

#define CONFIGURATION_CONTROL_REGISTER 0x02
#define DEVCIE_SELECT_REGISTER         0x07
#define CHIP_ID_REGISTER               0x20
#define CHIP_REVISION_REGISTER         0x21
#define BASE_ADDRESS_REGISTER          0x60

#define FINTEK_VENDOR_ID_REGISTER 0x23
#define FINTEK_VENDOR_ID          0x1934

#define WINBOND_NUVOTON_HARDWARE_MONITOR_LDN 0x0B

#define F71858_HARDWARE_MONITOR_LDN 0x02
#define FINTEK_HARDWARE_MONITOR_LDN 0x04

#define IT87_ENVIRONMENT_CONTROLLER_LDN 0x04
#define IT87_GPIO_LDN                   0x07
#define IT87_CHIP_VERSION_REGISTER      0x22


CHIP_INFO ChipInfo[] =
{
    { ATK0110,    L"Asus ATK0110" },

    { F71858,     L"Fintek F71858" },
    { F71862,     L"Fintek F71862" },
    { F71869,     L"Fintek F71869" },
    { F71882,     L"Fintek F71882" },
    { F71889AD,   L"Fintek F71889AD" },
    { F71889ED,   L"Fintek F71889ED" },
    { F71889F,    L"Fintek F71889F" },

    { IT8712F,    L"ITE IT8712F" },
    { IT8716F,    L"ITE IT8716F" },
    { IT8718F,    L"ITE IT8718F" },
    { IT8720F,    L"ITE IT8720F" },
    { IT8721F,    L"ITE IT8721F" },
    { IT8726F,    L"ITE IT8726F" },
    { IT8728F,    L"ITE IT8728F" },
    { IT8772E,    L"ITE IT8772E" },

    { NCT6771F,   L"Nuvoton NCT6771F" },
    { NCT6776F,   L"Nuvoton NCT6776F" },

    { W83627DHG,  L"Winbond W83627DHG" },
    { W83627DHGP, L"Winbond W83627DHG-P" },
    { W83627EHF,  L"Winbond W83627EHF" },
    { W83627HF,   L"Winbond W83627HF" },
    { W83627THF,  L"Winbond W83627THF" },
    { W83667HG,   L"Winbond W83667HG" },
    { W83667HGB,  L"Winbond W83667HG-B" },
    { W83687THF,  L"Winbond W83687THF" },

    { 0 }
};

VOID
LPC_ChipTypeToText(DWORD dwChip, LPWSTR lpText, SIZE_T Size)
{
    SIZE_T Index = 0;

    if (lpText) lpText[0] = 0;
    do
    {
        if (ChipInfo[Index].dwChip == dwChip)
        {
            StringCbCopy(lpText, Size, ChipInfo[Index].lpDesc);
            return;
        }
    }
    while (ChipInfo[++Index].dwChip != 0);
}

BYTE
ReadByte(BYTE bRegisterPort, BYTE bValuePort, BYTE bRegister)
{
    DRIVER_WriteIoPortByte(bRegisterPort, bRegister);
    return DRIVER_ReadIoPortByte(bValuePort);
}

WORD
ReadWord(BYTE bRegisterPort, BYTE bValuePort, BYTE bRegister)
{
    return (WORD)((ReadByte(bRegisterPort, bValuePort, bRegister) << 8) |
                  ReadByte(bRegisterPort, bValuePort, (BYTE)(bRegister + 1)));
}

VOID
Select(BYTE bRegisterPort, BYTE bValuePort, BYTE devnum)
{
    DRIVER_WriteIoPortByte(bRegisterPort, DEVCIE_SELECT_REGISTER);
    DRIVER_WriteIoPortByte(bValuePort, devnum);
}

VOID
WinbondNuvotonFintekEnter(BYTE bRegisterPort)
{
    DRIVER_WriteIoPortByte(bRegisterPort, 0x87);
    DRIVER_WriteIoPortByte(bRegisterPort, 0x87);
}

VOID
WinbondNuvotonFintekExit(BYTE bRegisterPort)
{
    DRIVER_WriteIoPortByte(bRegisterPort, 0xAA);
}

BOOL
DetectWinbondFintek(BYTE bRegisterPort,
                    BYTE bValuePort,
                    WORD *wChipType,
                    WORD *wAddress)
{
    BYTE id, rev, devnum = 0;
    WORD verify, vendorID, chip = 0;

    if (!wChipType || !wAddress)
        return FALSE;

    WinbondNuvotonFintekEnter(bRegisterPort);

    /* Detection */
    id = ReadByte(bRegisterPort, bValuePort, CHIP_ID_REGISTER);
    rev = ReadByte(bRegisterPort, bValuePort, CHIP_REVISION_REGISTER);

    switch (id)
    {
        case 0x05:
            switch (rev)
            {
                case 0x07:
                    chip = F71858;
                    devnum = F71858_HARDWARE_MONITOR_LDN;
                    break;
                case 0x41:
                    chip = F71882;
                    devnum = FINTEK_HARDWARE_MONITOR_LDN;
                    break;
            }
            break;

        case 0x06:
            switch (rev)
            {
                case 0x01:
                    chip = F71862;
                    devnum = FINTEK_HARDWARE_MONITOR_LDN;
                    break;
            }
            break;

        case 0x07:
            switch (rev)
            {
                case 0x23:
                    chip = F71889F;
                    devnum = FINTEK_HARDWARE_MONITOR_LDN;
                    break;
            }
            break;

        case 0x08:
            switch (rev)
            {
                case 0x14:
                    chip = F71869;
                    devnum = FINTEK_HARDWARE_MONITOR_LDN;
                    break;
            }
            break;

        case 0x09:
            switch (rev)
            {
                case 0x09:
                    chip = F71889ED;
                    devnum = FINTEK_HARDWARE_MONITOR_LDN;
                    break;
            }
            break;

        case 0x10:
            switch (rev)
            {
                case 0x05:
                    chip = F71889AD;
                    devnum = FINTEK_HARDWARE_MONITOR_LDN;
                    break;
            }
            break;

        case 0x52:
            switch (rev)
            {
                case 0x17:
                case 0x3A:
                case 0x41:
                    chip = W83627HF;
                    devnum = WINBOND_NUVOTON_HARDWARE_MONITOR_LDN;
                    break;
            }
            break;

        case 0x82:
            switch (rev & 0xF0)
            {
                case 0x80:
                    chip = W83627THF;
                    devnum = WINBOND_NUVOTON_HARDWARE_MONITOR_LDN;
                    break;
            }
            break;

        case 0x85:
            switch (rev)
            {
                case 0x41:
                    chip = W83687THF;
                    devnum = WINBOND_NUVOTON_HARDWARE_MONITOR_LDN;
                    break;
            }
            break;

        case 0x88:
            switch (rev & 0xF0)
            {
                case 0x50:
                case 0x60:
                    chip = W83627EHF;
                    devnum = WINBOND_NUVOTON_HARDWARE_MONITOR_LDN;
                    break;
            }
            break;

        case 0xA0:
            switch (rev & 0xF0)
            {
                case 0x20:
                    chip = W83627DHG;
                    devnum = WINBOND_NUVOTON_HARDWARE_MONITOR_LDN;
                    break;
            }
            break;

        case 0xA5:
            switch (rev & 0xF0)
            {
                case 0x10:
                    chip = W83667HG;
                    devnum = WINBOND_NUVOTON_HARDWARE_MONITOR_LDN;
                    break;
            }
            break;

        case 0xB0:
            switch (rev & 0xF0)
            {
                case 0x70:
                    chip = W83627DHGP;
                    devnum = WINBOND_NUVOTON_HARDWARE_MONITOR_LDN;
                    break;
            }
            break;

        case 0xB3:
            switch (rev & 0xF0)
            {
                case 0x50:
                    chip = W83667HGB;
                    devnum = WINBOND_NUVOTON_HARDWARE_MONITOR_LDN;
                    break;
            }
            break;

        case 0xB4:
            switch (rev & 0xF0)
            {
                case 0x70:
                    chip = NCT6771F;
                    devnum = WINBOND_NUVOTON_HARDWARE_MONITOR_LDN;
                    break;
            }
            break;

        case 0xC3:
            switch (rev & 0xF0)
            {
                case 0x30:
                    chip = NCT6776F;
                    devnum = WINBOND_NUVOTON_HARDWARE_MONITOR_LDN;
                    break;
            }
            break;
    }

    if (chip == 0)
    {
        if (id != 0 && id != 0xFF)
        {
            WinbondNuvotonFintekExit(bRegisterPort);
        }
        return FALSE;
    }

    Select(bRegisterPort, bValuePort, devnum);

    *wAddress = ReadWord(bRegisterPort, bValuePort, BASE_ADDRESS_REGISTER);
    Sleep(1);
    verify = ReadWord(bRegisterPort, bValuePort, BASE_ADDRESS_REGISTER);
    vendorID = ReadWord(bRegisterPort, bValuePort, FINTEK_VENDOR_ID_REGISTER);

    WinbondNuvotonFintekExit(bRegisterPort);

    if (*wAddress != verify)
    {
        return FALSE;
    }

    /* some Fintek chips have address register offset 0x05 added already */
    if ((*wAddress & 0x07) == 0x05)
        *wAddress &= 0xFFF8;

    if (*wAddress < 0x100 || (*wAddress & 0xF007) != 0)
        return FALSE;

    *wChipType = chip;

    return TRUE;
}

VOID
IT87Enter(BYTE bRegisterPort)
{
    DRIVER_WriteIoPortByte(bRegisterPort, 0x87);
    DRIVER_WriteIoPortByte(bRegisterPort, 0x01);
    DRIVER_WriteIoPortByte(bRegisterPort, 0x55);
    DRIVER_WriteIoPortByte(bRegisterPort, 0x55);
}

VOID
IT87Exit(BYTE bRegisterPort, BYTE bValuePort)
{
    DRIVER_WriteIoPortByte(bRegisterPort, CONFIGURATION_CONTROL_REGISTER);
    DRIVER_WriteIoPortByte(bValuePort, 0x02);
}

BOOL
DetectIT87(BYTE bRegisterPort,
           BYTE bValuePort,
           WORD *wChipType,
           WORD *wAddress,
           WORD *wGPIOAddress,
           BYTE *bVersion)
{
    WORD id, chip, verify, verifyGPIO;

    if (!wChipType || !wAddress || !wGPIOAddress || !bVersion)
        return FALSE;

    if (bRegisterPort != 0x2E)
        return FALSE;

    IT87Enter(bRegisterPort);

    id = ReadWord(bRegisterPort, bValuePort, CHIP_ID_REGISTER);

    switch (id)
    {
        case 0x8712:
            chip = IT8712F;
            break;
        case 0x8716:
            chip = IT8716F;
            break;
        case 0x8718:
            chip = IT8718F;
            break;
        case 0x8720:
            chip = IT8720F;
            break;
        case 0x8721:
            chip = IT8721F;
            break;
        case 0x8726:
            chip = IT8726F;
            break;
        case 0x8728:
            chip = IT8728F;
            break;
        case 0x8772:
            chip = IT8772E;
            break;
        default:
            chip = 0;
            break;
    }

    if (chip == 0)
    {
        if (chip != 0 && chip != 0xFFFF)
        {
            IT87Exit(bRegisterPort, bValuePort);
        }
    }

    Select(bRegisterPort, bValuePort, IT87_ENVIRONMENT_CONTROLLER_LDN);

    *wAddress = ReadWord(bRegisterPort, bValuePort, BASE_ADDRESS_REGISTER);
    Sleep(1);
    verify = ReadWord(bRegisterPort, bValuePort, BASE_ADDRESS_REGISTER);

    *bVersion = (BYTE)(ReadByte(bRegisterPort, bValuePort, IT87_CHIP_VERSION_REGISTER) & 0x0F);

    Select(bRegisterPort, bValuePort, IT87_GPIO_LDN);
    *wGPIOAddress = ReadWord(bRegisterPort, bValuePort, BASE_ADDRESS_REGISTER + 2);
    Sleep(1);
    verifyGPIO = ReadWord(bRegisterPort, bValuePort, BASE_ADDRESS_REGISTER + 2);

    IT87Exit(bRegisterPort, bValuePort);

    if (*wAddress != verify || *wAddress < 0x100 || (*wAddress & 0xF007) != 0)
        return FALSE;

    if (*wGPIOAddress != verifyGPIO || *wGPIOAddress < 0x100 || (*wGPIOAddress & 0xF007) != 0)
        return FALSE;

    *wChipType = chip;

    return TRUE;
}

VOID
LPC_GetChipType(VOID)
{
    WORD wChipType, wAddress, wGPIOAddress;
    BYTE bVersion;

    if (DetectWinbondFintek(0x2E, 0x2F, &wChipType, &wAddress))
    {
        DebugTrace(L"RegPort = 0x2E, ValPort = 0x2F, wChipType = 0x%x, wAddress = 0x%x",
                   wChipType, wAddress);
    }

    if (DetectWinbondFintek(0x4E, 0x4F, &wChipType, &wAddress))
    {
        DebugTrace(L"RegPort = 0x4E, ValPort = 0x4F, wChipType = 0x%x, wAddress = 0x%x",
                   wChipType, wAddress);
    }

    if (DetectIT87(0x2E, 0x2F, &wChipType, &wAddress, &wGPIOAddress, &bVersion))
    {
        DebugTrace(L"RegPort = 0x2E, ValPort = 0x2F, wChipType = 0x%x, wAddress = 0z%x, wGPIOAddress = 0x%x, bVersion = 0x%x",
                   wChipType, wAddress, wGPIOAddress, bVersion);

        IT87XX_GetInfo(wChipType,
                       wAddress,
                       wGPIOAddress,
                       bVersion);
    }

    if (DetectIT87(0x4E, 0x4F, &wChipType, &wAddress, &wGPIOAddress, &bVersion))
    {
        DebugTrace(L"RegPort = 0x2E, ValPort = 0x2F, wChipType = 0x%x, wAddress = 0x%x, wGPIOAddress = 0x%x, bVersion = 0x%x",
                   wChipType, wAddress, wGPIOAddress, bVersion);

        IT87XX_GetInfo(wChipType,
                       wAddress,
                       wGPIOAddress,
                       bVersion);
    }
}
