/*
** my_str_isprintable.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:41:13 2013 fhaiem Rachid
** Last update Fri Oct 11 11:41:14 2013 fhaiem Rachid
*/

int	my_is_printable(char c)
{
  if (c >= ' ' && c <= '~')
    return (1);
  return (0);
}

int	my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    if (my_is_printable(*(str + i++)) == 0)
      return (0);
  return (1);
}
