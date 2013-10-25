/*
** my_square_root.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:34:19 2013 fhaiem Rachid
** Last update Fri Oct 11 11:34:35 2013 fhaiem Rachid
*/

#ifndef MAX_INT
#define MAX_INT 0x7FFFFFFF
#endif

int	my_square_root(int nb)
{
  int i = 0;

  while (i < MAX_INT)
    {
      if (i > 0 && i > MAX_INT / i)
	return 0;

      if (i * i == nb)
	return i;

      ++i;
    }
  return 0;
}
