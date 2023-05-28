/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlocusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:06:23 by nlocusso          #+#    #+#             */
/*   Updated: 2022/11/16 15:01:19 by nlocusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft/libft.h"
# include <fcntl.h>
# include "minilibx/mlx.h"
# include <X11/X.h>
# include <time.h>

typedef struct s_map
{
	size_t			lines;
	size_t			columns;
	size_t			collect;
	size_t			empty;
	size_t			player;
	size_t			exit;
	int				exit_i;
	int				win;
	int				lose;
	unsigned char	*tab;
}					t_map;

typedef struct s_img
{
	void	*ptr;
	int		width;
	int		heigth;
	int		x;
	int		y;
}			t_img;

typedef struct s_mlx_ptr
{
	int		side;
	int		nb_move;
	char	*nb_moves;
	int		frames;
	int		flip;
	int		flip_frames;
	int		punch;
	int		punch_frames;
	int		punch_framesr;
	int		cnt_ennemies;
	void	*ptr;
	void	*win;
	t_map	*map;
	t_img	*score;
	t_img	*wlp;
	t_img	*wall;
	t_img	*floor;
	t_img	*collect;
	t_img	*player;
	t_img	*exit;
	t_img	*end;
	t_img	*ennemies;
}			t_mlx_ptr;

void	print_error(int error_type, t_map *map);
void	put_punch(t_mlx_ptr *mlx);
void	put_flip(t_mlx_ptr *mlx);
void	initialized_mlx(t_mlx_ptr *mlx, t_map *map);
void	destroy_free2(t_mlx_ptr *mlx);
void	destroy_free3(t_mlx_ptr *mlx);
void	destroy_free4(t_mlx_ptr *mlx);
void	load_img(t_mlx_ptr *mlx);
void	load_img6(t_mlx_ptr *mlx);
int		move_ennemies(t_mlx_ptr *mlx);
void	nb_ennemies(t_map *map);
void	move_down(t_mlx_ptr *mlx);
void	move_left(t_mlx_ptr *mlx);
void	move_rigth(t_mlx_ptr *mlx);
void	move_up(t_mlx_ptr *mlx);
void	put_map_apl(t_mlx_ptr *mlx, int i, int x, int y);
void	put_map_bpl(t_mlx_ptr *mlx, int i, int x, int y);
int		put_game(t_mlx_ptr *mlx);
void	initialized_mlx(t_mlx_ptr *mlx, t_map *map);
int		destroy_free(t_mlx_ptr *mlx);
void	open_window(t_map *map);
void	prepare_flood(t_map *map);
void	ft_initialized(t_map *map);
void	check_lines(t_map *map);
void	check_map(char *argv, t_map *map);

#endif
