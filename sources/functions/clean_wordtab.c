/*
** clean_wordtab.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:16:11 2013 fhaiem Rachid
** Last update Fri Oct 11 11:34:55 2013 fhaiem Rachid
*/

#include	<stdlib.h>
#include	"./include/my.h"

void	clean_wordtab(char **s)
{
  int	i;

  i = 0;
  while (s[i])
    free(s[i++]);
  free(s);
}
