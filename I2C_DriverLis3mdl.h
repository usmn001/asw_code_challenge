
#ifndef I2C_DRIVER_LIS3MDL_H
#define I2C_DRIVER_LIS3MDL_H

#include <stdint.h>
#include <stdbool.h>
#include "i2c.h"


// I2C ADDRESS, 8-Bit in Address is assumed not controlled by processor.

#define  LIS3MDL_I2C_ADDRESS_READ        ((uint8_t)0x39)      // I2C ADDRESS FOR READ OPERATION,  SDO/SA1 = 0 
#define  LIS3MDL_I2C_ADDRESS_WRITE       ((uint8_t)0x38)      // I2C ADDRESS FOR WRITE OPERATION, SDO/SA1 = 0 


// DEVICE REGISTERS

#define  LIS3MDL_OFFSET_X_REG_L_M         0x05      // X-AXIS OFFSET REGISTER   
#define  LIS3MDL_OFFSET_X_REG_H_M         0x06
#define  LIS3MDL_OFFSET_Y_REG_L_M         0x07      // Y-AXIS OFFSET REGISTER
#define  LIS3MDL_OFFSET_Y_REG_H_M         0x08
#define  LIS3MDL_OFFSET_Z_REG_L_M         0x09      // Z-AXIX OFFSET REGISTER
#define  LIS3MDL_OFFSET_Z_REG_H_M         0x0A

#define  LIS3MDL_CTRL_REG1                0x20      // CTRL REGISTER 1
#define  LIS3MDL_CTRL_REG2                0x21      
#define  LIS3MDL_CTRL_REG3                0x22      
#define  LIS3MDL_CTRL_REG4                0x23
#define  LIS3MDL_CTRL_REG5                0x24

#define  LIS3MDL_STATUS_REG               0x27      // STATUS REGISTER 

#define  LIS3MDL_OUT_X_L                  0x28      // X-AXIS OUTPUT REGISTER
#define  LIS3MDL_OUT_X_H                  0x29

#define  LIS3MDL_OUT_Y_L                  0x2A      // Y-AXIS OUTPUT REGISTER
#define  LIS3MDL_OUT_Y_H                  0x2B

#define  LIS3MDL_OUT_Z_L                  0x2C      // Z-AXIS OUTPUT REGISTER
#define  LIS3MDL_OUT_Z_H                  0x2D

#define  LIS3MDL_TEMP_OUT_L               0x2E      // TEMPERATURE SENSOR REGISTER
#define  LIS3MDL_TEMP_OUT_H               0x2F

#define  LIS3MDL_INT_CFG                  0x30      // INTERRUPT CONFIGURATION REGISTER 

#define  LIS3MDL_INT_SRC                  0x31      // INTERRUPT SOURCE REGISTER 

#define  LIS3MDL_INT_THIS_L               0x32      // INTERRUPT THRESHOLD REGISTER
#define  LIS3MDL_INT_THIS_H               0x33


//
// MAGNETOMETER : CONTINOUS AND SINGLE CONVERSION OPERATING MODES
// 
#define LIS3MDL_CTRL_REG3_OM_SINGLE       ((uint8_t) 0x01)  // Single Conversion Mode For 0.625 Hz - 80 Hz
#define LIS3MDL_CTRL_REG3_OM_CONTIN       ((uint8_t) 0x00)  // Continous Coversion Mode For 155 Hz - 1000 Hz 


//
// MAGNETOMETER : CONTINOUS AND SINGLE CONVERSION OPERATING MODES
// 
#define LIS3MDL_CTRL_REG5_FR_BDU          ((uint8_t) 0x10)  // BIT FAST_READ = 1, BIT BDU = 0 (CONTINOUS UPDATE)
#define LIS3MDL_CTRL_REG5_OM_CONTIN       ((uint8_t) 0xC0)  // BIT FAST_READ = 1, BIT BDU = 1 (OUTPUT_REGISTERS UPDATED AFTER MSB AND LSB)
 
//
// MAGNETOMETER : I2C BUS LENGTH TO BE SENT
// 
#define LIS3MDL_DATA16                        2  // 2 Bytes, 16 Bits
#define LIS3MDL_DATA8                         1  //  1 Byte, 8 Bits


