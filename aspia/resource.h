/*
 * PROJECT:         Aspia
 * FILE:            aspia/resource.h
 * LICENSE:         LGPL (GNU Lesser General Public License)
 * PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
 */

#pragma once

#ifdef _ASPIA_PORTABLE_

#define ID_DRIVER_X32_SYS 7777
#define ID_DRIVER_X64_SYS 7778

#define ID_LANG_RU_RU_DLL 7800
#define ID_LANG_UK_UA_DLL 7801

#endif /* _ASPIA_PORTABLE_ */

/* Icons */
#define IDI_MAINICON      100
#define IDI_ASK           101
#define IDI_BANG          102
#define IDI_CALENDAR      103
#define IDI_COMPONENTS    104
#define IDI_FONTS         106
#define IDI_HW            107
#define IDI_INFO          108
#define IDI_KEYBOARD      109
#define IDI_LOCALES       110
#define IDI_MONITOR       111
#define IDI_MOUSE         112
#define IDI_NETWORK       113
#define IDI_NOTE          114
#define IDI_POWER         115
#define IDI_PRINTER       116
#define IDI_REGEDIT       117
#define IDI_RELOAD        118
#define IDI_SAVE          119
#define IDI_SOFTWARE      120
#define IDI_SOUND         121
#define IDI_TASKMGR       122
#define IDI_UPDATES       123
#define IDI_USB           124
#define IDI_USERS         125
#define IDI_COMPUTER      127
#define IDI_HDD           128
#define IDI_CD            129
#define IDI_CPU           130
#define IDI_SENSOR        131
#define IDI_SHARED        132
#define IDI_IE            133
#define IDI_ROUTE         134
#define IDI_EVENTVWR      135
#define IDI_INFOICO       136
#define IDI_ERRORICO      137
#define IDI_SECURITY      138
#define IDI_APPS          139
#define IDI_POWERICO      140
#define IDI_SYSFOLDERS    141
#define IDI_USER          142
#define IDI_DISABLED_USER 143
#define IDI_TIME          144
#define IDI_DATE          145
#define IDI_PORT          146
#define IDI_REG           147
#define IDI_FOLDER        148
#define IDI_CHECKED       149
#define IDI_UNCHECKED     150
#define IDI_WINDOWS       151
#define IDI_BATTERY       152
#define IDI_DESKTOP       153
#define IDI_RAS           154
#define IDI_WINDOW        155
#define IDI_SCREENSAVER   156
#define IDI_EFFECTS       157
#define IDI_MENU          158
#define IDI_TEXT          159
#define IDI_PREVENT       160
#define IDI_SERVICES      161
#define IDI_NETSTAT       162
#define IDI_DISABLED_HW   163
#define IDI_CONTACT       164
#define IDI_SETTINGS      165
#define IDI_CHECK_ALL     166
#define IDI_UNCHECK_ALL   167
#define IDC_STATUS_ICON   168
#define IDI_FIREWALL      169
#define IDI_USB_DEV       170
#define IDI_ENCLOSURE     171
#define IDI_START         172
#define IDI_STOP          173
#define IDI_STRESS_TEST   174
#define IDI_VOLTAGE       175
#define IDI_TEMPERATURE   176
#define IDI_FAN           177

/* Dialogs */
#define IDD_ABOUT_DIALOG         5000
#define IDD_SETTINGS_DIALOG      5001
#define IDD_REPORT_STATUS_DIALOG 5002
#define IDD_SETTINGS_GENERAL     5003
#define IDD_SETTINGS_FILTER      5004
#define IDD_SETTINGS_SYSTRAY     5005

/* Menu */
#define IDR_POPUP           500
#define IDR_SAVE_POPUP      501
#define IDR_COPY_ALL_POPUP  502
#define IDR_SHOW_TRAY_POPUP 503
#define IDR_HIDE_TRAY_POPUP 504

/* Menu Items */
#define ID_ABOUT          1000
#define ID_EXIT           1001
#define ID_RELOAD         1002
#define ID_SAVE           1003
#define ID_COPY_ALL       1010
#define ID_COPY_VALUE     1011
#define ID_COPY_NAME      1012
#define ID_SAVE_REPORT    1013
#define ID_SAVE_CURRENT   1014
#define ID_SAVE_ALL       1015
#define ID_SETTINGS       1016
#define ID_SELECT_ALL     1017
#define ID_SHOW_WINDOW    1018
#define ID_HIDE_WINDOW    1019
#define ID_SYSMON         1020
#define ID_SYSMON_START   1021
#define ID_SYSMON_STOP    1022
#define ID_SYSMON_TEST    1023

/* Controls */
#define IDC_SET_PATH_BTN        102
#define IDC_VERSION_TEXT        103
#define IDC_SITE_BTN            104
#define IDC_DONATE_BTN          105
#define IDC_ACCELERATORS        106
#define IDC_LANGUAGE_COMBO      108
#define IDC_SAVE_WINDOW_POS     109
#define IDC_STARTUP_CAT_COMBO   110
#define IDC_START_WITH_WINDOWS  111
#define IDC_START_MINIMIZED     112
#define IDC_SHOW_PROG_ICON      113
#define IDC_SHOW_SENSOR_ICON    114
#define IDC_SENSOR_ICON_LIST    115
#define IDC_ICONS_COMBO         118
#define IDC_ABOUT_EDIT          119
#define IDC_ABOUT_ICON          120
#define IDC_REPORT_PROGRESS     121
#define IDC_STATUS_MSG          122
#define IDC_CPU_ICON            123
#define IDC_CPU_FONT_COLOR      124
#define IDC_CPU_BACKGROUND      125
#define IDC_HDD_ICON            126
#define IDC_HDD_FONT_COLOR      127
#define IDC_HDD_BACKGROUND      128
#define IDC_REFRESH_RATE_EDIT   129
#define IDC_REF_RATE_UPDOWN     130
#define IDC_FILTER_ELOG_ERROR   131
#define IDC_FILTER_ELOG_WARNING 132
#define IDC_FILTER_ELOG_INFO    133
#define IDC_FILTER_IE_FILE      134
#define IDC_FILTER_IE_HTTP      135
#define IDC_FILTER_IE_FTP       136
#define IDC_SETTINGS_TREE       137
#define IDC_DEV_REPORT_SEND     140
#define IDC_STAY_ON_TOP         142
#define IDC_ALLOW_KM_DRIVER     143
#define IDC_FILEPATH_TITLE      144
#define IDC_FILETYPE_TITLE      145

