// binary representation
// attribute size in bytes (16), flags(16), handle (16), uuid (16/128), value(...)

#ifndef _BLE_FMY_PROFILE_H
#define _BLE_FMY_PROFILE_H

#include <stdint.h>
#include "app_config.h"

/******************************************************************************
//gatt_profile.cfg

PRIMARY_SERVICE, 1800
    CHARACTERISTIC,  2a00, READ | DYNAMIC,

    PRIMARY_SERVICE, 1801
    //CHARACTERISTIC,  2a05, INDICATE,

    PRIMARY_SERVICE, 1804
    CHARACTERISTIC,  2a07, READ | DYNAMIC,

    //The Accessory information service
    PRIMARY_SERVICE, 87290102-3C51-43B1-A1A9-11B9DC38478B
    //ProductData
    CHARACTERISTIC,  6AA50001-6352-4D57-A7B4-003A416FBB0B, READ | DYNAMIC,
    //ManufacturerName
    CHARACTERISTIC,  6AA50002-6352-4D57-A7B4-003A416FBB0B, READ | DYNAMIC,
    //ModelName
    CHARACTERISTIC,  6AA50003-6352-4D57-A7B4-003A416FBB0B, READ | DYNAMIC,
    //AccessoryCategory
    CHARACTERISTIC,  6AA50005-6352-4D57-A7B4-003A416FBB0B, READ | DYNAMIC,
    //AccessoryCapabilities
    CHARACTERISTIC,  6AA50006-6352-4D57-A7B4-003A416FBB0B, READ | DYNAMIC,
    //FirmwareVersion
    CHARACTERISTIC,  6AA50007-6352-4D57-A7B4-003A416FBB0B, READ | DYNAMIC,
    //FindMyVersion
    CHARACTERISTIC,  6AA50008-6352-4D57-A7B4-003A416FBB0B, READ | DYNAMIC,
    //BatteryType
    CHARACTERISTIC,  6AA50009-6352-4D57-A7B4-003A416FBB0B, READ | DYNAMIC,
    //BatteryLevel
    CHARACTERISTIC,  6AA5000A-6352-4D57-A7B4-003A416FBB0B, READ | DYNAMIC,

    //set handle start 0x0080
    //GATT_HANDLE_BEGIN, 0080

    //unbond,The Find My network service
    PRIMARY_SERVICE, FD44
    //Pairing Control Point
    CHARACTERISTIC,  4F860001-943B-49EF-BED4-2F730304427A, WRITE | INDICATE | DYNAMIC,

    //bond,Owner,The Find My network service
    //Configuration Control Point
    CHARACTERISTIC,  4F860002-943B-49EF-BED4-2F730304427A, WRITE | INDICATE | DYNAMIC,

    //Non Owner Control Point
    CHARACTERISTIC,  4F860003-943B-49EF-BED4-2F730304427A, WRITE | INDICATE | DYNAMIC,

    //Non Paired  && Pairedowner Information Control Point
    CHARACTERISTIC,  4F860004-943B-49EF-BED4-2F730304427A, WRITE | INDICATE | DYNAMIC,

    //Debug Control Point
    CHARACTERISTIC,  4F860005-943B-49EF-BED4-2F730304427A, WRITE | INDICATE | DYNAMIC,

    //firmware update service
    PRIMARY_SERVICE, FD43
    CHARACTERISTIC,  94110001-6D9B-4225-A4F1-6A4A7F01B0DE, WRITE | INDICATE | DYNAMIC,

    //for test
    //PRIMARY_SERVICE, a0abe2fa-bb45-462c-87c7-5970d3e6e849
    //CHARACTERISTIC,  a0abe2fa-bb45-462c-87c7-5970d3e6e849, WRITE | DYNAMIC

******************************************************************************/


//----------------------------------------------------------------------------------------------------------
//
// gatt profile include file, generated by jieli gatt_inc_generator.exe
//

