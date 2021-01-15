#include <stdlib.h>
#include <stdio.h>
#include "monty_hall_game.h"

extern int *monty_hall_game(int _bool, int n_test);

int main()
{
  int win_switch_cnt, win_no_switch_cnt, lose_switch_cnt, lose_no_switch_cnt;
  const int num_tests = 10000;
  int *res_0, *res_1;

  // Experiments
  res_0 = monty_hall_game(0, num_tests);
  res_1 = monty_hall_game(1, num_tests);

  win_no_switch_cnt = res_0[1];
  lose_no_switch_cnt = res_0[3];
  win_switch_cnt = res_1[0];
  lose_switch_cnt = res_1[2];

  // Results
  printf("Results:");
  printf("\nNumber of wins with switch strategy: %d", win_switch_cnt);
  printf("\nNumber of lose with switch strategy: %d", lose_switch_cnt);
  printf("\nNumber of wins with no switch strategy: %d", win_no_switch_cnt);
  printf("\nNumber of lose with no switch strategy: %d", lose_no_switch_cnt);
  printf("\nTotal Number of test per strategy: %d", num_tests);

  return 0;
}
