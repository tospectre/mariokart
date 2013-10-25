/*
** my_strdup.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:39:21 2013 fhaiem Rachid
** Last update Fri Oct 11 11:39:27 2013 fhaiem Rachid
*/

#include <stdlib.h>
#include "./include/my.h"

char	*my_strdup(char *src)
{
  int	len;
  char	*back;

  len = my_strlen(src);
  back = malloc((len + 1) * sizeof(char));
  if (!back)
    return (NULL);
  my_memset(back, 0x0, len + 1);
  my_strcpy(back, src);
  return (back);
}