/* Strings */
#define IDS_APPTITLE                100
#define IDS_SAVE                    101
#define IDS_RELOAD                  102
#define IDS_ABOUT                   103
#define IDS_PARAM                   104
#define IDS_VALUE                   105
#define IDS_UNKNOWN                 106
#define IDS_YES                     107
#define IDS_NO                      108
#define IDS_TIME                    109
#define IDS_DATE                    110
#define IDS_NONE                    111
#define IDS_SETTINGS                112
#define IDS_ABOUT_STRING            113
#define IDS_INFORMATION             114
#define IDS_MANUFACTURER            115
#define IDS_SERIAL_NUMBER           116
#define IDS_NAME                    117
#define IDS_TYPE                    118
#define IDS_DESC                    119
#define IDS_STATUS                  120
#define IDS_PROP                    121
#define IDS_DNS1                    122
#define IDS_DNS2                    123
#define IDS_WINS1                   124
#define IDS_WINS2                   125
#define IDS_PRODUCT                 126
#define IDS_VERSION                 127
#define IDS_NEVER                   128
#define IDS_SITE_LINK               129
#define IDS_SITE_DONATE_LINK        130
#define IDS_CATEGORY_COLUMN         131
#define IDS_REPORT_TITLE            132
#define IDS_REPORT_TOP              133
#define IDS_CMD_HELP                134

#define IDS_SUMMARY_MEM             135
#define IDS_SUMMARY_CPU             136
#define IDS_SUMMARY_OS              137
#define IDS_SUMMARY_HDD             138

#define IDS_OS_VERSION              139
#define IDS_OS_BUILD                140
#define IDS_OS_REG_USER             141
#define IDS_OS_REG_ORG              142
#define IDS_OS_PRODUCT_NAME         143
#define IDS_OS_INSTALL_DATE         144

#define IDS_PRODUCT_KEY             145
#define IDS_PRODUCT_ID              146
#define IDS_KERNEL_TYPE             147
#define IDS_SYSTEM_ROOT             148

#define IDS_USER_NAME               149
#define IDS_FULL_USER_NAME          150
#define IDS_USER_DESC               151
#define IDS_USER_GROUP_NAME         152
#define IDS_USER_GROUP_DESC         153
#define IDS_USER_ACCOUNT_DISABLED   154
#define IDS_USER_PASSWD_CANT_CHANGE 155
#define IDS_USER_PASSWORD_EXPIRED   156
#define IDS_USER_DONT_EXPIRE_PASSWD 157
#define IDS_USER_LOCKOUT            158
#define IDS_USER_LAST_LOGON         159
#define IDS_USER_NUM_LOGONS         160
#define IDS_USER_BAD_PW_COUNT       161

#define IDS_FONT_NAME               162
#define IDS_FONT_SIZE               163
#define IDS_FONT_FILENAME           164

#define IDS_ELOG_ERROR_TYPE         165
#define IDS_ELOG_WARNING_TYPE       166
#define IDS_ELOG_INFO_TYPE          167
#define IDS_ELOG_AUDIT_SUCCESS      168
#define IDS_ELOG_AUDIT_FAILURE      169
#define IDS_ELOG_SUCCESS            170
#define IDS_ELOG_UNKNOWN_TYPE       171
#define IDS_ELOG_SOURCE             172
#define IDS_ELOG_CATEGORY           173
#define IDS_ELOG_EVENT              174
#define IDS_ELOG_USER               175
#define IDS_ELOG_COMPUTER           176

#define IDS_FOLDER_NAME             177
#define IDS_FOLDER_PATH             178

#define IDS_DIR_ADMIN_TOOLS         179
#define IDS_DIR_APPDATA             180
#define IDS_DIR_CACHE               181
#define IDS_DIR_CD_BURNING          182
#define IDS_DIR_COMMON_ADMIN_TOOLS  183
#define IDS_DIR_COMMON_APPDATA      184
#define IDS_DIR_COMMON_DESKTOP      185
#define IDS_DIR_COMMON_DOCUMENTS    186
#define IDS_DIR_COMMON_FAVORITES    187
#define IDS_DIR_COMMON_FILES        188
#define IDS_DIR_COMMON_MUSIC        189
#define IDS_DIR_COMMON_PICTURES     190
#define IDS_DIR_COMMON_PROGRAMS     191
#define IDS_DIR_COMMON_STARTMENU    192
#define IDS_DIR_COMMON_STARTUP      193
#define IDS_DIR_COMMON_TEMPLATES    194
#define IDS_DIR_COMMON_VIDEO        195
#define IDS_DIR_COOKIES             196
#define IDS_DIR_DESKTOP             197
#define IDS_DIR_FAVORITES           198
#define IDS_DIR_FONTS               199
#define IDS_DIR_HISTORY             200
#define IDS_DIR_LOCAL_APPDATA       201
#define IDS_DIR_MY_DOCS             202
#define IDS_DIR_MY_MUSIC            203
#define IDS_DIR_MY_PICTURES         204
#define IDS_DIR_MY_VIDEO            205
#define IDS_DIR_NETHOOD             206
#define IDS_DIR_PRINTHOOD           207
#define IDS_DIR_PROFILE             208
#define IDS_DIR_PROGRAMFILES        209
#define IDS_DIR_PROGRAMS            210
#define IDS_DIR_RECENT              211
#define IDS_DIR_RESOURCES           212
#define IDS_DIR_SENDTO              213
#define IDS_DIR_STARTMENU           214
#define IDS_DIR_STARTUP             215
#define IDS_DIR_SYSTEM              216
#define IDS_DIR_TEMP                217
#define IDS_DIR_TEMPLATES           218
#define IDS_DIR_WINDOWS             219

