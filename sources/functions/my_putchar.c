/*
** my_putchar.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:26:08 2013 fhaiem Rachid
** Last update Fri Oct 18 14:48:38 2013 rachid
*/

#include	<unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