static const uint8_t findmy_profile_data[] = {
    //////////////////////////////////////////////////////
    //
    // 0x0001 PRIMARY_SERVICE  1800
    //
    //////////////////////////////////////////////////////
    0x0a, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x28, 0x00, 0x18,

    /* CHARACTERISTIC,  2a00, READ | DYNAMIC, */
    // 0x0002 CHARACTERISTIC 2a00 READ | DYNAMIC
    0x0d, 0x00, 0x02, 0x00, 0x02, 0x00, 0x03, 0x28, 0x02, 0x03, 0x00, 0x00, 0x2a,
    // 0x0003 VALUE 2a00 READ | DYNAMIC
    0x08, 0x00, 0x02, 0x01, 0x03, 0x00, 0x00, 0x2a,

    //////////////////////////////////////////////////////
    //
    // 0x0004 PRIMARY_SERVICE  1801
    //
    //////////////////////////////////////////////////////
    0x0a, 0x00, 0x02, 0x00, 0x04, 0x00, 0x00, 0x28, 0x01, 0x18,

    //////////////////////////////////////////////////////
    //
    // 0x0005 PRIMARY_SERVICE  1804
    //
    //////////////////////////////////////////////////////
    0x0a, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x28, 0x04, 0x18,

    /* CHARACTERISTIC,  2a07, READ | DYNAMIC, */
    // 0x0006 CHARACTERISTIC 2a07 READ | DYNAMIC
    0x0d, 0x00, 0x02, 0x00, 0x06, 0x00, 0x03, 0x28, 0x02, 0x07, 0x00, 0x07, 0x2a,
    // 0x0007 VALUE 2a07 READ | DYNAMIC
    0x08, 0x00, 0x02, 0x01, 0x07, 0x00, 0x07, 0x2a,

    //////////////////////////////////////////////////////
    //
    // 0x0008 PRIMARY_SERVICE  87290102-3C51-43B1-A1A9-11B9DC38478B
    //
    //////////////////////////////////////////////////////
    0x18, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x28, 0x8b, 0x47, 0x38, 0xdc, 0xb9, 0x11, 0xa9, 0xa1, 0xb1, 0x43, 0x51, 0x3c, 0x02, 0x01, 0x29, 0x87,

    /* CHARACTERISTIC,  6AA50001-6352-4D57-A7B4-003A416FBB0B, READ | DYNAMIC, */
    // 0x0009 CHARACTERISTIC 6AA50001-6352-4D57-A7B4-003A416FBB0B READ | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x09, 0x00, 0x03, 0x28, 0x02, 0x0a, 0x00, 0x0b, 0xbb, 0x6f, 0x41, 0x3a, 0x00, 0xb4, 0xa7, 0x57, 0x4d, 0x52, 0x63, 0x01, 0x00, 0xa5, 0x6a,
    // 0x000a VALUE 6AA50001-6352-4D57-A7B4-003A416FBB0B READ | DYNAMIC
    0x16, 0x00, 0x02, 0x03, 0x0a, 0x00, 0x0b, 0xbb, 0x6f, 0x41, 0x3a, 0x00, 0xb4, 0xa7, 0x57, 0x4d, 0x52, 0x63, 0x01, 0x00, 0xa5, 0x6a,

    /* CHARACTERISTIC,  6AA50002-6352-4D57-A7B4-003A416FBB0B, READ | DYNAMIC, */
    // 0x000b CHARACTERISTIC 6AA50002-6352-4D57-A7B4-003A416FBB0B READ | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x0b, 0x00, 0x03, 0x28, 0x02, 0x0c, 0x00, 0x0b, 0xbb, 0x6f, 0x41, 0x3a, 0x00, 0xb4, 0xa7, 0x57, 0x4d, 0x52, 0x63, 0x02, 0x00, 0xa5, 0x6a,
    // 0x000c VALUE 6AA50002-6352-4D57-A7B4-003A416FBB0B READ | DYNAMIC
    0x16, 0x00, 0x02, 0x03, 0x0c, 0x00, 0x0b, 0xbb, 0x6f, 0x41, 0x3a, 0x00, 0xb4, 0xa7, 0x57, 0x4d, 0x52, 0x63, 0x02, 0x00, 0xa5, 0x6a,

    /* CHARACTERISTIC,  6AA50003-6352-4D57-A7B4-003A416FBB0B, READ | DYNAMIC, */
    // 0x000d CHARACTERISTIC 6AA50003-6352-4D57-A7B4-003A416FBB0B READ | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x0d, 0x00, 0x03, 0x28, 0x02, 0x0e, 0x00, 0x0b, 0xbb, 0x6f, 0x41, 0x3a, 0x00, 0xb4, 0xa7, 0x57, 0x4d, 0x52, 0x63, 0x03, 0x00, 0xa5, 0x6a,
    // 0x000e VALUE 6AA50003-6352-4D57-A7B4-003A416FBB0B READ | DYNAMIC
    0x16, 0x00, 0x02, 0x03, 0x0e, 0x00, 0x0b, 0xbb, 0x6f, 0x41, 0x3a, 0x00, 0xb4, 0xa7, 0x57, 0x4d, 0x52, 0x63, 0x03, 0x00, 0xa5, 0x6a,

    /* CHARACTERISTIC,  6AA50005-6352-4D57-A7B4-003A416FBB0B, READ | DYNAMIC, */
    // 0x000f CHARACTERISTIC 6AA50005-6352-4D57-A7B4-003A416FBB0B READ | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x0f, 0x00, 0x03, 0x28, 0x02, 0x10, 0x00, 0x0b, 0xbb, 0x6f, 0x41, 0x3a, 0x00, 0xb4, 0xa7, 0x57, 0x4d, 0x52, 0x63, 0x05, 0x00, 0xa5, 0x6a,
    // 0x0010 VALUE 6AA50005-6352-4D57-A7B4-003A416FBB0B READ | DYNAMIC
    0x16, 0x00, 0x02, 0x03, 0x10, 0x00, 0x0b, 0xbb, 0x6f, 0x41, 0x3a, 0x00, 0xb4, 0xa7, 0x57, 0x4d, 0x52, 0x63, 0x05, 0x00, 0xa5, 0x6a,

    /* CHARACTERISTIC,  6AA50006-6352-4D57-A7B4-003A416FBB0B, READ | DYNAMIC, */
    // 0x0011 CHARACTERISTIC 6AA50006-6352-4D57-A7B4-003A416FBB0B READ | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x11, 0x00, 0x03, 0x28, 0x02, 0x12, 0x00, 0x0b, 0xbb, 0x6f, 0x41, 0x3a, 0x00, 0xb4, 0xa7, 0x57, 0x4d, 0x52, 0x63, 0x06, 0x00, 0xa5, 0x6a,
    // 0x0012 VALUE 6AA50006-6352-4D57-A7B4-003A416FBB0B READ | DYNAMIC
    0x16, 0x00, 0x02, 0x03, 0x12, 0x00, 0x0b, 0xbb, 0x6f, 0x41, 0x3a, 0x00, 0xb4, 0xa7, 0x57, 0x4d, 0x52, 0x63, 0x06, 0x00, 0xa5, 0x6a,

    /* CHARACTERISTIC,  6AA50007-6352-4D57-A7B4-003A416FBB0B, READ | DYNAMIC, */
    // 0x0013 CHARACTERISTIC 6AA50007-6352-4D57-A7B4-003A416FBB0B READ | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x13, 0x00, 0x03, 0x28, 0x02, 0x14, 0x00, 0x0b, 0xbb, 0x6f, 0x41, 0x3a, 0x00, 0xb4, 0xa7, 0x57, 0x4d, 0x52, 0x63, 0x07, 0x00, 0xa5, 0x6a,
    // 0x0014 VALUE 6AA50007-6352-4D57-A7B4-003A416FBB0B READ | DYNAMIC
    0x16, 0x00, 0x02, 0x03, 0x14, 0x00, 0x0b, 0xbb, 0x6f, 0x41, 0x3a, 0x00, 0xb4, 0xa7, 0x57, 0x4d, 0x52, 0x63, 0x07, 0x00, 0xa5, 0x6a,

    /* CHARACTERISTIC,  6AA50008-6352-4D57-A7B4-003A416FBB0B, READ | DYNAMIC, */
    // 0x0015 CHARACTERISTIC 6AA50008-6352-4D57-A7B4-003A416FBB0B READ | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x15, 0x00, 0x03, 0x28, 0x02, 0x16, 0x00, 0x0b, 0xbb, 0x6f, 0x41, 0x3a, 0x00, 0xb4, 0xa7, 0x57, 0x4d, 0x52, 0x63, 0x08, 0x00, 0xa5, 0x6a,
    // 0x0016 VALUE 6AA50008-6352-4D57-A7B4-003A416FBB0B READ | DYNAMIC
    0x16, 0x00, 0x02, 0x03, 0x16, 0x00, 0x0b, 0xbb, 0x6f, 0x41, 0x3a, 0x00, 0xb4, 0xa7, 0x57, 0x4d, 0x52, 0x63, 0x08, 0x00, 0xa5, 0x6a,

    /* CHARACTERISTIC,  6AA50009-6352-4D57-A7B4-003A416FBB0B, READ | DYNAMIC, */
    // 0x0017 CHARACTERISTIC 6AA50009-6352-4D57-A7B4-003A416FBB0B READ | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x17, 0x00, 0x03, 0x28, 0x02, 0x18, 0x00, 0x0b, 0xbb, 0x6f, 0x41, 0x3a, 0x00, 0xb4, 0xa7, 0x57, 0x4d, 0x52, 0x63, 0x09, 0x00, 0xa5, 0x6a,
    // 0x0018 VALUE 6AA50009-6352-4D57-A7B4-003A416FBB0B READ | DYNAMIC
    0x16, 0x00, 0x02, 0x03, 0x18, 0x00, 0x0b, 0xbb, 0x6f, 0x41, 0x3a, 0x00, 0xb4, 0xa7, 0x57, 0x4d, 0x52, 0x63, 0x09, 0x00, 0xa5, 0x6a,

    /* CHARACTERISTIC,  6AA5000A-6352-4D57-A7B4-003A416FBB0B, READ | DYNAMIC, */
    // 0x0019 CHARACTERISTIC 6AA5000A-6352-4D57-A7B4-003A416FBB0B READ | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x19, 0x00, 0x03, 0x28, 0x02, 0x1a, 0x00, 0x0b, 0xbb, 0x6f, 0x41, 0x3a, 0x00, 0xb4, 0xa7, 0x57, 0x4d, 0x52, 0x63, 0x0a, 0x00, 0xa5, 0x6a,
    // 0x001a VALUE 6AA5000A-6352-4D57-A7B4-003A416FBB0B READ | DYNAMIC
    0x16, 0x00, 0x02, 0x03, 0x1a, 0x00, 0x0b, 0xbb, 0x6f, 0x41, 0x3a, 0x00, 0xb4, 0xa7, 0x57, 0x4d, 0x52, 0x63, 0x0a, 0x00, 0xa5, 0x6a,

    //////////////////////////////////////////////////////
    //
    // 0x001b PRIMARY_SERVICE  FD44
    //
    //////////////////////////////////////////////////////
    0x0a, 0x00, 0x02, 0x00, 0x1b, 0x00, 0x00, 0x28, 0x44, 0xfd,

    /* CHARACTERISTIC,  4F860001-943B-49EF-BED4-2F730304427A, WRITE | INDICATE | DYNAMIC, */
    // 0x001c CHARACTERISTIC 4F860001-943B-49EF-BED4-2F730304427A WRITE | INDICATE | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x1c, 0x00, 0x03, 0x28, 0x28, 0x1d, 0x00, 0x7a, 0x42, 0x04, 0x03, 0x73, 0x2f, 0xd4, 0xbe, 0xef, 0x49, 0x3b, 0x94, 0x01, 0x00, 0x86, 0x4f,
    // 0x001d VALUE 4F860001-943B-49EF-BED4-2F730304427A WRITE | INDICATE | DYNAMIC
    0x16, 0x00, 0x28, 0x03, 0x1d, 0x00, 0x7a, 0x42, 0x04, 0x03, 0x73, 0x2f, 0xd4, 0xbe, 0xef, 0x49, 0x3b, 0x94, 0x01, 0x00, 0x86, 0x4f,
    // 0x001e CLIENT_CHARACTERISTIC_CONFIGURATION
    0x0a, 0x00, 0x0a, 0x01, 0x1e, 0x00, 0x02, 0x29, 0x00, 0x00,

    /* CHARACTERISTIC,  4F860002-943B-49EF-BED4-2F730304427A, WRITE | INDICATE | DYNAMIC, */
    // 0x001f CHARACTERISTIC 4F860002-943B-49EF-BED4-2F730304427A WRITE | INDICATE | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x1f, 0x00, 0x03, 0x28, 0x28, 0x20, 0x00, 0x7a, 0x42, 0x04, 0x03, 0x73, 0x2f, 0xd4, 0xbe, 0xef, 0x49, 0x3b, 0x94, 0x02, 0x00, 0x86, 0x4f,
    // 0x0020 VALUE 4F860002-943B-49EF-BED4-2F730304427A WRITE | INDICATE | DYNAMIC
    0x16, 0x00, 0x28, 0x03, 0x20, 0x00, 0x7a, 0x42, 0x04, 0x03, 0x73, 0x2f, 0xd4, 0xbe, 0xef, 0x49, 0x3b, 0x94, 0x02, 0x00, 0x86, 0x4f,
    // 0x0021 CLIENT_CHARACTERISTIC_CONFIGURATION
    0x0a, 0x00, 0x0a, 0x01, 0x21, 0x00, 0x02, 0x29, 0x00, 0x00,

    /* CHARACTERISTIC,  4F860003-943B-49EF-BED4-2F730304427A, WRITE | INDICATE | DYNAMIC, */
    // 0x0022 CHARACTERISTIC 4F860003-943B-49EF-BED4-2F730304427A WRITE | INDICATE | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x22, 0x00, 0x03, 0x28, 0x28, 0x23, 0x00, 0x7a, 0x42, 0x04, 0x03, 0x73, 0x2f, 0xd4, 0xbe, 0xef, 0x49, 0x3b, 0x94, 0x03, 0x00, 0x86, 0x4f,
    // 0x0023 VALUE 4F860003-943B-49EF-BED4-2F730304427A WRITE | INDICATE | DYNAMIC
    0x16, 0x00, 0x28, 0x03, 0x23, 0x00, 0x7a, 0x42, 0x04, 0x03, 0x73, 0x2f, 0xd4, 0xbe, 0xef, 0x49, 0x3b, 0x94, 0x03, 0x00, 0x86, 0x4f,
    // 0x0024 CLIENT_CHARACTERISTIC_CONFIGURATION
    0x0a, 0x00, 0x0a, 0x01, 0x24, 0x00, 0x02, 0x29, 0x00, 0x00,

    /* CHARACTERISTIC,  4F860004-943B-49EF-BED4-2F730304427A, WRITE | INDICATE | DYNAMIC, */
    // 0x0025 CHARACTERISTIC 4F860004-943B-49EF-BED4-2F730304427A WRITE | INDICATE | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x25, 0x00, 0x03, 0x28, 0x28, 0x26, 0x00, 0x7a, 0x42, 0x04, 0x03, 0x73, 0x2f, 0xd4, 0xbe, 0xef, 0x49, 0x3b, 0x94, 0x04, 0x00, 0x86, 0x4f,
    // 0x0026 VALUE 4F860004-943B-49EF-BED4-2F730304427A WRITE | INDICATE | DYNAMIC
    0x16, 0x00, 0x28, 0x03, 0x26, 0x00, 0x7a, 0x42, 0x04, 0x03, 0x73, 0x2f, 0xd4, 0xbe, 0xef, 0x49, 0x3b, 0x94, 0x04, 0x00, 0x86, 0x4f,
    // 0x0027 CLIENT_CHARACTERISTIC_CONFIGURATION
    0x0a, 0x00, 0x0a, 0x01, 0x27, 0x00, 0x02, 0x29, 0x00, 0x00,

    /* CHARACTERISTIC,  4F860005-943B-49EF-BED4-2F730304427A, WRITE | INDICATE | DYNAMIC, */
    // 0x0028 CHARACTERISTIC 4F860005-943B-49EF-BED4-2F730304427A WRITE | INDICATE | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x28, 0x00, 0x03, 0x28, 0x28, 0x29, 0x00, 0x7a, 0x42, 0x04, 0x03, 0x73, 0x2f, 0xd4, 0xbe, 0xef, 0x49, 0x3b, 0x94, 0x05, 0x00, 0x86, 0x4f,
    // 0x0029 VALUE 4F860005-943B-49EF-BED4-2F730304427A WRITE | INDICATE | DYNAMIC
    0x16, 0x00, 0x28, 0x03, 0x29, 0x00, 0x7a, 0x42, 0x04, 0x03, 0x73, 0x2f, 0xd4, 0xbe, 0xef, 0x49, 0x3b, 0x94, 0x05, 0x00, 0x86, 0x4f,
    // 0x002a CLIENT_CHARACTERISTIC_CONFIGURATION
    0x0a, 0x00, 0x0a, 0x01, 0x2a, 0x00, 0x02, 0x29, 0x00, 0x00,

    //////////////////////////////////////////////////////
    //
    // 0x002b PRIMARY_SERVICE  FD43
    //
    //////////////////////////////////////////////////////
    0x0a, 0x00, 0x02, 0x00, 0x2b, 0x00, 0x00, 0x28, 0x43, 0xfd,

    /* CHARACTERISTIC,  94110001-6D9B-4225-A4F1-6A4A7F01B0DE, WRITE | INDICATE | DYNAMIC, */
    // 0x002c CHARACTERISTIC 94110001-6D9B-4225-A4F1-6A4A7F01B0DE WRITE | INDICATE | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x2c, 0x00, 0x03, 0x28, 0x28, 0x2d, 0x00, 0xde, 0xb0, 0x01, 0x7f, 0x4a, 0x6a, 0xf1, 0xa4, 0x25, 0x42, 0x9b, 0x6d, 0x01, 0x00, 0x11, 0x94,
    // 0x002d VALUE 94110001-6D9B-4225-A4F1-6A4A7F01B0DE WRITE | INDICATE | DYNAMIC
    0x16, 0x00, 0x28, 0x03, 0x2d, 0x00, 0xde, 0xb0, 0x01, 0x7f, 0x4a, 0x6a, 0xf1, 0xa4, 0x25, 0x42, 0x9b, 0x6d, 0x01, 0x00, 0x11, 0x94,
    // 0x002e CLIENT_CHARACTERISTIC_CONFIGURATION
    0x0a, 0x00, 0x0a, 0x01, 0x2e, 0x00, 0x02, 0x29, 0x00, 0x00,

    // END
    0x00, 0x00,
};
//
// characteristics <--> handles
//
#define ATT_CHARACTERISTIC_2a00_01_VALUE_HANDLE 0x0003
#define ATT_CHARACTERISTIC_2a07_01_VALUE_HANDLE 0x0007
#define ATT_CHARACTERISTIC_6AA50001_6352_4D57_A7B4_003A416FBB0B_01_VALUE_HANDLE 0x000a
#define ATT_CHARACTERISTIC_6AA50002_6352_4D57_A7B4_003A416FBB0B_01_VALUE_HANDLE 0x000c
#define ATT_CHARACTERISTIC_6AA50003_6352_4D57_A7B4_003A416FBB0B_01_VALUE_HANDLE 0x000e
#define ATT_CHARACTERISTIC_6AA50005_6352_4D57_A7B4_003A416FBB0B_01_VALUE_HANDLE 0x0010
#define ATT_CHARACTERISTIC_6AA50006_6352_4D57_A7B4_003A416FBB0B_01_VALUE_HANDLE 0x0012
#define ATT_CHARACTERISTIC_6AA50007_6352_4D57_A7B4_003A416FBB0B_01_VALUE_HANDLE 0x0014
#define ATT_CHARACTERISTIC_6AA50008_6352_4D57_A7B4_003A416FBB0B_01_VALUE_HANDLE 0x0016
#define ATT_CHARACTERISTIC_6AA50009_6352_4D57_A7B4_003A416FBB0B_01_VALUE_HANDLE 0x0018
#define ATT_CHARACTERISTIC_6AA5000A_6352_4D57_A7B4_003A416FBB0B_01_VALUE_HANDLE 0x001a
#define ATT_CHARACTERISTIC_4F860001_943B_49EF_BED4_2F730304427A_01_VALUE_HANDLE 0x001d
#define ATT_CHARACTERISTIC_4F860001_943B_49EF_BED4_2F730304427A_01_CLIENT_CONFIGURATION_HANDLE 0x001e
#define ATT_CHARACTERISTIC_4F860002_943B_49EF_BED4_2F730304427A_01_VALUE_HANDLE 0x0020
#define ATT_CHARACTERISTIC_4F860002_943B_49EF_BED4_2F730304427A_01_CLIENT_CONFIGURATION_HANDLE 0x0021
#define ATT_CHARACTERISTIC_4F860003_943B_49EF_BED4_2F730304427A_01_VALUE_HANDLE 0x0023
#define ATT_CHARACTERISTIC_4F860003_943B_49EF_BED4_2F730304427A_01_CLIENT_CONFIGURATION_HANDLE 0x0024
#define ATT_CHARACTERISTIC_4F860004_943B_49EF_BED4_2F730304427A_01_VALUE_HANDLE 0x0026
#define ATT_CHARACTERISTIC_4F860004_943B_49EF_BED4_2F730304427A_01_CLIENT_CONFIGURATION_HANDLE 0x0027
#define ATT_CHARACTERISTIC_4F860005_943B_49EF_BED4_2F730304427A_01_VALUE_HANDLE 0x0029
#define ATT_CHARACTERISTIC_4F860005_943B_49EF_BED4_2F730304427A_01_CLIENT_CONFIGURATION_HANDLE 0x002a
#define ATT_CHARACTERISTIC_94110001_6D9B_4225_A4F1_6A4A7F01B0DE_01_VALUE_HANDLE 0x002d
#define ATT_CHARACTERISTIC_94110001_6D9B_4225_A4F1_6A4A7F01B0DE_01_CLIENT_CONFIGURATION_HANDLE 0x002e





