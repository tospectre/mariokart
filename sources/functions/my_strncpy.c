/*
** my_strncpy.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:53:08 2013 fhaiem Rachid
** Last update Fri Oct 11 11:53:12 2013 fhaiem Rachid
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (*(src + i) != '\0' && i < n)
    {
      *(dest + i) = *(src + i);
      ++i;
    }
  while (i < n)
    *(dest + i++) = '\0';
  return (dest);
}
