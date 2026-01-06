#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE (30)
#define HALF_DECK (13)

int main()
{
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char deck[27], shuffle[27];
  int i, count;

  strncpy(deck, alphabet, BUFFER_SIZE);
  count = 0;
  printf("original deck: %s\n", alphabet);

  /* loop until shuffled is the same as alphabet */
  while (1)
  {
    for (i = 0; i < HALF_DECK; i++)
    {
      shuffle[2 * i] = deck[i];
      shuffle[(2 * i) + 1] = deck[HALF_DECK + i];
    }
    shuffle[2 * i] = '\0';
    count++;
    printf("shuffle #%d: %s\n", count, shuffle);

    /* if they are the same, break out of loop */
    if (strncmp(alphabet, shuffle, BUFFER_SIZE) == 0)
    {
      break;
    }

    /* otherwise, copy shuffle into deck and keep shuffling */
    strncpy(deck, shuffle, BUFFER_SIZE);
  }

  printf("took %d shuffles \n", count);
  return 0;
}