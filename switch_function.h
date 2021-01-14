int switch_function(int shown_door, int num_doors, int player_choice)
{
  int i = 1;
  while (i == shown_door || i == player_choice)
  {
    i = (i + 1) % (num_doors);
    i++;
  }
  return i;
}
