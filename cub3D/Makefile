# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/08 13:59:41 by lel-khou          #+#    #+#              #
#    Updated: 2024/02/16 16:05:25 by lel-khou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I ../mlx

HEADER = cub3d.h

LIBFT = libft.a

MLX = libmlx.a

LIBS = -L ../libft -lft -L ../mlx -lmlx -framework OpenGL -framework AppKit

NAME = cub3D

RM = rm -f

SRC = main.c error_check.c exit.c file_read.c file_split.c initializer.c \
file_check.c utils.c colors.c map.c player.c initial_check.c start_game.c \
square.c keys.c ray_casting.c movement.c diagonal.c utils_ray.c pixels.c

OBJS = $(SRC:.c=.o)

all		: $(LIBFT) $(MLX) $(NAME)

$(LIBFT) :
	@make -C ../libft
	
$(MLX) :
	@make -C ../mlx

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(OBJS) $(LIBS) -o $(NAME)
	
clean: 
	$(RM) $(OBJS)
	@make clean -C ../libft
	@make clean -C ../mlx

fclean: clean
	$(RM) $(NAME)
	@make fclean -C ../libft
	
re:	fclean all