//整理服务UUID的范围

#define UNPAIR_CONTROL_START_HANDLE            (ATT_CHARACTERISTIC_4F860001_943B_49EF_BED4_2F730304427A_01_VALUE_HANDLE - 1)
#define UNPAIR_CONTROL_END_HANDLE              (ATT_CHARACTERISTIC_4F860001_943B_49EF_BED4_2F730304427A_01_CLIENT_CONFIGURATION_HANDLE)

#define CFG_CONTROL_START_HANDLE               (ATT_CHARACTERISTIC_4F860002_943B_49EF_BED4_2F730304427A_01_VALUE_HANDLE - 1)
#define CFG_CONTROL_END_HANDLE                 (ATT_CHARACTERISTIC_4F860002_943B_49EF_BED4_2F730304427A_01_CLIENT_CONFIGURATION_HANDLE)

#define NON_OWNER_CONTROL_START_HANDLE         (ATT_CHARACTERISTIC_4F860003_943B_49EF_BED4_2F730304427A_01_VALUE_HANDLE - 1)
#define NON_OWNER_CONTROL_END_HANDLE           (ATT_CHARACTERISTIC_4F860003_943B_49EF_BED4_2F730304427A_01_CLIENT_CONFIGURATION_HANDLE)

#define PAIRED_OWNER_INFO_START_HANDLE         (ATT_CHARACTERISTIC_4F860004_943B_49EF_BED4_2F730304427A_01_VALUE_HANDLE - 1)
#define PAIRED_OWNER_INFO_END_HANDLE           (ATT_CHARACTERISTIC_4F860004_943B_49EF_BED4_2F730304427A_01_CLIENT_CONFIGURATION_HANDLE)

#define DEBUG_CONTROL_START_HANDLE             (ATT_CHARACTERISTIC_4F860005_943B_49EF_BED4_2F730304427A_01_VALUE_HANDLE - 1)
#define DEBUG_CONTROL_END_HANDLE               (ATT_CHARACTERISTIC_4F860005_943B_49EF_BED4_2F730304427A_01_CLIENT_CONFIGURATION_HANDLE)

#define FW_UPDATE_START_HANDLE                 (ATT_CHARACTERISTIC_94110001_6D9B_4225_A4F1_6A4A7F01B0DE_01_VALUE_HANDLE - 2)
#define FW_UPDATE_END_HANDLE                   (ATT_CHARACTERISTIC_94110001_6D9B_4225_A4F1_6A4A7F01B0DE_01_CLIENT_CONFIGURATION_HANDLE)

#endif
