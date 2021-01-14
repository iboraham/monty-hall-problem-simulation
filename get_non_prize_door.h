int get_non_prize_door(int host, int num_doors, int player_choice)
{
  int i = 1;
  while (i == host || i == player_choice)
  {
    i = (i + 1) % (num_doors);
    i++;
  }
  return i;
}
