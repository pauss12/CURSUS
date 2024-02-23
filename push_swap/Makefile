# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 14:44:51 by pmendez-          #+#    #+#              #
#    Updated: 2024/01/22 14:44:52 by pmendez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

FILES = push_swap.c \
		checker.c \
		transforme.c \
		stack_numbers.c \
		moves_swap.c \
		moves_push.c \
		moves_rotate.c \
		moves_reverse_rotate.c \
		orders.c \
		general_moves.c \
		check_max_mins.c \
		other_functions.c \

OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@make -C libft
	mv libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)
	gcc $(NAME) $(CFLAGS) -o push_swap

clean:
	rm -f $(OBJS)
	@make clean -C libft

fclean: clean
	rm -f $(NAME)
	rm -f push_swap

re: fclean all

.PHONY: all clean fclean re