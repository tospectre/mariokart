/*
** my_swap_char.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 12:03:01 2013 fhaiem Rachid
** Last update Fri Oct 11 12:03:02 2013 fhaiem Rachid
*/

void	my_swap_char(char *a, char *b)
{
  char	temp;

  temp = *a;
  *a = *b;
  *b = temp;
}
