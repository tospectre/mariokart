/*
** my_strcpy.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:52:41 2013 fhaiem Rachid
** Last update Fri Oct 11 11:52:42 2013 fhaiem Rachid
*/

#include "./include/my.h"

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  if (!src)
    return (dest);
  i = 0;
  while (*(src + i) != '\0')
    {
      *(dest + i) = *(src + i);
      ++i;
    }
  *(dest + i) = '\0';
  return (dest);
}
