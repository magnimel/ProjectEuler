#include <stdio.h>

int main(void)
{

  long n = 600851475143;
  long d = 2;

  while ( n != 1)
  {
    if (n % d == 0)
    {
      n = n / d;
      printf("%li x ", d);
    }
    else
    {
      d++;
    }
  }
  printf("1\n");
}