#define IDS_COMPUTER_NAME           220
#define IDS_CURRENT_USERNAME        221

#define IDS_ALL_MEMORY              222
#define IDS_FREE_MEMORY             223
#define IDS_TOTAL_PAGINGFILE        224
#define IDS_FREE_PAGINGFILE         225
#define IDS_TOTAL_VIRUALMEM         226
#define IDS_FREE_VIRUALMEM          227

#define IDS_APP_PUBLISHER           228
#define IDS_APP_HELPLINK            229
#define IDS_APP_HELPPHONE           230
#define IDS_APP_URL_UPDATEINFO      231
#define IDS_APP_URL_INFOABOUT       232
#define IDS_APP_INSTALLDATE         233
#define IDS_APP_INSTALLLOCATION     234
#define IDS_APP_UNINSTALL_STR       235
#define IDS_APP_MODIFY_PATH         236

#define IDS_COLUMN_CATEGORIES       237

#define IDS_MEM_SIZE                238
#define IDS_MEM_FORMFACTOR          239
#define IDS_MEM_SPEED               240
#define IDS_MEM_PARTNUMBER          241
#define IDS_MEM_BANK                242
#define IDS_MEM_TOTALWIDTH          243
#define IDS_MEM_DATAWIDTH           244

#define IDS_CPU_SOCKET              245
#define IDS_CPU_VOLTAGE             246
#define IDS_CPU_EXTCLOCK            247
#define IDS_CPU_CURRENTSPEED        248
#define IDS_CPU_UPGRADE             249
#define IDS_CPU_FAMILY              250

#define IDS_CPU_MAXSPEED            251
#define IDS_IE_HISTORY_TIME         252
#define IDS_IE_HISTORY_URL          253
#define IDS_IE_HISTORY_TITLE        254
#define IDS_IE_HISTORY_DATE         255
#define IDS_ROUTE_DEST_IP           256
#define IDS_ROUTE_SUBNET_MASK       257
#define IDS_ROUTE_GATEWAY           258
#define IDS_ROUTE_METRIC            259
#define IDS_DMI_CACHE_SRAM_TYPES    260
#define IDS_DMI_CACHE_SRAM_CURRENT  261
#define IDS_DMI_CACHE_MAX_SIZE      262
#define IDS_DMI_CACHE_CURRENT_SIZE  263
#define IDS_DMI_CACHE_MODE          264
#define IDS_DMI_CACHE_LEVEL         265
#define IDS_BIOS_DATE               266
#define IDS_BIOS_SIZE               267
#define IDS_BIOS_BOOT_DEVICES       268
#define IDS_BIOS_STANDATDS          269
#define IDS_BIOS_SLOTS              270
#define IDS_BIOS_FATURES            271
#define IDS_SYS_ID                  272
#define IDS_SYS_WAKEUP              273
#define IDS_DMI_HEADER              274
#define IDS_DMI_HEADER_TITLE        275
#define IDS_SLOT_BUS_WIDTH          276
#define IDS_SLOT_LENGTH             277
#define IDS_PORT_TYPE               278
#define IDS_PORT_INT_DESIGNATION    279
#define IDS_PORT_EXT_DESIGNATION    280
#define IDS_PORT_INT_CONNECTOR      281
#define IDS_PORT_EXT_CONNECTOR      282
#define IDS_ENCL_OSLOAD_STATUS      283
#define IDS_ENCL_POWER_STATUS       284
#define IDS_ENCL_TEMPERATURE_STATUS 285
#define IDS_ENCL_SECURITY_STATUS    286
#define IDS_ENCL_ID                 287
#define IDS_ENCL_TYPE               288
#define IDS_NIC_NAME                289
#define IDS_NIC_IP                  290
#define IDS_NIC_MAC                 291
#define IDS_NIC_SUBNET_MASK         292
#define IDS_NIC_DHCP_ADDR           293
#define IDS_NIC_DHCP_OBTAINED       294
#define IDS_NIC_DHCP_EXPIRES        295
#define IDS_NIC_MTU                 296
#define IDS_NIC_GETEWAY             297
#define IDS_NIC_TYPE                298
#define IDS_NIC_SPEED               299
#define IDS_NIC_SENT                300
#define IDS_NIC_RECEIVED            301
#define IDS_NIC_DHCP_STATUS         302
#define IDS_NIC_WINS_STATUS         303
#define IDS_MONITOR_DAC_TYPE        304
#define IDS_MONITOR_CHIP_TYPE       305
#define IDS_MONITOR_MODE            306
#define IDS_MONITOR_MEM_SIZE        307
#define IDS_MONITOR_ADAPTER         308
#define IDS_MONITOR_DRIVER_VENDOR   309
#define IDS_SMART_ATTR_ID           310
#define IDS_SMART_ATTR_NAME         311
#define IDS_SMART_ATTR_VALUE        312
#define IDS_SMART_THRESHOLD         313
#define IDS_SMART_DATA              314
#define IDS_SMART_ATTR_WORST        315
#define IDS_HDD_ID                  316
#define IDS_HDD_ECC_BYTES           317
#define IDS_HDD_BUFFER_SIZE         318
#define IDS_HDD_MULTISECTORS        319
#define IDS_HDD_PARAMS              320
#define IDS_HDD_PARAMS_FORMAT       321
#define IDS_HDD_SIZE                322
#define IDS_SERVICE_DISP_NAME       323
#define IDS_SERVICE_START_TYPE      324
#define IDS_SERVICE_USER_NAME       325
#define IDS_SERVICE_EX_FILE         326
#define IDS_SERVICE_RUNNING         327
#define IDS_SERVICE_PAUSED          328
#define IDS_SERVICE_STOPPED         329
#define IDS_SERVICE_START_PENDING   330
#define IDS_SERVICE_STOP_PENDING    331
#define IDS_SERVICE_PAUSE_PENDING   332
#define IDS_SERVICE_CONT_PENDING    333
#define IDS_SERVICE_AUTO            334
#define IDS_SERVICE_MANUAL          335
#define IDS_SERVICE_DISABLED        336
#define IDS_SERVICE_BOOT_START      337
#define IDS_SERVICE_SYSTEM_START    338
#define IDS_USED_MEMORY             339
#define IDS_PERCENT_USED            340
#define IDS_USED_PAGINFILE          341
#define IDS_PERCENT_PAGINFILE       342
#define IDS_USED_VIRTMEM            343
#define IDS_PERCENT_VIRTMEM         344

