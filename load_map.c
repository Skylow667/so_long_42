/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlocusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:33:07 by nlocusso          #+#    #+#             */
/*   Updated: 2022/11/16 15:03:05 by nlocusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_map_sprites2(t_mlx_ptr *mlx, int i, int x, int y)
{
	if ((i - 1) == 0)
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->wall[1].ptr, x, y);
	else if ((i - 1) / mlx->map->columns == 0
		&& (i - 1) % mlx->map->columns == mlx->map->columns - 1)
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->wall[3].ptr, x, y);
	else if ((i - 1) % mlx->map->columns == 0)
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->wall[8].ptr, x, y);
	else if ((i - 1) % mlx->map->columns == mlx->map->columns - 1)
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->wall[4].ptr, x, y);
	else if ((i - 1) / mlx->map->columns == 0)
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->wall[2].ptr, x, y);
	else if (mlx->map->tab[i - 1] == '1')
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->wall[0].ptr, x, y);
	else if (mlx->map->tab[i - 1] == '0')
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->floor->ptr, x, y);
	else if (mlx->map->tab[i - 1] == 'M' || mlx->map->tab[i - 1] == 'D')
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			mlx->ennemies->ptr, x, y);
	else if (mlx->map->tab[i - 1] == 'C')
		mlx_put_image_to_window(mlx->ptr,
			mlx->win, mlx->collect->ptr, x, y);
	else if (mlx->map->tab[i - 1] == 'E')
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->exit[0].ptr, x, y);
}

void	put_map_sprites1(t_mlx_ptr *mlx, int i, int x, int y)
{
	if ((i + 1) / mlx->map->columns == mlx->map->lines - 1
		&& (i + 1) % mlx->map->columns == 0)
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->wall[6].ptr, x, y);
	else if ((i + 1) / mlx->map->columns == mlx->map->lines - 1
		&& (i + 1) % mlx->map->columns == mlx->map->columns - 1)
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->wall[5].ptr, x, y);
	else if ((i + 1) % mlx->map->columns == 0)
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->wall[8].ptr, x, y);
	else if ((i + 1) % mlx->map->columns == mlx->map->columns - 1)
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->wall[4].ptr, x, y);
	else if ((i + 1) / mlx->map->columns == mlx->map->lines - 1)
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->wall[7].ptr, x, y);
	else if (mlx->map->tab[i + 1] == '1')
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->wall[0].ptr, x, y);
	else if (mlx->map->tab[i + 1] == '0')
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->floor->ptr, x, y);
	else if (mlx->map->tab[i + 1] == 'M' || mlx->map->tab[i + 1] == 'D')
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			mlx->ennemies->ptr, x, y);
	else if (mlx->map->tab[i + 1] == 'C')
		mlx_put_image_to_window(mlx->ptr, mlx->win,
			mlx->collect->ptr, x, y);
	else if (mlx->map->tab[i + 1] == 'E')
		mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->exit[0].ptr, x, y);
}

void	put_map_apl(t_mlx_ptr *mlx, int i, int x, int y)
{
	while (i < (int)ft_strlen((const char *)mlx->map->tab) - 1)
	{
		x += 64;
		put_map_sprites1(mlx, i, x, y);
		i++;
		if (x == 1600 || i % mlx->map->columns == mlx->map->columns - 1)
		{
			while (i % mlx->map->columns != mlx->map->columns - 1)
			{
				x += 64;
				i++;
			}
			x = x - (mlx->map->columns * 64);
			while (x < 254)
			{
				x += 64;
				i++;
			}
			y += 64;
		}
		if (y == 864)
			break ;
	}
}

void	put_map_bpl(t_mlx_ptr *mlx, int i, int x, int y)
{
	while (i != 0)
	{
		x -= 64;
		put_map_sprites2(mlx, i, x, y);
		i--;
		if (x == 320 || i % mlx->map->columns == 0)
		{
			while (i % mlx->map->columns != 0 && i > 0)
			{
				x -= 64;
				i--;
			}
			x = x + (mlx->map->columns * 64);
			while (x > 1664 && i > 0)
			{
				x -= 64;
				i--;
			}
			y -= 64;
		}
		if (y == 96)
			break ;
	}
}

int	put_game(t_mlx_ptr *mlx)
{
	int	i;
	int	x;
	int	y;

	x = mlx->player[0].x;
	y = mlx->player[0].y;
	i = 0;
	while (mlx->map->tab[i] != 'P')
		i++;
	mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->wlp[0].ptr, 0, 0);
	mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->score->ptr, 900, 0);
	mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->player[0].ptr, 960, 480);
	put_map_bpl(mlx, i, x, y);
	put_map_apl(mlx, i, x, y);
	return (1);
}
