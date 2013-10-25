/*
** my_power_it.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:25:01 2013 fhaiem Rachid
** Last update Fri Oct 11 11:25:02 2013 fhaiem Rachid
*/

int	my_power_it(int nb, int pow)
{
  int	i;
  int	result;

  if (pow == 0)
    return (1);
  i = 1;
  result = nb;
  while (i++ < pow)
    result *= nb;
  return (result);
}
