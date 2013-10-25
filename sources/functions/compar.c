/*
** compar.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:19:53 2013 fhaiem Rachid
** Last update Fri Oct 18 14:42:47 2013 rachid
*/

#include	<stdlib.h>

int     compar(int i, int nb)
{
  while (i != 1)
    {
      if (nb % i != 0)
        {
          i = i - 1;
        }
      if (i == 1)
        {
          return (1);
        }
      if (nb % i == 0)
        {
          return (0);
        }
    }
  exit(EXIT_SUCCESS);
}
