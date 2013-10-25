/*
** my_getnbr_base.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:20:59 2013 fhaiem Rachid
** Last update Fri Oct 18 15:35:16 2013 rachid
*/

#include	"./include/my.h"

#define MAX_INT 0x7FFFFFFF
#define MIN_INT 0x80000000

int	my_is_char_inbase(char c, char *base)
{
  int	i;

  i = 0;
  while (*(base + i) != '\0')
    if (*(base + i++) == c)
      return (1);
  return (0);
}

int	my_is_str_inbase(char *str, char *base)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
  {
    if (!(*(str + i) == '-' || *(str + i) == '+'))
      if (my_is_char_inbase(*(str + i), base) == 0)
        return (0);
    ++i;
  }
  return (1);
}

int	is_arg_valid(char *str, char *base)
{
  if (my_strcmp(str, "") == 0 ||  my_strcmp(base, "") == 0)
    return (0);

  if (my_is_str_inbase(str, base) == 0)
    return (0);
  return (1);
}

int	get_char_value_for_base(char c, char *base)
{
  int	i;

  i = 0;
  while (*(base + i) != c)
    ++i;
  return (i);
}

int	my_getnbr_base(char *str, char *base)
{
  int	offset;
  char	signe;
  int	value;

  my_strupcase(str);
  my_strupcase(base);
  if (is_arg_valid(str, base) == 0)
    return (0);

  offset = 0;
  signe = 1;
  while (str[offset] != '\0' && my_is_char_inbase(str[offset], base) == 0)
    signe *= *(str + offset++) == '-' ? -1 : 1;

  value = 0;
  while (my_is_char_inbase(*(str + offset), base) == 1)
  {
    if (value > (signe == -1 ? MIN_INT : MAX_INT) / my_strlen(base))
      return (0);
    value *= my_strlen(base);
    value += get_char_value_for_base(*(str + offset), base);
    ++offset;
  }

  return (value * signe);
}
