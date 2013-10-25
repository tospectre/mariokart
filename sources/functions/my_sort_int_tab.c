/*
** my_sort_int_tab.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:33:40 2013 fhaiem Rachid
** Last update Fri Oct 11 11:33:57 2013 fhaiem Rachid
*/

#include	"./include/my.h"

void	my_sort_int_tab(int *tab, int size)
{
  int	changed;
  int	i;

  changed = 1;
  i = 0;
  while (changed == 1)
  {
    changed = 0;
    i = 0;
    while (i < size - 1)
    {
      if (*(tab + i) > *(tab + i + 1))
      {
        my_swap(tab + i, tab + i + 1);
        changed = 1;
      }
      ++i;
    }
  }
}

