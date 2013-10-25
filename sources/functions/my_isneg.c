/*
** my_isneg.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:21:31 2013 fhaiem Rachid
** Last update Fri Oct 18 15:10:54 2013 rachid
*/

#include	"./include/my.h"

int	my_isneg(int nb)
{
  if (nb < 0)
    my_putchar('N');
  else
    my_putchar('P');

  return 0;
}
