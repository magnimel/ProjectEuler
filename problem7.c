#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool x = false;
    int rank = 2;
    int n = 2;

    printf("rank 1: \"2\"\n");

    for (long i = 1; i < n; i++)
    {
        for (long j = 2; j < i; j++)
        {
            if (i % j == 0)
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
            rank++;
        }
        if (rank > 100000)
        {
            printf("rank %i: \"%li\"\n", rank - 1, i);
            break;
        }
        n++;
    }
}