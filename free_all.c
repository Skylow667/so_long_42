/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlocusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:52:25 by nlocusso          #+#    #+#             */
/*   Updated: 2022/11/16 15:01:40 by nlocusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_destroy(void *mlx, void *img)
{
	if (img)
		mlx_destroy_image(mlx, img);
}

int	destroy_free(t_mlx_ptr *mlx)
{
	mlx_loop_end(mlx->ptr);
	mlx_clear_window(mlx->ptr, mlx->win);
	mlx_destroy_window(mlx->ptr, mlx->win);
	check_destroy(mlx->ptr, mlx->wlp[0].ptr);
	check_destroy(mlx->ptr, mlx->wlp[1].ptr);
	check_destroy(mlx->ptr, mlx->player[0].ptr);
	check_destroy(mlx->ptr, mlx->player[1].ptr);
	check_destroy(mlx->ptr, mlx->player[2].ptr);
	check_destroy(mlx->ptr, mlx->player[3].ptr);
	check_destroy(mlx->ptr, mlx->player[4].ptr);
	check_destroy(mlx->ptr, mlx->player[5].ptr);
	check_destroy(mlx->ptr, mlx->player[6].ptr);
	check_destroy(mlx->ptr, mlx->player[7].ptr);
	check_destroy(mlx->ptr, mlx->player[8].ptr);
	check_destroy(mlx->ptr, mlx->player[9].ptr);
	check_destroy(mlx->ptr, mlx->player[10].ptr);
	check_destroy(mlx->ptr, mlx->player[11].ptr);
	check_destroy(mlx->ptr, mlx->player[12].ptr);
	check_destroy(mlx->ptr, mlx->player[13].ptr);
	check_destroy(mlx->ptr, mlx->player[14].ptr);
	check_destroy(mlx->ptr, mlx->player[15].ptr);
	check_destroy(mlx->ptr, mlx->player[16].ptr);
	check_destroy(mlx->ptr, mlx->player[17].ptr);
	destroy_free2(mlx);
	exit(0);
}

void	destroy_free2(t_mlx_ptr *mlx)
{
	check_destroy(mlx->ptr, mlx->player[18].ptr);
	check_destroy(mlx->ptr, mlx->player[19].ptr);
	check_destroy(mlx->ptr, mlx->player[20].ptr);
	check_destroy(mlx->ptr, mlx->player[21].ptr);
	check_destroy(mlx->ptr, mlx->floor->ptr);
	check_destroy(mlx->ptr, mlx->ennemies->ptr);
	check_destroy(mlx->ptr, mlx->collect->ptr);
	check_destroy(mlx->ptr, mlx->exit[0].ptr);
	check_destroy(mlx->ptr, mlx->exit[1].ptr);
	check_destroy(mlx->ptr, mlx->exit[2].ptr);
	check_destroy(mlx->ptr, mlx->end[0].ptr);
	check_destroy(mlx->ptr, mlx->end[1].ptr);
	check_destroy(mlx->ptr, mlx->end[2].ptr);
	check_destroy(mlx->ptr, mlx->end[3].ptr);
	check_destroy(mlx->ptr, mlx->end[4].ptr);
	check_destroy(mlx->ptr, mlx->end[5].ptr);
	check_destroy(mlx->ptr, mlx->end[6].ptr);
	check_destroy(mlx->ptr, mlx->end[7].ptr);
	check_destroy(mlx->ptr, mlx->end[8].ptr);
	check_destroy(mlx->ptr, mlx->end[9].ptr);
	check_destroy(mlx->ptr, mlx->end[10].ptr);
	check_destroy(mlx->ptr, mlx->end[11].ptr);
	check_destroy(mlx->ptr, mlx->end[12].ptr);
	check_destroy(mlx->ptr, mlx->end[13].ptr);
	destroy_free3(mlx);
}

void	destroy_free3(t_mlx_ptr *mlx)
{
	check_destroy(mlx->ptr, mlx->end[14].ptr);
	check_destroy(mlx->ptr, mlx->end[15].ptr);
	check_destroy(mlx->ptr, mlx->end[16].ptr);
	check_destroy(mlx->ptr, mlx->end[17].ptr);
	check_destroy(mlx->ptr, mlx->end[18].ptr);
	check_destroy(mlx->ptr, mlx->end[19].ptr);
	check_destroy(mlx->ptr, mlx->end[20].ptr);
	check_destroy(mlx->ptr, mlx->end[21].ptr);
	check_destroy(mlx->ptr, mlx->end[22].ptr);
	check_destroy(mlx->ptr, mlx->end[23].ptr);
	check_destroy(mlx->ptr, mlx->end[24].ptr);
	check_destroy(mlx->ptr, mlx->end[25].ptr);
	check_destroy(mlx->ptr, mlx->end[26].ptr);
	check_destroy(mlx->ptr, mlx->end[27].ptr);
	check_destroy(mlx->ptr, mlx->end[28].ptr);
	check_destroy(mlx->ptr, mlx->end[29].ptr);
	check_destroy(mlx->ptr, mlx->end[30].ptr);
	check_destroy(mlx->ptr, mlx->end[31].ptr);
	check_destroy(mlx->ptr, mlx->end[32].ptr);
	check_destroy(mlx->ptr, mlx->end[33].ptr);
	check_destroy(mlx->ptr, mlx->end[34].ptr);
	check_destroy(mlx->ptr, mlx->end[35].ptr);
	check_destroy(mlx->ptr, mlx->wall[0].ptr);
	check_destroy(mlx->ptr, mlx->wall[1].ptr);
	destroy_free4(mlx);
}

void	destroy_free4(t_mlx_ptr *mlx)
{
	check_destroy(mlx->ptr, mlx->wall[2].ptr);
	check_destroy(mlx->ptr, mlx->wall[3].ptr);
	check_destroy(mlx->ptr, mlx->wall[4].ptr);
	check_destroy(mlx->ptr, mlx->wall[5].ptr);
	check_destroy(mlx->ptr, mlx->wall[6].ptr);
	check_destroy(mlx->ptr, mlx->wall[7].ptr);
	check_destroy(mlx->ptr, mlx->wall[8].ptr);
	check_destroy(mlx->ptr, mlx->score->ptr);
	mlx_destroy_display(mlx->ptr);
	free(mlx->map->tab);
	free(mlx->map);
	free(mlx->ptr);
	free(mlx->wlp);
	free(mlx->end);
	free(mlx->player);
	free(mlx->score);
	free(mlx->collect);
	free(mlx->floor);
	free(mlx->wall);
	free(mlx->exit);
	free(mlx->ennemies);
	free(mlx);
}
