# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrozzu <jbrozzu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/18 11:57:05 by jbrozzu           #+#    #+#              #
#    Updated: 2014/12/07 18:50:55 by jbrozzu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_isdigit.c ft_memcpy.c ft_putnbr.c ft_strcpy.c ft_tolower.c \
	   
 
SRCO = ft_atoi.o ft_isdigit.o ft_memcpy.o ft_putnbr.o  ft_strcpy.o \

all: $(NAME)

$(NAME):
	@echo "############  Creation des fichiers .o  ############"
	@gcc -Wextra -Werror -Wall -c $(SRC) -I .
	@echo "###########  Compilation de la librairie  ###########"
	@ar rc $(NAME) $(SRCO)

exe:
	@echo "##########  Creation de TOOOOOUUUUUUUTTTTT !!!!!!!!!  ##########"
	@make -C libft/ fclean
	@make -C libft/
	@gcc -I libft/includes/ -c ft_ls_alone.c main.c error.c ft_ls_a_alone.c ft_ls_l_alone.c ft_ls_la_alone.c ft_ls.h 
	@gcc -o ft_ls main.o error.o ft_ls_alone.o ft_ls_a_alone.o ft_ls_l_alone.o ft_ls_la_alone.o -L libft/ -lft

clean:
	@echo "\n ##########  Suppression des fichiers .o  ########## \n"
	@rm -f main.o error.o

fclean:
	@echo "\n ###  Suppression des fichiers .o et de la librairie  ### \n"
	@make -C libft/ fclean
	@rm -f main.o get_next_line.o test_gnl

re : fclean all
