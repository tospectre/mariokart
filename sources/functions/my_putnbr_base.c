/*
** my_putnbr_base.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:26:33 2013 fhaiem Rachid
** Last update Fri Oct 18 15:29:37 2013 rachid
*/

#include	"./include/my.h"

void	init_putnbr_base_tab(char *tab)
{
  int	i;

  i = 0;
  while (i < 1024)
    *(tab + i++) = '\0';
}

int	my_putnbr_base(int nbr, char *base)
{
  int	base_size;
  char	value[1024];
  int	i;
  int	my_nbr;

  my_nbr = nbr;
  init_putnbr_base_tab(value);
  base_size = my_strlen(base);
  if (base_size <= 0)
    return (my_nbr);
  if (nbr < 0)
  {
    my_putstr("-");
    nbr *= -1;
  }

  i = 0;
  while (nbr > 0)
  {
    value[i++] = *(base + (nbr % base_size));
    nbr /= base_size;
  }
  my_putstr(my_revstr(value));
  return (my_nbr);
}
