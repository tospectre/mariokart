/*
** my_swap.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 12:02:19 2013 fhaiem Rachid
** Last update Fri Oct 11 12:02:20 2013 fhaiem Rachid
*/

void	my_swap(int *a, int *b)
{
  int	temp;

  temp = *a;
  *a = *b;
  *b = temp;
}
