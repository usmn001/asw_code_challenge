

#include "I2C_DriverLis3mdl.h"
#include "i2c.h"




//
// THIS FUNCTION ACQUIRES FULL SCALE CONFIGURATION VALUES
//
// PROVIDES FULL SCALE CONFIGURATIONS OF ±4 GAUSS, ±8 GAUSS, ±12 GAUSS, ±16 GAUSS OUTPUT DATA RATES FOR X,Y,Z AXIS ARE PROVIDED 
// BY READING THE CTRL_REG2 OF MAGNETOMETER WHILE REBOOT, SOFT_RST BITS ARE OF DEFAULT VALUE
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG2         : FULL SCALE CONFIGURATION REGISTER 
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output: 
// @param  LIS3MDL_getFullScale     : PROVIDING CTRL_REG2 VALUES FOR FULL SCALES AS DEFINED  
//                                    0x00 FULL SCALE ±4 GAUSS 
//                                    0x20 FULL SCALE ±8 GAUSS 
//                                    0x40 FULL SCALE ±12 GAUSS 
//                                    0x60 FULL SCALE ±16 GAUSS 
//
//                                 
//
// @return  : STATUS_OK    FULL SCALE READ SUCCESSFULLY  
//            STATUS_ERROR FULL SCALE READ FAILED   
//
status_t LIS3MDL_getFullScaleConf()
{
status_t st; 
st = i2c_read(LIS3MDL_I2C_ADDRESS_READ,LIS3MDL_CTRL_REG2,LIS3MDL_DATA8,&LIS3MDL_getFullScale);
return st;
}


//
// THIS FUNCTION SETS OUTPUT DATA RATE OF 80 Hz FOR X,Y & Z AXIS 
// 
// OUTPUT DATA RATE 0.625 Hz FOR X,Y & Z AXIS ARE SET BY WRITING THE CTRL_REG1 OF MAGNETOMETER WHILE TEMPERATURE SENSOR,
// SELF TEST ARE DISABLED AS DEFAULT.
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG1         : OUTPUT DATA RATE CONFIGURATION REGISTER FOR X,Y AXIS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output : NA                                 
//
// @return  : STATUS_OK    OUTPUT DATA RATE SET SUCCESSFULLY  
//            STATUS_ERROR OUTPUT DATA RATE SET FAILED   
//
status_t LIS3MDL_setOutputDataRateXYZ_80()
{
status_t st; 
st = i2c_write(LIS3MDL_I2C_ADDRESS_WRITE,LIS3MDL_CTRL_REG1,LIS3MDL_DATA8,&LIS3MDL_setDataRateXYZ_80_Hz);
return st;
}

//
// THIS FUNCTION SETS OUTPUT DATA RATE OF 40 Hz FOR X,Y & Z AXIS 
// 
// OUTPUT DATA RATE 0.625 Hz FOR X,Y & Z AXIS ARE SET BY WRITING THE CTRL_REG1 OF MAGNETOMETER WHILE TEMPERATURE SENSOR,
// SELF TEST ARE DISABLED AS DEFAULT.
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG1         : OUTPUT DATA RATE CONFIGURATION REGISTER FOR X,Y AXIS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output : NA                                 
//
// @return  : STATUS_OK    OUTPUT DATA RATE SET SUCCESSFULLY  
//            STATUS_ERROR OUTPUT DATA RATE SET FAILED   
//
status_t LIS3MDL_setOutputDataRateXYZ_40()
{
status_t st; 
st = i2c_write(LIS3MDL_I2C_ADDRESS_WRITE,LIS3MDL_CTRL_REG1,LIS3MDL_DATA8,&LIS3MDL_setDataRateXYZ_40_Hz);
return st;
}


