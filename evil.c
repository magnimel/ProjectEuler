#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n = get_int("Enter number: ");
    int tp = n;
    int count1 = 0;
    int count2 = 0;

    while (n > 0)
    {
        n = n / 2;
        count1++;
    }

    int binary[count1 - 1];
    n = tp;

    for (int i = count1 - 1; i >= 0; i--)
    {
        binary[i] = n % 2;
        if(binary[i] == 1)
        {
            count2++;
        }
        n = n / 2;
    }

    printf("Binary equivalent: ");

    for (int i = 0; i < count1; i++ )
    {
        printf("%i", binary[i]);
    }
    printf("\n");

    printf("No. of 1's: %i\n", count2);

    if (count2 % 2 == 0)
    {
        printf("Output: Evil Number\n");
    } 
    else
    {
        printf("Output: Not Evil Number\n");
    }
 

}


