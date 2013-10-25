/*
** my_show_wordtab.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:32:33 2013 fhaiem Rachid
** Last update Fri Oct 11 11:32:40 2013 fhaiem Rachid
*/

#include "./include/my.h"

int	my_show_wordtab(char **tab)
{
  int	i;

  if (tab == MY_NULL)
    return (0);
  i = 0;
  while (tab[i][0] != 0)
  {
    my_putstr(tab[i++]);
    my_putchar('\n');
  }
  return (0);
}