//
// THIS FUNCTION SETS OUTPUT DATA RATE OF 20 Hz FOR X,Y & Z AXIS 
// 
// OUTPUT DATA RATE 0.625 Hz FOR X,Y & Z AXIS ARE SET BY WRITING THE CTRL_REG1 OF MAGNETOMETER WHILE TEMPERATURE SENSOR,
// SELF TEST ARE DISABLED AS DEFAULT.
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG1         : OUTPUT DATA RATE CONFIGURATION REGISTER FOR X,Y AXIS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output : NA                                 
//
// @return  : STATUS_OK    OUTPUT DATA RATE SET SUCCESSFULLY  
//            STATUS_ERROR OUTPUT DATA RATE SET FAILED   
//
status_t LIS3MDL_setOutputDataRateXYZ_20()
{
status_t st; 
st = i2c_write(LIS3MDL_I2C_ADDRESS_WRITE,LIS3MDL_CTRL_REG1,LIS3MDL_DATA8,&LIS3MDL_setDataRateXYZ_20_Hz);
return st;
}

//
// THIS FUNCTION SETS OUTPUT DATA RATE OF 10 Hz FOR X,Y & Z AXIS 
// 
// OUTPUT DATA RATE 0.625 Hz FOR X,Y & Z AXIS ARE SET BY WRITING THE CTRL_REG1 OF MAGNETOMETER WHILE TEMPERATURE SENSOR,
// SELF TEST ARE DISABLED AS DEFAULT.
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG1         : OUTPUT DATA RATE CONFIGURATION REGISTER FOR X,Y AXIS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output : NA                                 
//
// @return  : STATUS_OK    OUTPUT DATA RATE SET SUCCESSFULLY  
//            STATUS_ERROR OUTPUT DATA RATE SET FAILED   
//
status_t LIS3MDL_setOutputDataRateXYZ_10()
{
status_t st; 
st = i2c_write(LIS3MDL_I2C_ADDRESS_WRITE,LIS3MDL_CTRL_REG1,LIS3MDL_DATA8,&LIS3MDL_setDataRateXYZ_10_Hz);
return st;
}

//
// THIS FUNCTION SETS OUTPUT DATA RATE OF 5.0 Hz FOR X,Y & Z AXIS 
// 
// OUTPUT DATA RATE 0.625 Hz FOR X,Y & Z AXIS ARE SET BY WRITING THE CTRL_REG1 OF MAGNETOMETER WHILE TEMPERATURE SENSOR,
// SELF TEST ARE DISABLED AS DEFAULT.
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG1         : OUTPUT DATA RATE CONFIGURATION REGISTER FOR X,Y AXIS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output : NA                                 
//
// @return  : STATUS_OK    OUTPUT DATA RATE SET SUCCESSFULLY  
//            STATUS_ERROR OUTPUT DATA RATE SET FAILED   
//
status_t LIS3MDL_setOutputDataRateXYZ_5_0()
{
status_t st; 
st = i2c_write(LIS3MDL_I2C_ADDRESS_WRITE,LIS3MDL_CTRL_REG1,LIS3MDL_DATA8,&LIS3MDL_setDataRateXYZ_5_0_Hz);
return st;
}


//
// THIS FUNCTION SETS OUTPUT DATA RATE OF 2.5 Hz FOR X,Y & Z AXIS 
// 
// OUTPUT DATA RATE 0.625 Hz FOR X,Y & Z AXIS ARE SET BY WRITING THE CTRL_REG1 OF MAGNETOMETER WHILE TEMPERATURE SENSOR,
// SELF TEST ARE DISABLED AS DEFAULT.
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG1         : OUTPUT DATA RATE CONFIGURATION REGISTER FOR X,Y AXIS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output : NA                                 
//
// @return  : STATUS_OK    OUTPUT DATA RATE SET SUCCESSFULLY  
//            STATUS_ERROR OUTPUT DATA RATE SET FAILED   
//
status_t LIS3MDL_setOutputDataRateXYZ_2_5()
{
status_t st; 
st = i2c_write(LIS3MDL_I2C_ADDRESS_WRITE,LIS3MDL_CTRL_REG1,LIS3MDL_DATA8,&LIS3MDL_setDataRateXYZ_2_5_Hz);
return st;
}



