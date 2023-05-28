/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialized.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlocusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:49:15 by nlocusso          #+#    #+#             */
/*   Updated: 2022/11/16 14:59:59 by nlocusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	initialized_mlx(t_mlx_ptr *mlx, t_map *map)
{
	mlx->ennemies = malloc(sizeof(t_img));
	mlx->player = malloc(22 * sizeof(t_img));
	mlx->collect = malloc(sizeof(t_img));
	mlx->floor = malloc(sizeof(t_img));
	mlx->wall = malloc(9 * sizeof(t_img));
	mlx->wlp = malloc(2 * sizeof(t_img));
	mlx->exit = malloc(3 * sizeof(t_img));
	mlx->end = malloc(36 * sizeof(t_img));
	mlx->score = malloc(sizeof(t_img));
	mlx->nb_move = 0;
	mlx->frames = 0;
	mlx->punch = 0;
	mlx->side = 0;
	mlx->punch_frames = 8;
	mlx->punch_framesr = 15;
	mlx->cnt_ennemies = 0;
	mlx->flip_frames = 2;
	mlx->flip = 0;
	mlx->map = map;
	mlx->player[0].x = 960;
	mlx->player[0].y = 480;
}
