/*
** my_is_prime.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:21:51 2013 fhaiem Rachid
** Last update Fri Oct 11 11:21:52 2013 fhaiem Rachid
*/

int	my_is_prime(int nombre)
{
  int	i;

  i = 2;
  if (nombre <= 1)
    return 0;
  while (i < nombre)
    if (nombre % i++ == 0)
      return 0;
  return 1;
}

