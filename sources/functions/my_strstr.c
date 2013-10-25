/*
** my_strstr.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:53:26 2013 fhaiem Rachid
** Last update Fri Oct 11 11:53:34 2013 fhaiem Rachid
*/

#ifndef MY_NULL
#define MY_NULL 0x0
#endif

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;
  char	*retour;

  i = 0;
  j = 0;
  retour = MY_NULL;
  while (*(str + i) != '\0' && *(to_find + j) != '\0')
    {
      if (*(str + i) == *(to_find + j))
	{
	  retour = str + i - j;
	  ++j;
	}
      else
	{
	  j = 0;
	  retour = MY_NULL;
	}
      ++i;
    }
  if (retour != MY_NULL && *(str + i) == '\0' && *(to_find + j) != '\0')
    retour = MY_NULL;
  return (retour);
}

