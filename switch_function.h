#include <stdio.h>
#include <stdlib.h>

int switch_function(int shown_door, int num_doors, int player_choice)
{
  int i = 1;
  while (shown_door == i || i == player_choice)
  {
    i = (i + 1) % num_doors;
  }
  return i;
}