//
// THIS FUNCTION SETS OUTPUT DATA RATE OF 1.25 Hz FOR X,Y & Z AXIS 
// 
// OUTPUT DATA RATE 0.625 Hz FOR X,Y & Z AXIS ARE SET BY WRITING THE CTRL_REG1 OF MAGNETOMETER WHILE TEMPERATURE SENSOR,
// SELF TEST ARE DISABLED AS DEFAULT.
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG1         : OUTPUT DATA RATE CONFIGURATION REGISTER FOR X,Y AXIS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output : NA                                 
//
// @return  : STATUS_OK    OUTPUT DATA RATE SET SUCCESSFULLY  
//            STATUS_ERROR OUTPUT DATA RATE SET FAILED   
//
status_t LIS3MDL_setOutputDataRateXYZ_1_25()
{
status_t st; 
st = i2c_write(LIS3MDL_I2C_ADDRESS_WRITE,LIS3MDL_CTRL_REG1,LIS3MDL_DATA8,&LIS3MDL_setDataRateXYZ_1_25_Hz);
return st;
}



//
// THIS FUNCTION SETS OUTPUT DATA RATE OF 0.625 Hz FOR X,Y & Z AXIS 
// 
// OUTPUT DATA RATE 0.625 Hz FOR X,Y & Z AXIS ARE SET BY WRITING THE CTRL_REG1 OF MAGNETOMETER WHILE TEMPERATURE SENSOR,
// SELF TEST ARE DISABLED AS DEFAULT.
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG1         : OUTPUT DATA RATE CONFIGURATION REGISTER FOR X,Y AXIS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output : NA                                 
//
// @return  : STATUS_OK    OUTPUT DATA RATE SET SUCCESSFULLY  
//            STATUS_ERROR OUTPUT DATA RATE SET FAILED   
//
status_t LIS3MDL_setOutputDataRateXYZ_0_625()
{
status_t st; 
st = i2c_write(LIS3MDL_I2C_ADDRESS_WRITE,LIS3MDL_CTRL_REG1,LIS3MDL_DATA8,&LIS3MDL_setDataRateXYZ_0_625_Hz);
return st;
}



//
// THIS FUNCTION SETS OUTPUT DATA RATE OF 155 Hz FOR X,Y AXIS 
// 
// OUTPUT DATA RATE 155 Hz FOR X,Y AXIS ARE SET BY WRITING THE CTRL_REG1 OF MAGNETOMETER WHILE TEMPERATURE SENSOR,
// SELF TEST ARE DISABLED AS DEFAULT.
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG1         : OUTPUT DATA RATE CONFIGURATION REGISTER FOR X,Y AXIS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output : NA                                 
//
// @return  : STATUS_OK    OUTPUT DATA RATE SET SUCCESSFULLY  
//            STATUS_ERROR OUTPUT DATA RATE SET FAILED   
//
status_t LIS3MDL_setHighOutputDataRateXY_155()
{
status_t st; 
st = i2c_write(LIS3MDL_I2C_ADDRESS_WRITE,LIS3MDL_CTRL_REG1,LIS3MDL_DATA8,&LIS3MDL_setDataRateXY_155_Hz);
return st;
}


//
// THIS FUNCTION SETS OUTPUT DATA RATE OF 300 Hz FOR X,Y AXIS 
// 
// OUTPUT DATA RATE 155 Hz FOR X,Y AXIS ARE SET BY WRITING THE CTRL_REG1 OF MAGNETOMETER WHILE TEMPERATURE SENSOR,
// SELF TEST ARE DISABLED AS DEFAULT.
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG1         : OUTPUT DATA RATE CONFIGURATION REGISTER FOR X,Y AXIS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output : NA                                 
//
// @return  : STATUS_OK    OUTPUT DATA RATE SET SUCCESSFULLY  
//            STATUS_ERROR OUTPUT DATA RATE SET FAILED   
//
status_t LIS3MDL_setHighOutputDataRateXY_300()
{
status_t st; 
st = i2c_write(LIS3MDL_I2C_ADDRESS_WRITE,LIS3MDL_CTRL_REG1,LIS3MDL_DATA8,&LIS3MDL_setDataRateXY_300_Hz);
return st;
}

