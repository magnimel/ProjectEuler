#include <stdio.h>
#include <stdbool.h>

#define c 1000000000000
int main(void)
{
    bool x = false;

    for (long i = 1; i < c; i++)
    {
        for (long j = 1; j <= 20; j++)
        {
            if (i % j != 0)
            {
                x = false;
                break;
            }
            else
            {
                x = true;
            }
        }
        if (x)
        {
            printf("smallest number: %li\n", i);
            break;
        }
    }
    if (!x)
    {
        printf("range is too small\n");
    }
}