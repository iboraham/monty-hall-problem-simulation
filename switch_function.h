#include <stdio.h>

int rand();

int switch_function(int shown_door, int num_doors, int player_choice)
{
  int i = 0;
  while (i == shown_door || i == player_choice)
  {
    i = rand() % num_doors;
  }
  return i;
}
