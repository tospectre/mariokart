/*
** my_putnbr_base_size.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:27:09 2013 fhaiem Rachid
** Last update Fri Oct 18 14:44:05 2013 rachid
*/

#include	<unistd.h>
#include	"./include/my.h"

void	my_putnbr_base_size(int nbr, int nb_char)
{
  int	base_size;
  char	value[1024];
  char	base[17];
  int	i;

  init_putnbr_base_tab(value);
  base_size = 16;
  i = 0;
  my_strcpy(base, "0123456789abcdef");
  while (nbr > 0)
  {
    value[i++] = *(base + (nbr % base_size));
    nbr /= base_size;
  }
  i = 0;
  nbr = my_strlen(value);
  if (nbr < nb_char)
    while (i++ < nb_char - nbr)
      write(1, "0", 1);
  my_putstr(my_revstr(value));
}