//
// THIS FUNCTION SETS OUTPUT DATA RATE OF 560 Hz FOR X,Y AXIS 
// 
// OUTPUT DATA RATE 155 Hz FOR X,Y AXIS ARE SET BY WRITING THE CTRL_REG1 OF MAGNETOMETER WHILE TEMPERATURE SENSOR,
// SELF TEST ARE DISABLED AS DEFAULT.
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG1         : OUTPUT DATA RATE CONFIGURATION REGISTER FOR X,Y AXIS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output : NA                                 
//
// @return  : STATUS_OK    OUTPUT DATA RATE SET SUCCESSFULLY  
//            STATUS_ERROR OUTPUT DATA RATE SET FAILED   
//
status_t LIS3MDL_setHighOutputDataRateXY_560()
{
status_t st; 
st = i2c_write(LIS3MDL_I2C_ADDRESS_WRITE,LIS3MDL_CTRL_REG1,LIS3MDL_DATA8,&LIS3MDL_setDataRateXY_560_Hz);
return st;
}


//
// THIS FUNCTION SETS OUTPUT DATA RATE OF 1000 Hz FOR X,Y AXIS 
// 
// OUTPUT DATA RATE 155 Hz FOR X,Y AXIS ARE SET BY WRITING THE CTRL_REG1 OF MAGNETOMETER WHILE TEMPERATURE SENSOR,
// SELF TEST ARE DISABLED AS DEFAULT.
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG1         : OUTPUT DATA RATE CONFIGURATION REGISTER FOR X,Y AXIS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output : NA                                 
//
// @return  : STATUS_OK    OUTPUT DATA RATE SET SUCCESSFULLY  
//            STATUS_ERROR OUTPUT DATA RATE SET FAILED   
//
status_t LIS3MDL_setHighOutputDataRateXY_1000()
{
status_t st; 
st = i2c_write(LIS3MDL_I2C_ADDRESS_WRITE,LIS3MDL_CTRL_REG1,LIS3MDL_DATA8,&LIS3MDL_setDataRateXY_1000_Hz);
return st;
}







//
// THIS FUNCTION SETS OUTPUT DATA RATE OF 155 Hz FOR Z AXIS 
// 
// OUTPUT DATA RATE 155 Hz FOR Z AXIS ARE SET BY WRITING THE CTRL_REG4 OF MAGNETOMETER WHILE LITTLE ENDIAN ORDER AS DEFAULT.
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG4        : OUTPUT DATA RATE CONFIGURATION REGISTER FOR X,Y AXIS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output : NA                                 
//
// @return  : STATUS_OK    OUTPUT DATA RATE SET SUCCESSFULLY  
//            STATUS_ERROR OUTPUT DATA RATE SET FAILED   
//
status_t LIS3MDL_setHighOutputDataRateZ_155()
{
status_t st; 
st = i2c_write(LIS3MDL_I2C_ADDRESS_WRITE,LIS3MDL_CTRL_REG4,LIS3MDL_DATA8,&LIS3MDL_setDataRateZ_155_Hz);
return st;
}


//
// THIS FUNCTION SETS OUTPUT DATA RATE OF 300 Hz FOR Z AXIS 
// 
// OUTPUT DATA RATE 300 Hz FOR Z AXIS ARE SET BY WRITING THE CTRL_REG4 OF MAGNETOMETER WHILE LITTLE ENDIAN ORDER AS DEFAULT.
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG4         : OUTPUT DATA RATE CONFIGURATION REGISTER FOR X,Y AXIS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output : NA                                 
//
// @return  : STATUS_OK    OUTPUT DATA RATE SET SUCCESSFULLY  
//            STATUS_ERROR OUTPUT DATA RATE SET FAILED   
//
status_t LIS3MDL_setHighOutputDataRateZ_300()
{
status_t st; 
st = i2c_write(LIS3MDL_I2C_ADDRESS_WRITE,LIS3MDL_CTRL_REG4,LIS3MDL_DATA8,&LIS3MDL_setDataRateZ_300_Hz);
return st;
}

