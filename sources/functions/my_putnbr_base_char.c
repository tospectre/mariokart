/*
** my_putnbr_base_char.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:26:57 2013 fhaiem Rachid
** Last update Fri Oct 18 14:41:00 2013 rachid
*/

#include <stdlib.h>
#include "./include/my.h"

int	get_final_size(int nbr, char *base, char is_neg, int base_size)
{
  int	size;

  size = 0;
  while (nbr > 0)
  {
    nbr /= base_size;
    ++size;
  }

  return (size + (is_neg == 1 ? 2 : 1));
}

char	*my_putnbr_base_char(int nbr, char *base)
{
  int	base_size;
  char	*value;
  int	i;
  char	is_neg;

  value = MY_NULL;
  base_size = my_strlen(base);
  if (base_size <= 0)
    return (MY_NULL);
  i = 0;
  is_neg = (nbr < 0 ? 1 : 0);
  nbr *= (nbr < 0 ? -1 : 1);
  value = malloc(get_final_size(nbr, base, is_neg, base_size) * sizeof(char));
  while (nbr > 0)
  {
    value[i++] = *(base + (nbr % base_size));
    nbr /= base_size;
  }
  if (is_neg == 1)
    value[i++] = '-';
  value[i] = '\0';
  return (my_revstr(value));
}
