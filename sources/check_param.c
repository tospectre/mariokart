/*
** check_param.c for  in /home/fhaiem_r/Rush1/sources
** 
** Made by rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Sun Oct 27 18:42:40 2013 rachid
** Last update Sun Oct 27 18:42:40 2013 rachid
*/

#include	<stdlib.h>
#include	"../includes/my.h"

void		check_param(int width, int height)
{
  if ((width <= 0) || (height <= 0))
    {
      my_putstr("[ERROR] : You must put positive values.\n");
      exit(EXIT_FAILURE);
    }
}
