/*
** my_str_to_wordtab_sep.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:54:54 2013 fhaiem Rachid
** Last update Fri Oct 11 11:55:20 2013 fhaiem Rachid
*/

#include	<stdlib.h>
#include	"./include/my.h"

char	*dup_sub_str(char *, int, int);

char	**my_str_to_wordtab_sep(char *str, char sep)
{
  char	**t;
  int	i;
  int	prev;
  int	t_i;

  i = 0;
  prev = 0;
  t_i = 0;
  t = NULL;
  while (str[i] != '\0')
    {
      if (str[i] == sep)
	{
	  t = my_realloc(t, t_i + 1, sizeof(char*), t_i * sizeof(char*));
	  t[t_i] = dup_sub_str(str, prev, i - 1);
	  while (str[i] == sep && str[i] != '\0')
	    prev = ++i;
	  ++t_i;
	}
      ++i;
    }
  t = my_realloc(t, t_i + 2, sizeof(char*), t_i * sizeof(char*));
  t[t_i++] = dup_sub_str(str, prev, i - 1);
  t[t_i] = NULL;
  return (t);
}

char	*dup_sub_str(char *str, int from, int to)
{
  char	*buff;
  int	i;

  buff = malloc((to + from + 2) * sizeof(char));
  my_memset(buff, 0x0, to + from + 2);
  i = 0;
  while (from <= to)
    buff[i++] = str[from++];
  return (buff);
}
