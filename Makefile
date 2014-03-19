##
## Makefile for  in /u/epitech_2012/brenne_t/cu/rendu/test/minitalk
## 
## Made by thomas brennetot
## Login   <brenne_t@epitech.net>
## 
## Started on  Tue Dec 11 14:20:43 2007 thomas brennetot
## Last update Fri Dec 28 17:10:11 2007 thomas brennetot
##

NAME		=	my_printf_${OSTYPE}

SRC		=	my_printf.c\
			tools.c\
			my_c.c\
			my_d.c\
			my_modu.c\
			my_p_P.c\
			my_s.c\
			my_u.c\
			my_o_x_X.c\
			my_S.c

OBJ		=	$(SRC:.c=.o)\

CFLAGS		=	-W -Wall -pedantic -D${OSTYPE} -I.

CC_FreeBSD	=	gcc

CC_solaris	=	/usr/sfw/bin/gcc

CC_linux	=	gcc

CC		=	$(CC_${OSTYPE})

$(NAME)		:	$(OBJ)
			$(CC) $(OBJ) -o $(NAME)

all		:	$(NAME)

clean		:
			rm -rf $(OBJ)
			rm -rf *~

fclean		:	clean
			rm -rf $(NAME)

re		:	fclean all

PHONE.		=	all clean fclean re