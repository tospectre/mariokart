/*
** my_substr.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 12:01:55 2013 fhaiem Rachid
** Last update Fri Oct 11 12:02:37 2013 fhaiem Rachid
*/

#include	<string.h>
#include	"./include/my.h"

char	*my_substr(char *src, int from, int to)
{
  char	*back;
  int	i;

  i = (to - from + 1) + 1;
  back = xmalloc(i * sizeof(char));
  my_memset(back, 0, i);
  i = 0;
  while (from <= to)
    back[i++] = src[from++];
  return (back);
}
