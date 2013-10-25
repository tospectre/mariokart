##
## Makefile for  in /home/fhaiem_r/Projets/MarioKart
## 
## Made by rachid
## Login   <fhaiem_r@epitech.net>
## 
## Started on  Fri Oct 25 18:13:40 2013 rachid
## Last update Fri Oct 25 19:24:05 2013 rachid
##

NAME	= $(BINDIR)/MarioKart

CC	= gcc

RM	= rm -f

CFLAGS	+= -ansi -pedantic
CFLAGS	+= -Wall -Wextra -Werror
CFLAGS	+= -I./includes

LDFLAGS	= -lmy
LDFLAGS	+= -L./sources/lib
LDFLAGS	+= -ggdb3

SRCDIR	= ./sources/

SRCS	= $(SRCDIR)marios.c\
	$(SRCDIR)map.c

BINDIR	= ./bin

all:	$(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRCS) $(LDFLAGS)
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
