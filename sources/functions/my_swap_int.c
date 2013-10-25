/*
** my_swap_int.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 12:03:19 2013 fhaiem Rachid
** Last update Fri Oct 18 14:53:54 2013 rachid
*/

int	my_swap_int(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;

  return(0);
}
