/*
** my_lowerize.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:22:14 2013 fhaiem Rachid
** Last update Fri Oct 11 11:22:14 2013 fhaiem Rachid
*/

void	my_lowerize(char *c)
{
  if (*c >= 'A' && *c <= 'Z')
    *c += 'a' - 'A';
}

char	to_lower(char c)
{
  if (c >= 'A' && c <= 'Z')
    return (c + 'a' - 'A');
  return (c);
}