#define IDS_DRIVE_UNKNOWN           345
#define IDS_DRIVE_NO_ROOT_DIR       346
#define IDS_DRIVE_REMOVABLE         347
#define IDS_DRIVE_FIXED             348
#define IDS_DRIVE_REMOTE            349
#define IDS_DRIVE_CDROM             350
#define IDS_DRIVE_RAMDISK           351

#define IDS_SHARE_PATH              352
#define IDS_SHARE_DISKTREE          353
#define IDS_SHARE_PRINTQ            354
#define IDS_SHARE_DEVICE            355
#define IDS_SHARE_IPC               356
#define IDS_SHARE_SPECIAL           357
#define IDS_SHARE_TEMPORARY         358

#define IDS_TASK_NAME               359
#define IDS_TASK_FILEPATH           360
#define IDS_TASK_TYPE               361
#define IDS_TASK_USED_MEM           362
#define IDS_TASK_USED_PAGEFILE      363
#define IDS_TASK_USER               364
#define IDS_TASK_DESC               365
#define IDS_TASK_CPU                366

#define IDS_CPUID_FEATURES          367
#define IDS_CPUID_SUPPORTED         368
#define IDS_CPUID_UNSUPPORTED       369
#define IDS_CPUID_LOGICAL_COUNT     370
#define IDS_CPUID_MODEL             371
#define IDS_CPUID_FAMILY            372
#define IDS_CPUID_STEPPINGID        373
#define IDS_CPUID_NAME              374

#define IDS_BAT_ID                  375
#define IDS_BAT_TYPE                376
#define IDS_BAT_CAPACITY            377
#define IDS_BAT_FULL_CAPACITY       378
#define IDS_BAT_CURRENT_CAPACITY    379
#define IDS_BAT_VOLTAGE             380
#define IDS_BAT_DEPRECIATION        381
#define IDS_BAT_MANUFACTUREDATE     382
#define IDS_BAT_TEMPERATURE         383
#define IDS_BAT_RECHARGEABLE        384
#define IDS_BAT_NONRECHARGEABLE     385
#define IDS_BAT_CHARGING            386
#define IDS_BAT_CRITICAL            387
#define IDS_BAT_DISCHARGING         388
#define IDS_BAT_POWERONLINE         389
#define IDS_BAT_BATTERYS            390

#define IDS_PRINTER_PORT            391
#define IDS_PRINTER_DRIVER          392
#define IDS_PRINTER_LOCATION        393
#define IDS_PRINTER_COMMENT         394
#define IDS_PRINTER_SHARENAME       395
#define IDS_PRINTER_SERVER          396
#define IDS_PRINTER_PROCESSOR       397
#define IDS_PRINTER_SHARED          398
#define IDS_PRINTER_DATATYPE        399
#define IDS_PRINTER_JOBS_COUNT      400
#define IDS_PRINTER_DEFAULT         401
#define IDS_PRINTER_DEVICENAME      402
#define IDS_PRINTER_PAPER_SIZE      403
#define IDS_PRINTER_QUALITY         404
#define IDS_PRINTER_ORIENTATION     405
#define IDS_PRINTER_PORTRAIT        406
#define IDS_PRINTER_LANDSCAPE       407

#define IDS_RAS_COUNTRY_CODE        408
#define IDS_RAS_AREA_CODE           409
#define IDS_RAS_PHONE_NUMBER        410
#define IDS_RAS_IP                  411
#define IDS_RAS_DEVICE_TYPE         412
#define IDS_RAS_DEVICE_NAME         413
#define IDS_RAS_DINAMIC_ADDR        414
#define IDS_RAS_SCRIPT              415
#define IDS_RAS_FRAMING_PROTOCOL    416
#define IDS_RAS_USERNAME            417
#define IDS_RAS_DOMAIN              418

#define IDS_SYS_UPTIME              419
#define IDS_SYS_UPTIME_FORMAT       420

