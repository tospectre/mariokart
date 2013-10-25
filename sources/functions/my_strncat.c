/*
** my_strncat.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:43:48 2013 fhaiem Rachid
** Last update Fri Oct 11 11:43:56 2013 fhaiem Rachid
*/

#include "./include/my.h"

char	*my_strncat(char *dest, char *src, int nb)
{
  int	size;
  int	i;

  size = my_strlen(dest);
  i = 0;
  while (i < nb && *(src + i) != '\0')
    *(dest + size + i) = *(src + i++);
  *(dest + size + i) = '\0';
  return (dest);
}
