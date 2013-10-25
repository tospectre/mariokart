/*
** my_sort_char_tab.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:33:01 2013 fhaiem Rachid
** Last update Fri Oct 11 11:33:08 2013 fhaiem Rachid
*/

#include "./include/my.h"

void	my_sort_char_tab(char **t, int reverse)
{
  int	i;
  int	j;
  char	*temp;
  int	cmp;

  i = 0;
  while (t[i][0] != 0)
  {
    j = 0;
    while (t[j][0] != 0)
    {
      cmp = my_strcmp(t[i], t[j]);
      if ((cmp < 0 && reverse == 0) || (cmp > 0 && reverse == 1))
      {
        temp = t[i];
        t[i] = t[j];
        t[j] = temp;
      }
      ++j;
    }
    ++i;
  }
}