#define IDS_TASK_COMMENT            421
#define IDS_TASK_NEXT_RUN_TIME      422
#define IDS_TASK_LAST_RUN_TIME      423
#define IDS_TASK_ACCAUNT            424
#define IDS_TASK_APP_NAME           425
#define IDS_TASK_WORK_DIR           426
#define IDS_TASK_APP_PARAMS         427
#define IDS_TASK_CREATOR            428
#define IDS_TASK_READY              429
#define IDS_TASK_RUNNING            430
#define IDS_TASK_DISABLED           431
#define IDS_TASK_HAS_NOT_RUN        432
#define IDS_TASK_NOT_SCHEDULED      433
#define IDS_TASK_NO_MORE_RUNS       434
#define IDS_TASK_NO_VALID_TRIGGERS  435
#define IDS_TASK_TRIGGER_FORMAT     436

#define IDS_DESK_WALLPAPER              437
#define IDS_DESK_COLOR_DEPTH            438
#define IDS_DESK_RESOLUTION             439
#define IDS_DESK_REFRESH_RATE           440
#define IDS_DESK_DROPS_SHADOW           441
#define IDS_DESK_FLAT_MENU              442
#define IDS_DESK_FONT_SMOOTHING         443
#define IDS_DESK_FONT_SMOOTHING_TYPE    444
#define IDS_DESK_MOUSE_SPEED            445
#define IDS_DESK_MOUSE_TRAILS           446
#define IDS_DESK_WHELL_SCROLL_LINES     447
#define IDS_DESK_KEYBOARD_SPEED         448
#define IDS_DESK_KEYBOARD_DELAY         449
#define IDS_DESK_MENU_FADE_ANIMATION    450
#define IDS_DESK_MENU_SHOW_DELAY        451
#define IDS_DESK_SS_ACTIVE              452
#define IDS_DESK_SS_TIMEOUT             453
#define IDS_DESK_COMBOBOX_ANIMATION     454
#define IDS_DESK_CURSOR_SHADOW          455
#define IDS_DESK_GRADIENT_CAPTIONS      456
#define IDS_DESK_LISTBOXSMOOTHSCROLLING 457
#define IDS_DESK_MENUANIMATION          458
#define IDS_DESK_TOOLTIPANIMATION       459
#define IDS_DESK_DESKTOP                460
#define IDS_DESK_MOUSE                  461
#define IDS_DESK_KEYBOARD               462
#define IDS_DESK_MENU                   463
#define IDS_DESK_SS                     464
#define IDS_DESK_UI_EFFECTS             465
#define IDS_DESK_WINDOW                 466
#define IDS_DESK_WND_ANIMATION          467
#define IDS_DESK_WND_BORDER             468
#define IDS_DESK_WND_DRAG_FULL          469
#define IDS_SMOOTHING_CLEARTYPE         470
#define IDS_SMOOTHING_STANDARD          471

#define IDS_RAS_IP_HEADER_COMPRES       472
#define IDS_RAS_PPP_LCP_EXTENSIONS      473
#define IDS_RAS_SW_COMPRESSION          474
#define IDS_RAS_REQURE_ENCRYPT_PASS     475
#define IDS_RAS_REQURE_MS_ENCRYPT_PASS  476
#define IDS_RAS_REQURE_DATA_ENCRYPT     477
#define IDS_RAS_REQURE_EAP              478
#define IDS_RAS_REQURE_PAP              479
#define IDS_RAS_REQURE_SPAP             480
#define IDS_RAS_REQURE_CHAP             481
#define IDS_RAS_REQURE_MSCHAP           482
#define IDS_RAS_REQURE_MSCHAP2          483

#define IDS_IE_STARTPAGE            484
#define IDS_IE_SEARCHPAGE           485
#define IDS_IE_LOCALPAGE            486
#define IDS_IE_DOWNLOADDIR          487
#define IDS_IE_USE_PROXY            488
#define IDS_IE_PROXY_ADDR           489

#define IDS_IE_COOKIE_URL_NAME          490
#define IDS_IE_COOKIE_FILE_NAME         491
#define IDS_IE_COOKIE_LAST_MODIFY       492
#define IDS_IE_COOKIE_LAST_ACCESS       493
#define IDS_IE_COOKIE_LAST_SYNC         494
#define IDS_IE_COOKIE_EXPIRE            495
#define IDS_IE_COOKIE_USE_COUNT         496

#define IDS_OS_ARCH                     497
#define IDS_HW_ARCH                     498

