# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlocusso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 17:13:34 by nlocusso          #+#    #+#              #
#    Updated: 2022/11/16 13:56:15 by nlocusso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.c move_pl.c free_all.c ennemies.c load_map.c pars_map.c interface.c load_img.c load_img2.c initialized.c put_animation.c flood_fill.c
OBJS		= ${SRCS:.c=.o}
NAME		= so_long
CC			= clang -g -O0
CFLAGS		= -Wall -Wextra -Werror

all :        ${NAME}

.c.o :		${OBJS}
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
	
${NAME}:	${OBJS}
			make -C libft
			make -C minilibx
			${CC} ${CFLAGS} -o ${NAME} ${OBJS} -Llibft -lft -Llibft/ft_printf -lftprintf -Lminilibx -lmlx -lXext -lX11

clean :
			rm -f ${OBJS} ${BOBJS}
			make -C libft clean
			make -C minilibx clean

fclean :	clean
			rm -f ${NAME} 
			make -C libft fclean

re :
			make fclean
			make all

.PHONY : all clean fclean re bonus
