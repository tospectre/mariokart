/*
** my_revstr.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:29:57 2013 fhaiem Rachid
** Last update Fri Oct 11 11:30:03 2013 fhaiem Rachid
*/

#include "./include/my.h"

char	*my_revstr(char *str)
{
  int	i;
  int	len;

  i = 0;
  len = my_strlen(str) - 1;
  if (len <= 0)
    return (str);
  while (i < len)
  {
    my_swap_char(str + i, str + len);
    ++i;
    --len;
  }
  return (str);
}
