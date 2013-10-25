/*
** my_aff_sign.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:20:32 2013 fhaiem Rachid
** Last update Fri Oct 11 11:20:33 2013 fhaiem Rachid
*/

int	my_aff_sign(char *str)
{
  int	i;
  int	sign;

  sign = 1;
  i = 0;
  while (str[i] < 48 || str[i] > 57)
    {
      if (str[i] == '-')
	{
	  sign = sign * -1;
	}
      i = i + 1;
    }
  return (sign);
}
