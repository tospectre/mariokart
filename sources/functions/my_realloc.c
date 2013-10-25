/*
** my_realloc.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:29:22 2013 fhaiem Rachid
** Last update Fri Oct 11 11:29:33 2013 fhaiem Rachid
*/

#include	<stdlib.h>
#include	"./include/my.h"

void	*my_memcpy(void *dest, void *src, int size)
{
  char	*d;
  char	*s;
  int	i;

  d = (char*)dest;
  s = (char*)src;
  i = 0;
  while (i++ < size)
  {
    *d = *s;
    ++d;
    ++s;
  }
  return dest;
}

void	*my_realloc(void *src, int size, int type_size, int memset_size)
{
  void	*new;

  new = xmalloc(size * type_size);
  if (src != NULL)
  {
    my_memcpy(new, src, memset_size);
    free(src);
  }

  return (new);
}
