# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 10:53:04 by gpeyre            #+#    #+#              #
#    Updated: 2023/11/30 10:04:43 by gpeyre           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft/libft.a

PRINTF = printf/libftprintf.a

CC = cc 

CFLAGS = -Wall -Wextra -Werror -g3

RM = rm -f

SRCS =	main.c \
		check_error/check_error.c \
		check_error/check_error_2.c \
		process_choice.c \
		sort/ft_sort.c \
		sort/sort_three.c \
		sort/final_sort.c \
		count_mouv/min_rotate.c \
		count_mouv/rotate_case_b.c \
		count_mouv/rotate_case_a.c \
		display_and_push/display_and_push.c \
		display_and_push/display_and_push_a.c \
		instructions/push.c \
		instructions/swap.c \
		instructions/rotate.c \
		instructions/rev_rotate.c \
		utils/lst_utils.c \
		utils/lst_utils_2.c \
		utils/sort_utils.c \
		utils/sort_utils_2.c

OBJ = $(SRCS:.c=.o)

$(NAME): $(OBJ)
		make -C ./printf
		make -C ./libft
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT) $(PRINTF)

all: $(NAME)

clean:
		make clean -C libft
		make clean -C printf
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)
		make fclean -C libft
		make fclean -C printf

re: fclean all 