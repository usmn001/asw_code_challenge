AAC-Clydespace Avionics : LIS3MDL I2C Driver

1 - Introduction
Sensor driver for LIS3MDL sensor written in C programming language. This repository contains the sensor driver files (.h and .c) to be included, or linked directly as a git submodule, in your project. The driver is DO1786D compliant and supports c99,c11,c14,c17 standards while the comiler used is
GNU GCC , more information about the compiler can be found here https://gcc.gnu.org/

In order to clone the driver from ssh git link use the command : git clone git@github.com:usmn001/asw_code_challenge.git

The IDE used for the development of this driver is vscode , more details can be found here : https://code.visualstudio.com/

If same IDE is used then folder .vscode contaiing configuration files for linker and compiler can either be used without any modification or
if required minor modifications can be done for adding your own source code files in order to use the I2C Driver with application code.


2 - Integration details
The driver is platform-independent, you only need to include the driver header file I2C_DriverLis3mdl.h which also contains i2c.h header file in your source code and provide the source file I2C_DriverLis3mdl.c, i2c.c to the linker either inside your IDE or at the time of compilation. In this I2C Driver it is assumed that R/W bit of communication protocol is not managed by the microcontoller or microprocessor periperhal controller , for this purpose we are using the relevant device addresses for performing read and write operations to LIS3MDL magnetometer through I2C Bus. 

Please note that default little endian order of LIS3MDL is not changed.

This driver provides following functionality : 
- Get the full-scale configuration
- Get and set the output data rate
- Enable or disable the interrupt pin
- Read the output data of a specified axis

2.a Source code integration
Include in your project the driver files of the sensor I2C_DriverLis3mdl.h and I2C_DriverLis3mdl.c
Define in your code the read and write functions like the following:
It is required that these functions should return STATUS_OK for correct functionality.
LIS3MDL_getOffsetX()
LIS3MDL_setHighOutputDataRateXY_155()

2.b Required properties
A standard C language compiler for the target MCU
A C library for the target MCU.
 
Q & A
- What changes you would make to this interfaces for use in an RTOS
environment?
In an RTOS environment we need to make sure that the read and write operations complete in a specified and determined time to make 
relevant RTOS tasks meet their deadline, this becomes of utmost impertance in hard real time systems where we cannot violate deadline.

- How might the I2C API be improved ?
The I2C API can be further improved if incoperated features for detecting I2C Bus Other Faults like i2c Bus Busy and so on.