/*
** my_strncmp.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:45:51 2013 fhaiem Rachid
** Last update Fri Oct 11 11:45:56 2013 fhaiem Rachid
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  if (n == 0)
    return (0);
  i = 0;
  while (*(s1 + i) == *(s2 + i))
    {
      if (*(s1 + i) == '\0' || i == (n - 1))
	return (0);
      ++i;
    }
  return (*(s1 + i) - *(s2 + i));
}
