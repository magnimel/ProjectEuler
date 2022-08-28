#include <stdio.h>

int main(void)
{
  int tp;
  int a = 0,b = 1;

  while (b < 4000000)
  {
  printf("%i ",b);
  tp = b;
  b = b + a;
  a = tp;

  }
  printf("\n");
}