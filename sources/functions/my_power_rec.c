/*
** my_power_rec.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:25:22 2013 fhaiem Rachid
** Last update Fri Oct 11 11:25:42 2013 fhaiem Rachid
*/

#ifndef	MAX_INT
#define MAX_INT 0x7FFFFFFF
#endif

int	my_power_rec(int nb, int power)
{
  int	var;

  if (power < 0 || power >= 100000)
    return 0;
  else if (power <= 1)
    return 1;
  else
  {
    var = my_power_rec(nb, power - 1);
    if (var == 0 || nb > MAX_INT / var)
      return 0;
    return nb * var;
  }
}
