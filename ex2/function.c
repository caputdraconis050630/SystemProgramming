#include "header.h"

void print_binary_char(unsigned char a)
{
    int i;
    unsigned char p; /* print_binary_short의 경우 unsigned short p */
    p = 0x80;        /* char의 경우 1 byte (8 bits)이므로 0x80 (10000000) 부터 */
    /* short의 경우 2 byte (16 bits)이므로 0x8000 (10000000_00000000) 부터 */
    for (i = 0; i < 8; i++)
    { /* short의 경우 2 byte (16 bits)이므로 i < 16 */
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

    for (int i = 0; i < 16; i++)
    {
        if (a & p)
            printf("1");
        else
            printf("0");
        p = p >> 1;
    }
}

typedef unsigned char *pointer;
void show_bytes(pointer start, size_t len)
{
    size_t i;
    for (i = 0; i < len; i++)
        printf("%p \t 0x%.2x\n", start + i, start[i]);
}

void example_1()
{
    printf("\n[Example 1] Unsigned vs. Signed\n");
    unsigned char zero = 0;
    for (unsigned char i = 1; i != zero; i++)
    {
        printf("bit-level i = ");
        print_binary_char(i);
        printf(", unsigned i = %u, signed i = %d\n", i, (char)i);
    }
}

void example_2()
{
    /* sign extension */
    printf("\n[Example 2] Sign extension\n");
    char a = -120;
    char b = 120;
    short sha = (short)a;
    short shb = (short)b;
    printf("char a = %d, and short sha = (short) a = %d\n", a, sha);
    printf("bit-level a = ");
    print_binary_char(a);
    printf(", bit-level sha = ");
    print_binary_short(sha);
    printf("\n");
    printf("char b = %d, and short shb = (short) b = %d\n", b, shb);
    printf("bit-level b = ");
    print_binary_char(b);
    printf(", bit-level shb = ");
    print_binary_short(shb);
    printf("\n");
}

void example_3()
{
    /* unsigned addition */
    printf("\n[Example 3] Unsigned addition\n");
    unsigned char uc = 140;
    unsigned char ud = 220;
    unsigned char ue = uc + ud;
    unsigned short ush = (unsigned short)uc + ud;
    printf("unsigned char uc = %u [", uc);
    print_binary_char(uc);
    printf("], unsigned char ud = %u [", ud);
    print_binary_char(ud);
    printf("]\n");
    printf("unsigned char ue = uc + ud = %u [", ue);
    print_binary_char(ue);
    printf("], real result = %u [", ush);
    print_binary_short(ush);
    printf("]\n");
}

void example_4()
{
    /* signed addition */
    printf("\n[Example 4] Signed addition\n");
    char c = 80;
    char d = 120;
    char e = c + d;
    short she = (unsigned short)c + d;
    printf("char c = %d [", c);
    print_binary_char(c);
    printf("], char d = %d [", d);
    print_binary_char(d);
    printf("], char e = c + d = %d [", e);
    print_binary_char(e);
    printf("], real result = %d [", she);
    print_binary_short(she);
    printf("]\n");
}

void example_5()
{
    /* data representation */
    printf("\n[Example 5] Data representation\n");
    int f = 15213;
    printf("int f = %d [%x]\n", f, f);
    show_bytes((pointer)&f, sizeof(int));
}