#include <stdio.h>

int main(void)
{
    int sum1 = 0;
    int sum2 = 0;
    int dif;
    
    for (int i = 1; i <= 100; i++)
    {
        sum1 = sum1 + i*i;
        sum2 = sum2 + i;
    }
    sum2 = sum2 * sum2;
    dif = sum1 - sum2;
    printf("%i\n", dif);
}