//
// MAGNETOMETER : OUTPUT DATA RATES FROM 0.625 Hz - 80 Hz FOR X,Y,Z AXIS
// 
static uint8_t LIS3MDL_setDataRateXYZ_0_625_Hz =  0x00; // Output Data Rate = 0.625 Hz  
static uint8_t LIS3MDL_setDataRateXYZ_1_25_Hz  =  0x04;  
static uint8_t LIS3MDL_setDataRateXYZ_2_5_Hz   =  0x08;   
static uint8_t LIS3MDL_setDataRateXYZ_5_0_Hz   =  0x0C;  // Output Data Rate = 5.0 Hz   
static uint8_t LIS3MDL_setDataRateXYZ_10_Hz    =  0x10;  // Output Data Rate = 10 Hz    
static uint8_t LIS3MDL_setDataRateXYZ_20_Hz    =  0x14;   
static uint8_t LIS3MDL_setDataRateXYZ_40_Hz    =  0x18;     
static uint8_t LIS3MDL_setDataRateXYZ_80_Hz    =  0x1C;  


// 
// MAGNETOMETER : OUTPUT DATA RATES 155 Hz - 1000 Hz For X,Y AXIS, FAST_ODR Bit = 1
//  
static uint8_t LIS3MDL_setDataRateXY_155_Hz    = 0x62;  // Output Data Rate = 155 Hz,  UHP Mode 
static uint8_t LIS3MDL_setDataRateXY_300_Hz    = 0x42;  // Output Data Rate = 300 Hz,  HP Mode 
static uint8_t LIS3MDL_setDataRateXY_560_Hz    = 0x22;  // Output Data Rate = 560 Hz,  MP Mode
static uint8_t LIS3MDL_setDataRateXY_1000_Hz   = 0x02;  // Output Data Rate = 1000 Hz, LP Mode  


//
// MAGNETOMETER : OUTPUT DATA RATES 155 Hz - 1000 Hz For Z AXIS
// BYTE ORDER :   DEFAULT LITTLE ENDIAN 
// 
static uint8_t LIS3MDL_setDataRateZ_155_Hz     =    0x00;  // Output Data Rate = 155 Hz,   UHP Mode 
static uint8_t LIS3MDL_setDataRateZ_300_Hz     =    0x04;  // Output Data Rate = 300 Hz,   HP Mode 
static uint8_t LIS3MDL_setDataRateZ_560_Hz     =    0x08;  // Output Data Rate = 560 Hz,   MP Mode
static uint8_t LIS3MDL_setDataRateZ_1000_Hz    =    0x0C;  // Output Data Rate = 1000 Hz,  LP Mode  


static uint8_t LIS3MDL_getFullScale            = 0;
static uint8_t LIS3MDL_getHighDataRate_Z       = 0;
static uint8_t LIS3MDL_getDataRate_XYZ         = 0;
static uint8_t LIS3MDL_enableIntPin            = 0x01;         
static uint8_t LIS3MDL_disableIntPin           = 0x00;         


// FUNCTION PROTOTYOES

status_t LIS3MDL_getFullScaleConf();

status_t LIS3MDL_setOutputDataRateXYZ_0_625();
status_t LIS3MDL_setOutputDataRateXYZ_1_25();
status_t LIS3MDL_setOutputDataRateXYZ_2_5();
status_t LIS3MDL_setOutputDataRateXYZ_5_0();
status_t LIS3MDL_setOutputDataRateXYZ_10();
status_t LIS3MDL_setOutputDataRateXYZ_20();
status_t LIS3MDL_setOutputDataRateXYZ_40();
status_t LIS3MDL_setOutputDataRateXYZ_80();

status_t LIS3MDL_setHighOutputDataRateXY_155();
status_t LIS3MDL_setHighOutputDataRateXY_300();
status_t LIS3MDL_setHighOutputDataRateXY_560();
status_t LIS3MDL_setHighOutputDataRateXY_1000();

status_t LIS3MDL_setHighOutputDataRateZ_155();
status_t LIS3MDL_setHighOutputDataRateZ_300();
status_t LIS3MDL_setHighOutputDataRateZ_560();
status_t LIS3MDL_setHighOutputDataRateZ_1000();

status_t  LIS3MDL_getHighOutputDataRateZ();
status_t  LIS3MDL_getOutputDataRateXYZ();
status_t  LIS3MDL_enableInterruptInt();
status_t  LIS3MDL_disableInterruptInt();

#endif
























