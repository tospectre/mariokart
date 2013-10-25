/*
** my_param_to_tab.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:23:19 2013 fhaiem Rachid
** Last update Fri Oct 11 11:23:36 2013 fhaiem Rachid
*/

#include <stdlib.h>
#include "./include/my.h"

struct s_stock_par	*my_param_to_tab(int ac, char **av)
{
  t_stock_par		*t;
  int			i;

  t = malloc((ac + 1) * sizeof(t_stock_par));
  i = 0;
  while (i < ac)
  {
    t[i].size_param = my_strlen(av[i]);
    t[i].str = *(av + i);
    t[i].copy = my_strdup(av[i]);
    t[i].tab = my_str_to_wordtab(av[i]);

    ++i;
  }
  t[i].str = MY_NULL;
  return (t);
}
