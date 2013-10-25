/*
** my_strcmp.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:38:27 2013 fhaiem Rachid
** Last update Fri Oct 11 11:38:40 2013 fhaiem Rachid
*/

#include "./include/my.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (my_isalpha(s1[i]) == 0 && s1[i] != '\0')
    ++i;
  while (my_isalpha(s2[j]) == 0 && s2[j] != '\0')
    ++j;
  while (to_lower(s1[i]) == to_lower(s2[j]))
    {
      if (s1[i] == '\0' || s2[j] == '\0')
	return (0);
      ++i;
      ++j;
    }
  return (to_lower(s1[i]) - to_lower(s2[j]));
}

int	my_strcmp_casse(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i])
    {
      if (s1[i] == '\0' || s2[i] == '\0')
	return (0);
      ++i;
    }
  return (s1[i] - s2[i]);
}
