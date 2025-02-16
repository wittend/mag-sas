//=========================================================================
// i2c.h
//
// An interface for the RM3100 3-axis magnetometer from PNI Sensor Corp.
// 
// Author:      David Witten, KD0EAG
// Date:        April 21, 2020
// License:     GPL 3.0
//=========================================================================
#ifndef PNIRM3100_I2C_H
#define PNIRM3100_I2C_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <sys/ioctl.h>

//------------------------------------------
// Prototypes
//------------------------------------------
// int i2c_open(pList *p);
// void i2c_close(int fd);
void i2c_setAddress(int fd, int devAddr);
int i2c_write(int fd, uint8_t reg, uint8_t value);
uint8_t i2c_read(int fd, uint8_t reg);
int i2c_writebuf(int fd, uint8_t reg, char* buffer, short int length);
int i2c_readbuf(int fd, uint8_t reg, uint8_t* buf, short int length);

#endif //PNIRM3100_I2C_H