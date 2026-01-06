#include <stdio.h>

void make_change(float change)
{

  /* amount of coins needed */
  int coins[] = {
      /* quarters = */ 0,
      /* dimes = */ 0,
      /* nickels = */ 0,
      /* pennies = */ 0};

  /* values for each coin */
  int coin_values[] = {
      /* quarters = */ 25,
      /* dimes = */ 10,
      /* nickels = */ 5,
      /* pennies = */ 1};

  /* for int math */
  int new_change = change * 100;

  for (int i = 0; i < 4; i++)
  {
    while (new_change - coin_values[i] >= 0)
    {
      new_change -= coin_values[i];
      coins[i] += 1;
    } /* while loop */
  } /* for loop */

  printf("\tquarters: %d", coins[0]);
  printf(", dimes: %d", coins[1]);
  printf(", nickels: %d", coins[2]);
  printf(", pennies: %d\n", coins[3]);
}

int main()
{

  float changes[5] = {0.49, 1.27, 0.75, 1.31, 0.83};

  for (int i = 0; i < 5; i++)
  {
    printf("making change for: $%.2f \n", changes[i]);
    make_change(changes[i]);
  }
}