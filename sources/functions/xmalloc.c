/*
** xmalloc.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 12:03:59 2013 fhaiem Rachid
** Last update Fri Oct 11 12:04:17 2013 fhaiem Rachid
*/

#include	<stdlib.h>
#include	"./include/my.h"

void	*xmalloc(unsigned int size)
{
  void	*ptr;

  ptr = malloc(size);
  if (ptr == NULL)
    {
      my_putstr("Error : fail malloc\n");
      exit(1);
    }
  return (ptr);
}

