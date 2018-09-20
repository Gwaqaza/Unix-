# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmahele <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/01 16:53:22 by pmahele           #+#    #+#              #
#    Updated: 2017/09/09 16:57:17 by pmahele          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_ls

SRC		=	main.c display.c elem.c error.c ls_core.c print.c recursion.c \
			size.c sort.c sort_ft.c time.c util.c

OBJ		= $(SRC:.c=.o)

CFLAGS	= -Wall -Wextra -Werror

$(NAME): $(OBJ)
	@make -C libft/
	@gcc $(OBJ) -o $(NAME) -L libft/ -lft

all: $(NAME)

clean:
	cd libft; make clean
	@rm -rf $(OBJ)

fclean: clean
	cd libft; make fclean
	@rm -rf $(NAME) $(OBJ)

re: fclean $(NAME)
