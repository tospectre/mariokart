/*
** my_perror.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:23:56 2013 fhaiem Rachid
** Last update Fri Oct 18 14:56:07 2013 rachid
*/

#include	<unistd.h>

void	my_perror(char *str)
{
  if (!str)
    return;
  while (*str != '\0')
    write(2, str++, 1);
}
