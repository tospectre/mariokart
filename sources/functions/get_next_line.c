/*
** get_next_line.c for  in /home/fhaiem_r/librairy
** 
** Made by fhaiem Rachid
** Login   <fhaiem_r@epitech.net>
** 
** Started on  Fri Oct 11 11:20:09 2013 fhaiem Rachid
** Last update Fri Oct 18 15:37:16 2013 rachid
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	"./include/my.h"

#define BUF_LEN 1000
#define LINE_LEN 500

int	my_cat_to_line(char *line, char *buf, char *save)
{
  int	i;
  int	j;

  j = 0;
  i = my_strlen(line);
  while (buf[j])
    {
      if ((buf[j] == '\n') || (i == LINE_LEN))
        {
          line[i] = 0;
          if (buf[j] == '\n')
            j++;
          save = my_strcpy(save, buf + j);
          return (1);
        }
      line[i++] = buf[j++];
    }
  save[0] = 0;
  line[i] = 0;
  return (0);
}

char		*get_next_line(const int fd)
{
  static char	save[BUF_LEN];
  char		buf[BUF_LEN + 1];
  char		*line;
  int		len;

  line = malloc(sizeof(char) * LINE_LEN);
  line[0] = 0;
  if (my_cat_to_line(line, save, save) == 1)
    return (line);
  while ((len = read(fd, buf, BUF_LEN)) > 0 && LINE_LEN > 0)
    {
      buf[len] = 0;
      if (my_cat_to_line(line, buf, save) == 1)
        return (line);
    }
  if ((line && line[0] != 0) || (len == 0))
    return (line);
  return (NULL);
}
