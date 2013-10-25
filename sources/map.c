/*
** map.c for map_marios in /home/fhaiem_r/Projets/MarioKart
** 
** Made by rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 25 19:18:05 2013 rachid
** Last update Fri Oct 25 19:19:10 2013 rachid
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"../includes/my.h"
#include	"../includes/marios.h"

char		**print_map(char **map)
{
  int		j;

  j = 0;
  if (map == NULL)
    exit(EXIT_FAILURE);
  while()
    {
    }
  return(map)
}

void		set_map(int width, int height)
{
  char		**map;
  int		i;

  i = 0;
  map = malloc(sizeof(*map) * width + 1);
  while(i <= height)
    {
      map[i] = malloc(sizeof(**map));
      i++;
    }
  print_map(map);
}
