/******************************************************************************
You are given an 8-bit register represented as an unsigned char.

 Design:
        list of  variable : reg 
        list of date type : unsigned char
        Description : Stores the integer entered by the user
  Expected output
          Modified value = 39
  Actual output:        
          Modified value = 39
*******************************************************************************/
#include <stdio.h>

unsigned char modifyBits(unsigned char reg)
{
    reg = reg | (1 << 2);    
    reg = reg & ~(1 << 5);   
    reg = reg ^ (1 << 0);    

    return reg;
}

int main()
{
    unsigned char reg = 35;

    reg = modifyBits(reg);

    printf("Modified value = %u", (unsigned int)reg);

    return 0;
}