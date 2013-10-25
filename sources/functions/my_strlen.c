/*
** my_strlen.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:43:02 2013 fhaiem Rachid
** Last update Fri Oct 11 11:43:03 2013 fhaiem Rachid
*/

int	my_strlen(char *str)
{
  int	i;

  if (!str)
    return (0);
  i = 0;
  while (*(str + i) != '\0')
    ++i;
  return (i);
}