//
// THIS FUNCTION SETS OUTPUT DATA RATE OF 560 Hz FOR Z AXIS 
// 
// OUTPUT DATA RATE 560 Hz FOR Z AXIS ARE SET BY WRITING THE CTRL_REG4 OF MAGNETOMETER WHILE LITTLE ENDIAN ORDER AS DEFAULT.
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG4         : OUTPUT DATA RATE CONFIGURATION REGISTER FOR X,Y AXIS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output : NA                                 
//
// @return  : STATUS_OK    OUTPUT DATA RATE SET SUCCESSFULLY  
//            STATUS_ERROR OUTPUT DATA RATE SET FAILED   
//
status_t LIS3MDL_setHighOutputDataRateZ_560()
{
status_t st; 
st = i2c_write(LIS3MDL_I2C_ADDRESS_WRITE,LIS3MDL_CTRL_REG4,LIS3MDL_DATA8,&LIS3MDL_setDataRateZ_560_Hz);
return st;
}


//
// THIS FUNCTION SETS OUTPUT DATA RATE OF 1000 Hz FOR Z AXIS 
// 
// OUTPUT DATA RATE 1000 Hz FOR Z AXIS ARE SET BY WRITING THE CTRL_REG4 OF MAGNETOMETER WHILE LITTLE ENDIAN ORDER AS DEFAULT.
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG4         : OUTPUT DATA RATE CONFIGURATION REGISTER FOR Z AXIS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output : NA                                 
//
// @return  : STATUS_OK    OUTPUT DATA RATE SET SUCCESSFULLY  
//            STATUS_ERROR OUTPUT DATA RATE SET FAILED   
//
status_t LIS3MDL_setHighOutputDataRateZ_1000()
{
status_t st; 
st = i2c_write(LIS3MDL_I2C_ADDRESS_WRITE,LIS3MDL_CTRL_REG4,LIS3MDL_DATA8,&LIS3MDL_setDataRateZ_1000_Hz);
return st;
}

//
// THIS FUNCTION ACQUIRES HIGHER OUTPUT DATA RATE FOR Z AXIS 
//
// OUTPUT DATA RATES 155 Hz,300 Hz, 560 hZ,1000 Hz ARE PROVIDED FOR Z AXIS ONLY
// BY READING THE CTRL_REG4 OF MAGNETOMETER WHILE DEFAULT LITTLE ENDIAN ORDER IS RETAINED
//
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG4         : HIGHER OUTPUT DATA RATE CONFIGURATION REGISTER FOR Z AXIS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output: 
// @param LIS3MDL_getHighDataRate_Z : 0x02 OUTPUT DATA RATE 1000 Hz (LP MODE)
//                                    0x22 OUTPUT DATA RATE 560 Hz  (MP MODE)
//                                    0x42 OUTPUT DATA RATE 300 Hz  (HP MODE)
//                                    0x62 OUTPUT DATA RATE 155 Hz  (UHP MODE)
//                                 
//
// @return  : STATUS_OK    OUTPUT DATA RATE READ SUCCESSFULLY  
//            STATUS_ERROR OUTPUT DATA RATE READ FAILED   
//
status_t LIS3MDL_getHighOutputDataRateZ()
{
status_t st; 
st = i2c_read(LIS3MDL_I2C_ADDRESS_READ,LIS3MDL_CTRL_REG4,LIS3MDL_DATA8,&LIS3MDL_getHighDataRate_Z);
return st;
}



