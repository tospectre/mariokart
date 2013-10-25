/*
** my_read_all.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:28:13 2013 fhaiem Rachid
** Last update Fri Oct 18 15:43:02 2013 rachid
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	"./include/my.h"

char	*my_realloc_first(char *buff, char *str)
{
  char	*s;
  int	i;

  s = malloc(sizeof(char) * (1 + my_strlen(str)));
  i = 0;
  while (str[i])
    {
      s[i] = str[i];
      i++;
    }
  s[i] = buff[0];
  return (s);
}

char	*read_all()
{
  char	buff[2];
  int	ret;
  char	*s;
  int	st;

  st = 0;
  s = malloc(sizeof(char) * 2);
  while ((ret = read(0, buff, 1)) != -1 && st == 0 && ret != 0)
    {
      if (buff[0] == '\n')
        return (s);
      s = my_realloc_first(buff, s);
    }
  return (s);
}
