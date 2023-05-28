/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_pl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlocusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:31:11 by nlocusso          #+#    #+#             */
/*   Updated: 2022/11/16 15:43:58 by nlocusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_all(t_mlx_ptr *mlx, int i, int move)
{
	ft_printf("Movements : %d\n", mlx->nb_move);
	mlx_clear_window(mlx->ptr, mlx->win);
	if (mlx->map->tab[move] == 'C')
		mlx->map->collect--;
	if (mlx->map->tab[move] == 'E'
		&& mlx->map->collect == 0)
	{
		mlx->map->win = 1;
		return ;
	}
	if (mlx->map->tab[move] == 'M')
	{
		mlx->map->lose = 1;
		return ;
	}
	if (i == mlx->map->exit_i)
		mlx->map->tab[i] = 'E';
	else
		mlx->map->tab[i] = '0';
	mlx->map->tab[move] = 'P';
	mlx->nb_moves = ft_itoa(mlx->nb_move);
	mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->wlp[0].ptr, 0, 0);
	mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->score->ptr, 900, 0);
	mlx_string_put(mlx->ptr, mlx->win, 1003, 15, 0x8c284a, mlx->nb_moves);
	free(mlx->nb_moves);
}

void	move_up(t_mlx_ptr *mlx)
{
	int	i;

	i = 0;
	if (mlx->map->win == 1)
		return ;
	while (mlx->map->tab[i] != 'P')
		i++;
	if (mlx->map->tab[i - mlx->map->columns] != '1')
	{
		mlx->nb_move++;
		move_all(mlx, i, i - mlx->map->columns);
		put_map_bpl(mlx, i - mlx->map->columns,
			mlx->player[0].x, mlx->player[0].y);
		put_map_apl(mlx, i - mlx->map->columns,
			mlx->player[0].x, mlx->player[0].y);
		if (mlx->side == 1)
			mlx_put_image_to_window(mlx->ptr, mlx->win,
				mlx->player[1].ptr, 960, 480);
		else if (mlx->side == 0)
			mlx_put_image_to_window(mlx->ptr, mlx->win,
				mlx->player[0].ptr, 960, 480);
	}
}

void	move_down(t_mlx_ptr *mlx)
{
	int	i;

	i = 0;
	if (mlx->map->win == 1)
		return ;
	while (mlx->map->tab[i] != 'P')
		i++;
	if (mlx->map->tab[i + mlx->map->columns] != '1')
	{
		mlx->nb_move++;
		move_all(mlx, i, i + mlx->map->columns);
		put_map_bpl(mlx, i + mlx->map->columns,
			mlx->player[0].x, mlx->player[0].y);
		put_map_apl(mlx, i + mlx->map->columns,
			mlx->player[0].x, mlx->player[0].y);
		if (mlx->side == 1)
			mlx_put_image_to_window(mlx->ptr, mlx->win,
				mlx->player[1].ptr, 960, 480);
		else if (mlx->side == 0)
			mlx_put_image_to_window(mlx->ptr, mlx->win,
				mlx->player[0].ptr, 960, 480);
	}
}

void	move_left(t_mlx_ptr *mlx)
{
	int	i;

	i = 0;
	mlx->side = 1;
	if (mlx->map->win == 1)
		return ;
	while (mlx->map->tab[i] != 'P')
		i++;
	if (mlx->map->tab[i - 1] != '1')
	{
		mlx->nb_move++;
		move_all(mlx, i, i - 1);
		put_map_bpl(mlx, i - 1, mlx->player[0].x, mlx->player[0].y);
		put_map_apl(mlx, i - 1, mlx->player[0].x, mlx->player[0].y);
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			mlx->player[1].ptr, 960, 480);
	}
	else
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			mlx->player[1].ptr, 960, 480);
}

void	move_rigth(t_mlx_ptr *mlx)
{
	int	i;

	i = 0;
	mlx->side = 0;
	if (mlx->map->win == 1)
		return ;
	while (mlx->map->tab[i] != 'P')
		i++;
	if (mlx->map->tab[i + 1] != '1')
	{
		mlx->nb_move++;
		move_all(mlx, i, i + 1);
		put_map_bpl(mlx, i + 1, mlx->player[0].x, mlx->player[0].y);
		put_map_apl(mlx, i + 1, mlx->player[0].x, mlx->player[0].y);
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			mlx->player[0].ptr, 960, 480);
	}
	else
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			mlx->player[0].ptr, 960, 480);
}
