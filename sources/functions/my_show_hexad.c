/*
** my_show_hexad.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:30:28 2013 fhaiem Rachid
** Last update Fri Oct 18 15:36:17 2013 rachid
*/

#include	"./include/my.h"

int     my_show_hexad(int nbr, char *str)
{
  if (nbr > 1)
    my_show_hexad(nbr / 16, str);
  my_putchar(str[nbr % 16]);

  return(0);
}