//
// THIS FUNCTION PROVIDES OUTPUT DATA RATE FOR X, Y  & Z AXIS 
//
// OUTPUT DATA RATES OF 0.625 Hz, 1.625 Hz, 2.5 Hz ,5 Hz ,10 Hz ,20 Hz ,40 Hz,80 Hz FOR X,Y,Z AXIS ARE PROVIDED 
// HIGHER OUTPUT DATA RATES OF 155 Hz, 300 Hz, 560 Hz, 1000 Hz ARE PROVIDED ONLY FOR X AND Y AXIS
// BY READING THE CTRL_REG1 OF MAGNETOMETER WHILE TEMPERATURE SENSOR,
// SELF TEST ARE DISABLED AS SPECIFIED DEFAULT FOR DATA RATES, FAST_ODR BIT IS SET FOR 1000,560,300,155 Hz DATA RATES
// 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_READ  : I2C BUS READ ADDRESS
// @param LIS3MDL_CTRL_REG1         : OUTPUT DATA RATE CONFIGURATION REGISTER FOR X,Y AXIS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
//
// Output: 
// @param LIS3MDL_getDataRate_XYZ   : PROVIDING CTRL_REG1 VALUES FOR DATA RATES AS DEFINED  
//                                    0x00 OUTPUT DATA RATE 0.625 Hz
//                                    0x04 OUTPUT DATA RATE 1.625 Hz
//                                    0x08 OUTPUT DATA RATE 2.5 Hz
//                                    0x0C OUTPUT DATA RATE 5 Hz
//                                    0x10 OUTPUT DATA RATE 10 Hz
//                                    0x14 OUTPUT DATA RATE 20 Hz
//                                    0x18 OUTPUT DATA RATE 40 Hz
//                                    0x1C OUTPUT DATA RATE 80 Hz
//
//                                    0x02 OUTPUT DATA RATE 1000 Hz (LP MODE)
//                                    0x22 OUTPUT DATA RATE 560 Hz  (MP MODE)
//                                    0x42 OUTPUT DATA RATE 300 Hz  (HP MODE)
//                                    0x62 OUTPUT DATA RATE 155 Hz  (UHP MODE)
//                                 
//
// @return  : STATUS_OK    OUTPUT DATA RATE READ SUCCESSFULLY  
//            STATUS_ERROR OUTPUT DATA RATE READ FAILED   
//
status_t LIS3MDL_getOutputDataRateXYZ()
{
status_t st; 
st = i2c_read(LIS3MDL_I2C_ADDRESS_READ,LIS3MDL_CTRL_REG1,LIS3MDL_DATA8,&LIS3MDL_getDataRate_XYZ);
return st;
}




//
// THIS FUNCTION ENABLES INTERRUPT ON INT PIN
//
// INTERRUPT ON INT PIN IS ENABLED BY SETTING THE IEN BIT OF INTERRUPT CONFIGURATION REGISTER 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_WRITE : I2C BUS WRITE ADDRESS
// @param LIS3MDL_INT_CFG           : INTERRUPT CONFIGURATION REGISTER ADDRESS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
// @param LIS3MDL_enableIntPin     : ENABLE INTERRUPT ON INT PIN, BIT INTE = 1
//
// Output: NA
// 
//
// @return :  STATUS_OK     INTERRUPT IS ENABLED
//            STATUS_ERROR  INTERRUPT IS NOT ENABLED
//
status_t LIS3MDL_enableInterruptInt()
{
status_t st; 
st=i2c_write(LIS3MDL_I2C_ADDRESS_WRITE,LIS3MDL_INT_CFG, LIS3MDL_DATA8,&LIS3MDL_enableIntPin);
return st;
}

//
// THIS FUNCTION DISABLES INTERRUPT ON INT PIN
//
// INTERRUPT ON INT PIN IS DISABLED BY RESETTING THE IEN BIT OF INTERRUPT CONFIGURATION REGISTER 
//
// @author M USMAN
// Input:
// @param LIS3MDL_I2C_ADDRESS_WRITE : I2C BUS WRITE ADDRESS
// @param LIS3MDL_INT_CFG           : INTERRUPT CONFIGURATION REGISTER ADDRESS
// @param LIS3MDL_DATA8             : SPECIFYING 8 NUMBER OF BITS TO BE SENT ON 12C BUS
// @param LIS3MDL_disableIntPin     : DISABLE INTERRUPT ON INT PIN, BIT INTE = 0
// Output: NA
// 
//
// @return :  STATUS_OK     INTERRUPT IS DISABLED
//            STATUS_ERROR  INTERRUPT IS NOT DISABLED
//
status_t LIS3MDL_disableInterruptInt()
{
status_t st;
st = i2c_write(LIS3MDL_I2C_ADDRESS_WRITE,LIS3MDL_INT_CFG, LIS3MDL_DATA8,&LIS3MDL_disableIntPin);
return st;

}





