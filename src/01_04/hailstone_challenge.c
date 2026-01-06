#include <stdio.h>

void hailstone(int n)
{
  int current = 1;
  printf("Hailstone sequence: ");

  /* done when n = 1*/
  while (n != 1)
  {
    printf("%d, ", n); /* print current n value */

    /* next value is n/2 when even */
    if (n % 2 == 0)
    {
      n = n / 2;
      current += 1;
    }
    /* next value is (n*3)+1 when odd */
    else
    {
      n = (n * 3) + 1;
      current += 1;
    }
  }

  printf("%d\n", n);
  printf("sequence length: %d\n", current);
}

int main()
{
  int starting_value;
  printf("enter a positive integer: ");
  scanf("%d", &starting_value);

  /* eliminate zero and negative values */
  if (starting_value < 1)
    return (1);

  hailstone(starting_value);

  return 0;
}