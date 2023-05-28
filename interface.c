/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlocusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:25:04 by nlocusso          #+#    #+#             */
/*   Updated: 2022/11/16 12:37:04 by nlocusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	put(t_mlx_ptr *mlx)
{
	move_ennemies(mlx);
	if (mlx->map->lose == 1)
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->wlp[1].ptr, 0, 0);
	else if (mlx->map->win == 1)
	{
		if (mlx->frames == 36)
			mlx->frames = 0;
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			mlx->end[mlx->frames].ptr, 0, 0);
		mlx->frames++;
		usleep(70000);
	}
	else if (mlx->flip == 1)
		put_flip(mlx);
	else if (mlx->punch == 1)
		put_punch(mlx);
	return (1);
}

int	keycode_exx(int keycode, t_mlx_ptr *mlx)
{
	if (keycode == 65307)
		destroy_free(mlx);
	if (keycode == 102)
		mlx->flip = 1;
	if (keycode == 32)
		mlx->punch = 1;
	if ((keycode == 119 || keycode == 65362)
		&& mlx->flip != 1 && mlx->punch != 1)
		move_up(mlx);
	if ((keycode == 115 || keycode == 65364)
		&& mlx->flip != 1 && mlx->punch != 1)
		move_down(mlx);
	if ((keycode == 97 || keycode == 65361)
		&& mlx->flip != 1 && mlx->punch != 1)
		move_left(mlx);
	if ((keycode == 100 || keycode == 65363)
		&& mlx->flip != 1 && mlx->punch != 1)
		move_rigth(mlx);
	return (1);
}

void	open_window(t_map *map)
{
	t_mlx_ptr	*mlx;

	mlx = malloc(sizeof(t_mlx_ptr));
	initialized_mlx(mlx, map);
	mlx->ptr = mlx_init();
	mlx->win = mlx_new_window(mlx->ptr, 1920, 960, "so_long");
	load_img(mlx);
	put_game(mlx);
	mlx_hook(mlx->win, KeyPress, KeyPressMask, keycode_exx, mlx);
	mlx_hook(mlx->win, DestroyNotify, StructureNotifyMask, &destroy_free, mlx);
	mlx_loop_hook(mlx->ptr, put, mlx);
	mlx_loop(mlx->ptr);
}
