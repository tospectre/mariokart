/*
** my_find_prime_sup.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:20:44 2013 fhaiem Rachid
** Last update Fri Oct 18 15:45:00 2013 rachid
*/

#ifndef MAX_INT
  #define MAX_INT 0x7FFFFFFF
#endif

#include	"./include/my.h"

int	my_find_prime_sup(int nb)
{
  if (nb <= 1)
    return 0;
  while (my_is_prime(nb) == 0)
  {
    if (nb >= MAX_INT - 1)
      return 0;
    ++nb;
  }
  return nb;
}
