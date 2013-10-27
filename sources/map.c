/*
** map.c for  in /home/fhaiem_r/Rush1/sources
** 
** Made by rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Sun Oct 27 18:43:32 2013 rachid
** Last update Sun Oct 27 18:49:35 2013 rachid
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"../includes/my.h"
#include	"../includes/marios.h"

void		aff_map(char **map, int width)
{
  int		x;

  x = 0;
  while(x <= width)
    {
      my_putstr(map[x]);
      my_putchar('\n');
      x++;
    }  
}

void		score_value()
{
  int		score;

  score = 15;
  my_putstr("Your Score = ");
  my_put_nbr(score);
  my_putchar('\n');
}

void		print_map(char **map, int width, int height)
{
  int		x;
  int		y;

  score_value();
  x = 0;
  while(x <= width)
    {
      y = 0;
      while(y <= height)
	{
	  if (((y == 0) || (y == height)) || ((x == 0) || (x == width)))
	    map[x][y] = '#';
	  else
	    map[x][y] = ' ';
	  y++;
	}
      map[x][y] = '\0';
      x++;
    }
  map[x] = '\0';
  aff_map(map, width);
}

void		set_map(int x, int y)
{
  char		**map;
  int		i;

  i = 0;
  if ((map = malloc(sizeof(char*) * x + 1)) == NULL)
    {
      my_putstr("[ERROR]: malloc failed\n");
      exit(EXIT_FAILURE);
    }
  while(i <= x)
    {
      if ((map[i] = malloc(sizeof(char) * y + 1)) == NULL)
	{
	  my_putstr("[ERROR]: malloc failed\n");
	  exit(EXIT_FAILURE);
	}
      i++;
    }
  print_map(map, x, y);
}
