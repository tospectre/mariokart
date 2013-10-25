/*
** my_showmem.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:31:35 2013 fhaiem Rachid
** Last update Fri Oct 18 15:33:52 2013 rachid
*/

#include	<unistd.h>
#include	"./include/my.h"

void	show_mem_line(char *str, int offset, int size)
{
  int	i;

  my_putnbr_base_size(offset, 8);
  my_putstr(" ");
  i = 0;
  while (i < size)
  {
    my_putnbr_base_size(*(str + i + offset), 2);
    if ((i + 1) % 2 == 0)
      my_putstr(" ");
    else if (!(i + 1 < size))
      my_putstr("  ");
    ++i;
  }
    while (i < 16)
      my_putstr((i++ + 1) % 2 == 0 ? " " : "    ");

  i = 0;
  while (i < size)
  {
    if (my_is_printable(*(str + offset + i++)) == 1)
      write(1, str + offset + i - 1, 1);
    else
      write(1, ".", 1);
  }
}

int	my_showmem(char *str, int size)
{
  int	i;

  i = 0;
  while (i < size)
  {
    show_mem_line(str, i, i + 16 > size ? size - i : 16);
    write(1, "\n", 1);
    i += 16;
  }
  return (0);
}
