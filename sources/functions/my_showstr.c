/*
** my_showstr.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:32:15 2013 fhaiem Rachid
** Last update Fri Oct 18 15:12:42 2013 rachid
*/

#include	"./include/my.h"

int	my_showstr(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
  {
    if (my_is_printable(*(str + i)) == 1)
      my_putchar(*( str + i));
    else
      my_putnbr_base((int)*(str + i), "0123456789abcdef");
    ++i;
  }

  return (0);
}
