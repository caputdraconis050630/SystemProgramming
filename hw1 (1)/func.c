#include <stdio.h>
#include "func.h"

int func1(int a, int b)
{
    int result = 0; // rax
    int i = 0;      // ecx
    int t = 1;      // edx

    if (b <= 0)
        return 0;
    do
    {
        result += t;
        t *= a;
        i++;
    } while (b != i);

    return result;
}

int func2(int a, int b, int c)
{
    int t = b + c;
    int result = a << t;
    return result;
}

int func3(int b, int c)
{
    int result;
    int t;

    result = 7 * b;

    if (b <= 0)
    {
        return result;
    }

    t = 0;
    do
    {
        result += c;
        if (c < t)
        {
            c -= 1;
        }
        t++;
    } while (b != t);

    return result;
}

int func4(int *d, int d_count)
{
    if (d_count <= 0)
        return 0;

    int i = 0;
    int result = 0;

    do
    {
        if (d[i] & 1)
        {
            result += d[i];
        }
        i++;
    } while (i != d_count);

    return result;
}
