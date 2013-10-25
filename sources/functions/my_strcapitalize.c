/*
** my_strcapitalize.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:35:26 2013 fhaiem Rachid
** Last update Fri Oct 18 14:58:57 2013 rachid
*/

#include	"./include/my.h"

char	*my_strcapitalize(char *str)
{
  int	i;
  int	next_capitale;

  i = 0;
  next_capitale = 1;

  while (*(str + i) != '\0')
    {
      if (*(str + i) == ' ' || *(str + i) == '+' || *(str + i) == '-')
	next_capitale = 1;
      else
	{
	  if (next_capitale == 1)
	    my_upperize(str + i);
	  else
	    my_lowerize(str + i);
	  next_capitale = 0;
	}
      ++i;
    }
  return (str);
}
