/*
** free_map.c for  in /home/fhaiem_r/Rush1
** 
** Made by rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Sat Oct 26 16:26:34 2013 rachid
** Last update Sun Oct 27 17:44:18 2013 rachid
*/

#include	<unistd.h>

void		free_map(char **map)
{
  int		i;

  i = 0;
  while(map[i] != '\0')
    {
      free(map[i]);
      i++;
    }
  free(map);
}
