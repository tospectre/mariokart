##
## Makefile for  in /home/fhaiem_r/Projets/MarioKart
## 
## Made by rachid
## Login   <fhaiem_r@epitech.net>
## 
## Started on  Fri Oct 25 18:13:40 2013 rachid
## Last update Sun Oct 27 18:50:19 2013 rachid
##

NAME	= $(BINDIR)/MarioKart

CC	= gcc

RM	= rm -f

CFLAGS	+= -ansi -pedantic
CFLAGS	+= -Wall -Wextra -Werror
CFLAGS	+= -I./includes

LDFLAGS	= -lmy
LDFLAGS	+= -L./sources/lib

SRCDIR	= ./sources/

SRCS	= $(SRCDIR)marios.c\
	$(SRCDIR)map.c\
	$(SRCDIR)check_param.c

OBJS	= $(SRCS:.c=.o)

BINDIR	= ./bin

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)
	@echo -n -e "\E[33;36mCompilation done ! \E[33;39m\n"

clean:
	$(RM) $(OBJS)
	@$(RM) *~
	@$(RM) ./sources/*~
	@$(RM) ./includes/*~


fclean:	clean
	$(RM) $(NAME)


re:	fclean all

.PHONY:	all clean fclean re
