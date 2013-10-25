/*
** my_upperize.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 12:03:34 2013 fhaiem Rachid
** Last update Fri Oct 11 12:03:34 2013 fhaiem Rachid
*/

void	my_upperize(char *c)
{
  if (*c >= 'a' && *c <= 'z')
    *c += 'A' - 'a';
}
