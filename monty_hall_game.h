#include <stdlib.h>
#include <stdio.h>
#include "get_non_prize_door.h"
#include "switch_function.h"

extern int get_non_prize_door(int host, int num_doors, int player_choice);
extern int switch_function(int shown_door, int num_doors, int player_choice);

int *monty_hall_game(int _switch, int num_tests)
{
  const int num_doors = 3;
  int win_switch_cnt = 0;
  int win_no_switch_cnt = 0;
  int lose_switch_cnt = 0;
  int lose_no_switch_cnt = 0;

  for (int i = 1; i < num_tests; i++)
  {
    int door_with_prize = rand() % num_doors;
    int host = door_with_prize;
    int player_choice = rand() % num_doors;

    int shown_door = get_non_prize_door(host, num_doors, player_choice);
    if (_switch == 1)
    {
      player_choice = switch_function(shown_door, num_doors, player_choice);
    }

    if (player_choice == host && _switch == 0)
    {
      win_no_switch_cnt = win_no_switch_cnt + 1;
    }
    else if (player_choice == host && _switch == 1)
    {
      win_switch_cnt = win_switch_cnt + 1;
    }
    else if (player_choice != host && _switch == 0)
    {
      lose_no_switch_cnt = lose_no_switch_cnt + 1;
    }
    else if (player_choice != host && _switch == 1)
    {
      lose_switch_cnt = lose_switch_cnt + 1;
    }
    else
    {
      printf("Error!!!");
    }
  }
  int *res = malloc(sizeof(4));
  res[0] = win_switch_cnt;
  res[1] = win_no_switch_cnt;
  res[2] = lose_switch_cnt;
  res[3] = lose_no_switch_cnt;
  return res;
}