#define IDS_REGION_TIME_ZONE            499
#define IDS_REGION_LANGUAGE             500
#define IDS_REGION_COUNTRY              501
#define IDS_REGION_CURRENCY             502
#define IDS_REGION_FORMATTING           503
#define IDS_REGION_DAYS_OF_WEEK         504
#define IDS_REGION_MONTHS               505
#define IDS_REGION_MISCELLANEOUS        506
#define IDS_REGION_CUR_TIMEZONE         507
#define IDS_REGION_CUR_TIMEZONE_DESK    508
#define IDS_REGION_CHANGE_TO_STD_TIME   509
#define IDS_REGION_CHANGE_TO_DL_TIME    510
#define IDS_REGION_LANG_NAME_NATIVE     511
#define IDS_REGION_LANG_NAME_ENGLISH    512
#define IDS_REGION_LANG_NAME_ISO639     513
#define IDS_REGION_COUNTRY_NAME_NATIVE  514
#define IDS_REGION_COUNTRY_NAME_ENGLISH 515
#define IDS_REGION_COUNTRY_NAME_ISO3166 516
#define IDS_REGION_COUNTRY_CODE         517
#define IDS_REGION_CUR_NAME_NATIVE      518
#define IDS_REGION_CUR_NAME_ENGLISH     519
#define IDS_REGION_CUR_SYMBOL_NATIVE    520
#define IDS_REGION_CUR_SYMBOL_ISO4217   521
#define IDS_REGION_CUR_FORMAT           522
#define IDS_REGION_CUR_NEG_FORMAT       523
#define IDS_REGION_FRMT_TIME_FORMAT     524
#define IDS_REGION_FRMT_SDATE_FORMAT    525
#define IDS_REGION_FRMT_LDATE_FORMAT    526
#define IDS_REGION_FRMT_NUMBER_FORMAT   527
#define IDS_REGION_FRMT_NEG_NUM_FORMAT  528
#define IDS_REGION_FRMT_LIST_FORMAT     529
#define IDS_REGION_FRMT_NATIVE_DIGITS   530
#define IDS_REGION_DOW_MONDAY           531
#define IDS_REGION_DOW_TUESDAY          532
#define IDS_REGION_DOW_WEDNESDAY        533
#define IDS_REGION_DOW_THURSDAY         534
#define IDS_REGION_DOW_FRIDAY           535
#define IDS_REGION_DOW_SATURDAY         536
#define IDS_REGION_DOW_SUNDAY           537
#define IDS_REGION_MNS_JANUARY          538
#define IDS_REGION_MNS_FEBRUARY         539
#define IDS_REGION_MNS_MARCH            540
#define IDS_REGION_MNS_APRIL            541
#define IDS_REGION_MNS_MAY              542
#define IDS_REGION_MNS_JUNE             543
#define IDS_REGION_MNS_JULE             544
#define IDS_REGION_MNS_AUGUST           545
#define IDS_REGION_MNS_SEPTEMBER        546
#define IDS_REGION_MNS_OCTOBER          547
#define IDS_REGION_MNS_NOVEMBER         548
#define IDS_REGION_MNS_DECEMBER         549
#define IDS_REGION_CALENDAR_TYPE        550
#define IDS_REGION_MEASUREMENT_SYSTEM   551
#define IDS_REGION_PAPER_SIZE           552

#define IDS_LOCAL_TIME                  553
#define IDS_LOCAL_DATE                  554

#define IDS_POWER_MANAGMT_PROP          555
#define IDS_CURRENT_POWER_SOURCE        556
#define IDS_BATTERY_STATUS              557
#define IDS_FULL_BATTERY_LIFETIME       558
#define IDS_REMAINING_BAT_LIFETIME      559
#define IDS_POWER_ON_AC_LINE            560
#define IDS_POWER_ON_DC_BATTERY         561
#define IDS_POWER_HIGH_BATTERY          562
#define IDS_POWER_LOW_BATTERY           563
#define IDS_POWER_CRITICAL_BATTERY      564
#define IDS_POWER_CHARGING              565
#define IDS_POWER_NO_BATTERY            566

#define IDS_NETSTAT_PROC_NAME           567
#define IDS_NETSTAT_PROTOCOL            568
#define IDS_NETSTAT_LOCAL_ADDRESS       569
#define IDS_NETSTAT_REMOTE_ADDRESS      570
#define IDS_NETSTAT_STATE               571

#define IDS_SHARE_MAX_USES              572
#define IDS_SHARE_CURRENT_USES          573
#define IDS_SHARE_UNLIMITED             574

#define IDS_ACTUSERS_DOMAIN             575
#define IDS_ACTUSERS_USERID             576
#define IDS_ACTUSERS_STATE              577
#define IDS_ACTUSERS_CLIENTNAME         578
#define IDS_ACTUSERS_LOGON_TYPE         579

#define IDS_OPENFILE_ID                 580
#define IDS_OPENFILE_PATH               581
#define IDS_OPENFILE_COUNT              582

#define IDS_DEVICE_NAME                 583
#define IDS_DEVICE_DRIVER_DATE          584
#define IDS_DEVICE_DRIVER_VENDOR        585
#define IDS_DEVICE_VENDOR_ID            586
#define IDS_DEVICE_CLASS_NAME           587
#define IDS_DEVICE_ESTIMATED            588
#define IDS_DEVICE_VERSION              589
#define IDS_DEVICE_ESTIMATED_VENDOR     590
#define IDS_DEVICE_UNKNOWN_DEVICE       591
#define IDS_DEVICE_INSTANCE_ID          592

#define IDS_LICENSE_APP_NAME            593
#define IDS_LICENSE_PRODUCT_KEY         594

#define IDS_SENSOR_TEMPERATURE          595
#define IDS_SENSOR_CORE_TEMPERATURE     596
#define IDS_SENSOR_VOLTAGE              597

