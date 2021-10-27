#include "header.h"

void print_binary_char(unsigned char a)
{
    int i;
    unsigned char p;
    p = 0x80;

    for (i = 0; i < 8; i++)
    {
        if (a & p)
            printf("1");
        else
            printf("0");
        p = p >> 1;
    }
}

void print_binary_short(unsigned short a)
{
    int i;
    unsigned short p;
    p = 0x8000;

    for (i = 0; i < 16; i++)
    {
        if (a & p)
            printf("1");
        else
            printf("0");
        p = p >> 1;
    }
}