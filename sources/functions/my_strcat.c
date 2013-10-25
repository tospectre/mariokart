/*
** my_strcat.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:37:55 2013 fhaiem Rachid
** Last update Fri Oct 11 11:38:03 2013 fhaiem Rachid
*/

#include "./include/my.h"

char	*my_strcat(char *dest, char *str)
{
  int	size;
  int	i;

  if (!str)
    return (dest);
  i = my_strlen(str);
  if (i == 0)
    return (dest);
  size = my_strlen(dest);
  dest = my_realloc(dest, size + i + 1, sizeof(char), size * sizeof(char));
  i = 0;
  while (str[i] != '\0')
    *(dest + size + i) = *(str + i++);
  *(dest + size + i) = '\0';
  return dest;
}