#define IDS_SPD_PRODUCT_DATE            598
#define IDS_SPD_MODULE_SIZE             599
#define IDS_SPD_FREQUENT                600
#define IDS_SPD_MEMORY_TYPE             601
#define IDS_SPD_MODULE_TYPE             602
#define IDS_SPD_VOLTAGE                 603
#define IDS_SPD_MODULE_WIDTH            604
#define IDS_SPD_REFRESH_RATE            605
#define IDS_SPD_MEMORY_TIMINGS          606
#define IDS_SPD_ERROR_DETECTION         607
#define IDS_SPD_SUPPORTED_CAS_LATENCIES 608
#define IDS_SPD_DIMM_TYPE               609
#define IDS_SPD_ANALYSIS_PROBE          610
#define IDS_SPD_FET_SWITCH_EXT          611
#define IDS_SPD_WEAK_DRIVER             612
#define IDS_SPD_BURST_LENGTHS           613
#define IDS_SPD_TIMING_RCD              614
#define IDS_SPD_TIMING_RP               615
#define IDS_SPD_TIMING_RAS              616
#define IDS_SPD_TIMING_RTP              617
#define IDS_SPD_TIMING_WTR              618
#define IDS_SPD_TIMING_WR               619
#define IDS_SPD_TIMING_RRD              620
#define IDS_SPD_TIMING_RFC              621
#define IDS_SPD_TIMING_RC               622
#define IDS_SPD_TIMING_IS               623
#define IDS_SPD_TIMING_IH               624
#define IDS_SPD_TIMING_DS               625
#define IDS_SPD_TIMING_DH               626
#define IDS_SPD_TIMING_FORMAT           627
#define IDS_PREV_TOOLS                  628
#define IDS_PREV_TASKMGR                629
#define IDS_PREV_REGEDIT                630
#define IDS_PREV_EXPLORER               631
#define IDS_PREV_DESKTOP_ITEMS          632
#define IDS_PREV_EXPLORER_CONTEXT_MENU  633
#define IDS_PREV_TASKBAR_CONTEXT_MENU   634
#define IDS_PREV_HIDE_TRAY              635
#define IDS_PREV_HIDE_CLOCK             636
#define IDS_PREV_TOOLBARS_ON_TASKBAR    637
#define IDS_PREV_AUTORUN                638
#define IDS_PREV_HKLM_RUN               639
#define IDS_PREV_HKLM_RUNONCE           640
#define IDS_PREV_HKCU_RUN               641
#define IDS_PREV_HKCU_RUNONCE           642
#define IDS_PREV_OTHER                  643
#define IDS_PREV_DISABLE_GPO            644
#define IDS_PREV_ALLOWED                645
#define IDS_PREV_NOT_ALLOWED            646
#define IDS_PREV_DISABLE_CMD            647
#define IDS_PREV_RECENT_DOCS            648
#define IDS_PREV_LOG_OFF                649
#define IDS_PREV_RUN_COMMAND            650
#define IDS_PREV_FIND_COMMAND           651
#define IDS_PREV_FAVORITES              652
#define IDS_PREV_SHUTDOWN               653
#define IDS_FIREWALL_ACTION             654
#define IDS_FIREWALL_STATE              655
#define IDS_FIREWALL_DIR                656
#define IDS_FIREWALL_PROTO              657
#define IDS_FIREWALL_APP                658
#define IDS_FIREWALL_NAME               659
#define IDS_FIREWALL_SCOPE              660
#define IDS_DMI_ONBOARD_DESC            661
#define IDS_DMI_ONBOARD_TYPE            662
#define IDS_DMI_ONBOARD_STATUS          663
#define IDS_DMI_BATTERY_LOCATION        664
#define IDS_DMI_BATTERY_MANUFACTURER    665
#define IDS_DMI_BATTERY_MANUFDATE       666
#define IDS_DMI_BATTERY_SERIAL          667
#define IDS_DMI_BATTERY_DEVICE_NAME     668
#define IDS_DMI_BATTERY_DEVICE_CHEMISTRY 669
#define IDS_DMI_BATTERY_DESIGN_CAPACITY  670
#define IDS_DMI_BATTERY_DESIGN_VOLTAGE   671
#define IDS_DMI_BATTERY_SBDS_VERSION     672
#define IDS_DMI_BATTERY_SBDS_SERIAL      673
#define IDS_DMI_BATTERY_SBDS_MANUFDATE   674
#define IDS_DMI_BATTERY_SBDS_DEV_CHEMIST 675
#define IDS_DMI_BATTERY_MAXERROR_IN_DATA 676
#define IDS_NETWORK_RAS_SERVER           677
#define IDS_SETTINGS_GENERAL             678
#define IDS_SETTINGS_FILTER              679
#define IDS_SETTINGS_SYSTRAY             680
#define IDS_DISPLAY_ID                   681
#define IDS_DISPLAY_MANUFACTURER         682
#define IDS_DISPLAY_MANUFACTURE_DATE     683
#define IDS_DISPLAY_TYPE                 684
#define IDS_DISPLAY_MAX_VISIBLE_SIZE     685
#define IDS_DISPLAY_SERIAL_NUMBER        686
#define IDS_DISPLAY_ASPECT_RATIO         687
#define IDS_DISPLAY_HORIZ_FREQ           688
#define IDS_DISPLAY_VERT_FREQ            689
#define IDS_DISPLAY_MAX_RESOLUTION       690
#define IDS_DISPLAY_GAMMA                691
#define IDS_DISPLAY_DPMS_MODE            692
#define IDS_DISPLAY_SUPPORTED_MODES      693
#define IDS_DISPLAY_MODEL                694
#define IDS_DISPLAY_EDID_VERSION         695
#define IDS_TYPE_HTML                    696
#define IDS_TYPE_TEXT                    697
#define IDS_TYPE_CSV                     698
#define IDS_TYPE_JSON                    699
#define IDS_TYPE_INI                     700
#define IDS_TYPE_RTF                     701
#define IDS_REGION_ANSI_CODEPAGE         702
#define IDS_REGION_OEM_CODEPAGE          703
#define IDS_REGION_MAC_CODEPAGE          704
#define IDS_REGION_LANG_CODE             705
#define IDS_SYSFILES_NAME                706
#define IDS_SYSFILES_SIZE                707
#define IDS_SYSFILES_VERSION             708
#define IDS_SYSFILES_DESC                709
#define IDS_SYSFILES_MANUF               710
#define IDS_FILETYPES_EXT                711
#define IDS_FILETYPES_DESC               712
#define IDS_FILETYPES_TYPE               713
#define IDS_SYSMON                       714
#define IDS_ASPIA_SYSMON                 715
#define IDS_SYSMON_START                 716
#define IDS_SYSMON_STOP                  717
#define IDS_SYSMON_TEST                  718
#define IDS_SYSMON_SENSOR                719
#define IDS_SYSMON_CURRENT               720
#define IDS_SYSMON_MIN                   721
#define IDS_SYSMON_MAX                   722
#define IDS_REPORTWND_TITLE              723
#define IDS_ADD_CONTENT_TABLE            724
#define IDS_CLOSE_BTN                    725
#define IDS_SAVE_BTN                     726
#define IDS_FILE_TYPE_TEXT               727
#define IDS_DEV_REPORT_TEXT              728
#define IDS_NEVER_SEND_REPORT            729
#define IDS_SEND_BTN                     730
#define IDS_DEV_REPORT_TITLE             731
#define IDS_SPD_DEVICE_WIDTH             732
#define IDS_SPD_BUS_WIDTH                733
#define IDS_SPD_MODULE_NORM_VOLTAGE      734
#define IDS_SPD_COLUMN_ADDR_BITS         735
#define IDS_SPD_ROW_ADDRESS_BITS         736
#define IDS_NOT_CONNECTED                737

