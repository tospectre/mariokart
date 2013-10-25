/*
** my_str_isnum.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:40:38 2013 fhaiem Rachid
** Last update Fri Oct 11 11:40:39 2013 fhaiem Rachid
*/

int	my_isnum(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  return (0);
}

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    if (my_isnum(*(str + i++)) == 0)
      return (0);

  return (1);
}
