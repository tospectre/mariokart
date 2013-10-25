/*
** marios.c for marios_game in /home/fhaiem_r/Projets/MarioKart/sources
** 
** Made by rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 25 18:37:30 2013 rachid
** Last update Fri Oct 25 19:19:14 2013 rachid
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"../includes/my.h"
#include	"../includes/marios.h"

int		main(int argc, char **argv)
{
  int		width;
  int		height;

  if (argc != 3)
    {
      my_putstr("[USAGE] : ");
      my_putstr(argv[0]);
      my_putstr(":  Enter two numbers for size_of_map !\n");
      exit(EXIT_FAILURE);
    }
  width = my_getnbr(argv[1]);
  height = my_getnbr(argv[2]);
  set_map(width, height);
  exit(EXIT_SUCCESS);
}