#define IDS_CAT_SUMMARY           1000

#define IDS_CAT_HW                2000
#define IDS_CAT_HW_SENSOR         2001
#define IDS_CAT_HW_CPU            2002
#define IDS_CAT_HW_POWER          2003
#define IDS_CAT_HW_PRINTERS       2004
#define IDS_CAT_HW_SPD            2005

#define IDS_CAT_HW_DEVICES          2030
#define IDS_CAT_HW_ALL_DEVICES      2031
#define IDS_CAT_HW_UNKNOWN_DEVICES  2032

#define IDS_CAT_HW_DISPLAY        2040
#define IDS_CAT_HW_MONITOR        2041
#define IDS_CAT_HW_WIN_VIDEO      2042

#define IDS_CAT_HW_DMI            2050
#define IDS_CAT_HW_DMI_BIOS       2051
#define IDS_CAT_HW_DMI_SYSTEM     2052
#define IDS_CAT_HW_DMI_BOARD      2053
#define IDS_CAT_HW_DMI_CACHE      2054
#define IDS_CAT_HW_DMI_PROCESSOR  2055
#define IDS_CAT_HW_DMI_MEM        2056
#define IDS_CAT_HW_DMI_SLOT       2057
#define IDS_CAT_HW_DMI_PORTS      2058
#define IDS_CAT_HW_DMI_ENCLOSURE  2059
#define IDS_CAT_HW_DMI_ONBOARD    2060
#define IDS_CAT_HW_DMI_BATTERY    2061

#define IDS_CAT_HW_DATA           2080
#define IDS_CAT_HW_DATA_ATA       2081
#define IDS_CAT_HW_DATA_SMART     2082
#define IDS_CAT_HW_DATA_SCSI      2083
#define IDS_CAT_HW_DATA_CD        2084

#define IDS_CAT_SOFTWARE           2100
#define IDS_CAT_SOFTWARE_TASKMGR   2101
#define IDS_CAT_SOFTWARE_SERVICES  2102
#define IDS_CAT_SOFTWARE_DRIVERS   2103
#define IDS_CAT_SOFTWARE_UPD_SFT   2104
#define IDS_CAT_SOFTWARE_LICENSES  2105
#define IDS_CAT_SOFTWARE_FILETYPES 2106

#define IDS_CAT_SOFTWARE_UPDATES  2151
#define IDS_CAT_SOFTWARE_PROGRAMS 2152

#define IDS_CAT_NETWORK           2200
#define IDS_CAT_NETWORK_CARDS     2201
#define IDS_CAT_NETWORK_SHARED    2202
#define IDS_CAT_NETWORK_FILES     2203
#define IDS_CAT_NETWORK_ROUTE     2204
#define IDS_CAT_NETWORK_RAS       2205
#define IDS_CAT_NETWORK_NETSTAT   2206
#define IDS_CAT_NETWORK_FIREWALL  2207

#define IDS_CAT_NETWORK_IE         2250
#define IDS_CAT_NETWORK_IE_HISTORY 2251
#define IDS_CAT_NETWORK_IE_COOKIE  2252
#define IDS_CAT_NETWORK_IE_PARAMS  2253

#define IDS_CAT_OS              2300
#define IDS_CAT_OS_REGDATA      2301
#define IDS_CAT_OS_REGPARAM     2302
#define IDS_CAT_OS_FONTS        2303
#define IDS_CAT_OS_EVENTVIEW    2304
#define IDS_CAT_OS_AUTORUN      2305
#define IDS_CAT_OS_USERS_GROUPS 2306
#define IDS_CAT_OS_ENVIRON      2307
#define IDS_CAT_OS_SYSFOLDERS   2308
#define IDS_CAT_OS_DESKTOP      2309
#define IDS_CAT_OS_TASKSCHED    2310
#define IDS_CAT_OS_ACTIVEUSERS  2311
#define IDS_CAT_OS_PREVENTS     2312
#define IDS_CAT_OS_SYSFILES     2313

#define IDS_CAT_OS_USERS        2350
#define IDS_CAT_OS_USERGROUP    2351

#define IDS_ELOG_APPLICATIONS   2360
#define IDS_ELOG_SECURITY       2361
#define IDS_ELOG_SYSTEM         2362

#define IDS_CAT_SYSFILES_DLL    2370
#define IDS_CAT_SYSFILES_AX     2371
#define IDS_CAT_SYSFILES_EXE    2372
#define IDS_CAT_SYSFILES_SYS    2373
#define IDS_CAT_SYSFILES_KNOWN  2374

#define IDS_LANGUAGE_NAME       10000