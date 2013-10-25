/*
** my_str_islower.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:40:13 2013 fhaiem Rachid
** Last update Fri Oct 11 11:40:21 2013 fhaiem Rachid
*/

int	my_is_loweralpha(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  return (0);
}

int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    if (my_is_loweralpha(*(str + i++)) == 0)
      return (0);
  return (1);
}
