/*
** marios.c for  in /home/fhaiem_r/Rush1/sources
** 
** Made by rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Sun Oct 27 18:44:13 2013 rachid
** Last update Sun Oct 27 18:44:14 2013 rachid
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"../includes/my.h"
#include	"../includes/marios.h"

int		main(int argc, char **argv)
{
  int		height;
  int		width;

  if (argc != 3)
    {
      my_putstr("[USAGE] : ");
      my_putstr(argv[0]);
      my_putstr(":  Enter HEIGHT and WIDTH !\n");
      exit(EXIT_FAILURE);
    }
  width = my_getnbr(argv[1]);
  height = my_getnbr(argv[2]);
  check_param(width, height);
  set_map(width, height);
  exit(EXIT_SUCCESS);
}
