/*
** my_str_isalpha.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:39:49 2013 fhaiem Rachid
** Last update Fri Oct 11 11:39:50 2013 fhaiem Rachid
*/

int	my_isalpha(char c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return (1);
  return (0);
}

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    if (my_isalpha(*(str + i++)) == 0)
      return (0);

  return (1);
}
