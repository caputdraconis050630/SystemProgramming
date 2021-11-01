#include <stdio.h>

int main()
{
    int d[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 11; i++)
    {
        printf("%d\n", d[i] & 1);
    }

    return 0;
}