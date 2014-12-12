# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/18 11:57:05 by jbrozzu           #+#    #+#              #
#    Updated: 2014/12/08 18:24:23 by jbrozzu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_isdigit.c ft_memcpy.c ft_putnbr.c ft_strcpy.c ft_tolower.c \
	   
 
SRCO = ft_atoi.o ft_isdigit.o ft_memcpy.o ft_putnbr.o  ft_strcpy.o \

all: $(NAME)

$(NAME):
	@echo "\n ############  Creation des fichiers .o  ############ \n"
	@gcc -Wextra -Werror -Wall -c $(SRC) -I .
	@echo "\n ###########  Compilation de la librairie  ########### \n"
	@ar rc $(NAME) $(SRCO)

exe:
	@echo "\n ##########  Creation de TOOOOOUUUUUUUTTTTT !!!!!!!!!  ########## \n"
	@make -C libft/ fclean
	@make -C libft/
	@gcc -I libft/includes/ -c  error.c ft_ls.h main.c ft_ls.c
	@gcc -o ft_ls main.o error.o ft_ls.o -L libft/ -lft

clean:
	@echo "\n ##########  Suppression des fichiers .o  ########## \n"
	@rm -f main.o error.o

fclean:
	@echo "\n ###  Suppression des fichiers .o et de la librairie  ### \n"
	@make -C libft/ fclean
	@rm -f main.o get_next_line.o test_gnl

re : fclean all
