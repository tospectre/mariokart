/*
** my_memset.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:22:46 2013 fhaiem Rachid
** Last update Fri Oct 11 11:22:55 2013 fhaiem Rachid
*/

#include "./include/my.h"

void	*my_memset(void *ptr, int value, int size)
{
  int	i;
  char	*itr;

  itr = (char*)ptr;
  i = 0;
  while (i < size)
  {
    itr[i] = (char)value;
    ++i;
  }
  return (ptr);
}
