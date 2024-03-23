
#ifndef I2C_DRIVER_LIS3MDL_H
#define I2C_DRIVER_LIS3MDL_H

#include <stdint.h>
#include <stdbool.h>


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
// MAGNETOMETER : FULL SCALES 
//
#define LIS3MDL_CTRL_REG2_FS_DEFAULT      ((uint8_t) 0x00)
#define LIS3MDL_CTRL_REG2_FS_4_GA         ((uint8_t) 0x00)  // FULL SCALE = ±4 GAUSS 
#define LIS3MDL_CTRL_REG2_FS_8_GA         ((uint8_t) 0x20)  
#define LIS3MDL_CTRL_REG2_FS_12_GA        ((uint8_t) 0x40)  
#define LIS3MDL_CTRL_REG2_FS_16_GA        ((uint8_t) 0x60)  


//
// MAGNETOMETER : OUTPUT DATA RATES FROM 0.625 Hz - 80 Hz
// 
#define LIS3MDL_CTRL_REG1_ODR_0_625_HZ    ((uint8_t) 0x00)  // Output Data Rate = 0.625 Hz 
#define LIS3MDL_CTRL_REG1_ODR_1_25_HZ     ((uint8_t) 0x04)   
#define LIS3MDL_CTRL_REG1_ODR_2_5_HZ      ((uint8_t) 0x08)   
#define LIS3MDL_CTRL_REG1_ODR_5_0_HZ      ((uint8_t) 0x0C)  // Output Data Rate = 5.0 Hz   
#define LIS3MDL_CTRL_REG1_ODR_10_HZ       ((uint8_t) 0x10)  // Output Data Rate = 10 Hz    
#define LIS3MDL_CTRL_REG1_ODR_20_HZ       ((uint8_t) 0x14)    
#define LIS3MDL_CTRL_REG1_ODR_40_HZ       ((uint8_t) 0x18)      
#define LIS3MDL_CTRL_REG1_ODR_80_HZ       ((uint8_t) 0x1C)     



// 
// MAGNETOMETER : OUTPUT DATA RATES 155 Hz - 1000 Hz For X,Y AXIS, FAST_ODR Bit = 1
//  
#define LIS3MDL_CTRL_REG1_ODR_155_HZ      ((uint8_t) 0x62)  // Output Data Rate = 155 Hz,  UHP Mode 
#define LIS3MDL_CTRL_REG1_ODR_300_HZ      ((uint8_t) 0x42)  // Output Data Rate = 300 Hz,  HP Mode 
#define LIS3MDL_CTRL_REG1_ODR_560_HZ      ((uint8_t) 0x22)  // Output Data Rate = 560 Hz,  MP Mode
#define LIS3MDL_CTRL_REG1_ODR_1000_HZ     ((uint8_t) 0x02)  // Output Data Rate = 1000 Hz, LP Mode   


//
// MAGNETOMETER : CONTINOUS AND SINGLE CONVERSION OPERATING MODES
// 
#define LIS3MDL_CTRL_REG3_OM_SINGLE       ((uint8_t) 0x01)  // Single Conversion Mode For 0.625 Hz - 80 Hz
#define LIS3MDL_CTRL_REG3_OM_CONTIN       ((uint8_t) 0x00)  // Continous Coversion Mode For 155 Hz - 1000 Hz 


//
// MAGNETOMETER : OUTPUT DATA RATES 155 Hz - 1000 Hz For Z AXIS
// BYTE ORDER : BIG ENDIAN
// 
#define LIS3MDL_CTRL_REG4_ODR_155_HZ      ((uint8_t) 0x00)  // Output Data Rate = 1000 Hz,  LP Mode 
#define LIS3MDL_CTRL_REG4_ODR_300_HZ      ((uint8_t) 0x04)  // Output Data Rate = 560 Hz,   MP Mode 
#define LIS3MDL_CTRL_REG4_ODR_560_HZ      ((uint8_t) 0x08)  // Output Data Rate = 300 Hz,   HP Mode
#define LIS3MDL_CTRL_REG4_ODR_1000_HZ     ((uint8_t) 0x0C)  // Output Data Rate = 155 Hz,   UHP Mode  


//
// MAGNETOMETER : CONTINOUS AND SINGLE CONVERSION OPERATING MODES
// 
#define LIS3MDL_CTRL_REG5_FR_BDU          ((uint8_t) 0x10)  // BIT FAST_READ = 1, BIT BDU = 0 (CONTINOUS UPDATE)
#define LIS3MDL_CTRL_REG5_OM_CONTIN       ((uint8_t) 0xC0)  // BIT FAST_READ = 1, BIT BDU = 1 (OUTPUT_REGISTERS UPDATED AFTER MSB AND LSB)



//
// MAGNETOMETER : ENABLE AND DISABLE INTERRUPTS ON INT PIN
// 
//#define LIS3MDL_INTE                      ((uint8_t) 0x01) 
//#define LIS3MDL_INTD                      ((uint8_t) 0x00)  // BIT INTE = 0



//
// MAGNETOMETER : I2C BUS LENGTH TO BE SENT
// 
#define LIS3MDL_DATA16                       16  // 16 Bits
#define LIS3MDL_DATA8                         8  // 8  Bits






bool LIS3MDL_enableInterruptInt();
bool LIS3MDL_disableInterruptInt();



#endif
























