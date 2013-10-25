/*
** my_putstr.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:27:51 2013 fhaiem Rachid
** Last update Sat Oct 19 01:09:31 2013 rachid
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	"./include/my.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  if (!str)
    return;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      ++i;
    }
}

void	my_putstr_n_free(char *str)
{
  my_putstr(str);
  free(str);
}

void	my_put_double_str(char *str1, char *str2)
{
  my_putstr(str1);
  my_putstr(str2);
}

void	my_put_triple_str(char *str1, char *str2, char *str3)
{
  my_putstr(str1);
  my_putstr(str2);
  my_putstr(str3);
}
void	my_put_x_space_and_double_str(int nb, char *str1, char *str2)
{
  while (nb-- > 0)
    write(1, " ", 1);
  my_putstr(str1);
  my_putstr(str2);
}
