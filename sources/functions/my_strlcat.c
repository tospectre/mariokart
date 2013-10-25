/*
** my_strlcat.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:42:34 2013 fhaiem Rachid
** Last update Fri Oct 11 11:42:40 2013 fhaiem Rachid
*/

#include "./include/my.h"

int	my_strlcat(char *dest, char *src, int size)
{
  int	i;
  int	dest_size;

  dest_size = my_strlen(dest);
  i = 0;
  while (i + dest_size < size && *(src + i) != '\0')
    *(dest + i + dest_size) = *(src + i++);
  *(dest + i + dest_size) = '\0';
  return (size);
}
