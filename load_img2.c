/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_img2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlocusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:31:44 by nlocusso          #+#    #+#             */
/*   Updated: 2022/11/16 14:59:25 by nlocusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_img7(t_mlx_ptr *mlx)
{
	mlx->wall[6].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/left_down.xpm",
			&mlx->wall[6].width, &mlx->wall[6].heigth);
	mlx->wall[7].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/down_wall.xpm",
			&mlx->wall[7].width, &mlx->wall[7].heigth);
	mlx->wall[8].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/left_wall.xpm",
			&mlx->wall[8].width, &mlx->wall[8].heigth);
	mlx->score->ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/score.xpm",
			&mlx->score->width, &mlx->score->heigth);
}

void	load_img6(t_mlx_ptr *mlx)
{
	mlx->end[30].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end31.xpm",
			&mlx->end[30].width, &mlx->end[30].heigth);
	mlx->end[31].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end32.xpm",
			&mlx->end[31].width, &mlx->end[31].heigth);
	mlx->end[32].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end33.xpm",
			&mlx->end[32].width, &mlx->end[32].heigth);
	mlx->end[33].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end34.xpm",
			&mlx->end[33].width, &mlx->end[33].heigth);
	mlx->end[34].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end35.xpm",
			&mlx->end[34].width, &mlx->end[34].heigth);
	mlx->end[35].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end36.xpm",
			&mlx->end[35].width, &mlx->end[35].heigth);
	mlx->wall[0].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/wall.xpm",
			&mlx->wall[0].width, &mlx->wall[0].heigth);
	mlx->wall[1].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/left_up.xpm",
			&mlx->wall[1].width, &mlx->wall[1].heigth);
	mlx->wall[2].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/wall_up.xpm",
			&mlx->wall[2].width, &mlx->wall[2].heigth);
	mlx->wall[3].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/right_up.xpm",
			&mlx->wall[3].width, &mlx->wall[3].heigth);
	mlx->wall[4].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/right_wall.xpm",
			&mlx->wall[4].width, &mlx->wall[4].heigth);
	mlx->wall[5].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/right_down.xpm",
			&mlx->wall[5].width, &mlx->wall[5].heigth);
	load_img7(mlx);
}
