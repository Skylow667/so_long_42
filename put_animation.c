/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_animation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlocusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:31:02 by nlocusso          #+#    #+#             */
/*   Updated: 2022/11/16 12:35:44 by nlocusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	kill_ennemies(t_mlx_ptr *mlx)
{
	int	i;

	i = 0;
	while (mlx->map->tab[i] != 'P')
		i++;
	if (mlx->side == 1 && mlx->map->tab[i - 1] == 'M')
	{
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->floor->ptr, 896, 480);
		mlx->map->tab[i - 1] = '0';
	}
	if (mlx->side == 0 && mlx->map->tab[i + 1] == 'M')
	{
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->floor->ptr, 1024, 480);
		mlx->map->tab[i + 1] = '0';
	}
}

void	kill_flip(t_mlx_ptr *mlx)
{
	int	i;

	i = 0;
	while (mlx->map->tab[i] != 'P')
		i++;
	if (mlx->map->tab[i - mlx->map->columns] == 'M')
	{
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->floor->ptr, 960, 416);
		mlx->map->tab[i - mlx->map->columns] = '0';
	}
	if (mlx->map->tab[i + mlx->map->columns] == 'M')
	{
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->floor->ptr, 960, 544);
		mlx->map->tab[i + mlx->map->columns] = '0';
	}
}

void	put_flip(t_mlx_ptr *mlx)
{
	mlx_put_image_to_window(mlx->ptr, mlx->win,
		mlx->player[mlx->flip_frames].ptr, 960, 480);
	usleep(90000);
	mlx->flip_frames++;
	if (mlx->flip_frames == 8)
	{
		kill_flip(mlx);
		mlx->flip_frames = 2;
		mlx->flip = 0;
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			mlx->player[0].ptr, 960, 480);
	}
}

void	put_punchr(t_mlx_ptr *mlx)
{
	mlx_put_image_to_window(mlx->ptr, mlx->win,
		mlx->player[mlx->punch_framesr].ptr, 960, 480);
	mlx->punch_framesr++;
	if (mlx->punch_framesr == 22)
	{
		kill_ennemies(mlx);
		mlx->punch_framesr = 15;
		mlx->punch = 0;
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			mlx->player[1].ptr, 960, 480);
	}
}

void	put_punch(t_mlx_ptr *mlx)
{
	usleep(120000);
	if (mlx->side == 0)
	{
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			mlx->player[mlx->punch_frames].ptr, 960, 480);
		mlx->punch_frames++;
		if (mlx->punch_frames == 15)
		{
			kill_ennemies(mlx);
			mlx->punch_frames = 8;
			mlx->punch = 0;
			mlx_put_image_to_window(mlx->ptr,
				mlx->win, mlx->player[0].ptr, 960, 480);
		}
	}
	else if (mlx->side == 1)
		put_punchr(mlx);
}
