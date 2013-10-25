/*
** my_strlowcase.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:43:25 2013 fhaiem Rachid
** Last update Fri Oct 18 15:43:40 2013 rachid
*/

#include	"./include/my.h"

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    {
      my_lowerize(str + i);
      ++i;
    }
  return (str);
}
