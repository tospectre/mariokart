/*
** my_str_isupper.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:41:38 2013 fhaiem Rachid
** Last update Fri Oct 11 11:41:39 2013 fhaiem Rachid
*/

int	my_is_upperalpha(char c)
{
  if (c >= 'A' && c <= 'Z')
    return (1);
  return (0);
}

int	my_str_isupper(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    if (my_is_upperalpha(*(str + i++)) == 0)
      return (0);
  return (1);
}
