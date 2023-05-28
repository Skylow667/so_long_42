/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ennemies.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlocusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:59:59 by nlocusso          #+#    #+#             */
/*   Updated: 2022/11/16 15:17:47 by nlocusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	put_d(t_mlx_ptr *mlx, int i, int j)
{
	if (mlx->map->tab[i] == 'P')
	{
		mlx->map->lose = 1;
		return (1);
	}
	mlx->map->tab[j] = '0';
	mlx->map->tab[i] = 'D';
	return (0);
}

int	move_ennemy(t_mlx_ptr *mlx, int i, int p)
{
	int	nb;

	if (mlx->map->tab[i] == 'M')
	{
		nb = rand() % 4;
		if (nb == 0
			&& !ft_strchr("1CEMD", mlx->map->tab[i - mlx->map->columns])
			&& put_d(mlx, i - mlx->map->columns, i) == 1)
			return (1);
		else if (nb == 1
			&& !ft_strchr("1CEMD", mlx->map->tab[i + mlx->map->columns])
			&& put_d(mlx, i + mlx->map->columns, i) == 1)
			return (1);
		else if (nb == 2 && !ft_strchr("1CEMD", mlx->map->tab[i + 1])
			&& put_d(mlx, i + 1, i) == 1)
			return (1);
		else if (nb == 3 && !ft_strchr("1CEMD", mlx->map->tab[i - 1])
			&& put_d(mlx, i - 1, i) == 1)
			return (1);
		put_map_apl(mlx, p, mlx->player[0].x, mlx->player[0].y);
		put_map_bpl(mlx, p, mlx->player[0].x, mlx->player[0].y);
	}
	return (0);
}

int	move_ennemies(t_mlx_ptr *mlx)
{
	int	i;
	int	p;

	i = 0;
	if (mlx->cnt_ennemies++ < 100000)
		return (1);
	while (mlx->map->tab[i] != 'P')
		i++;
	p = i;
	i = 0;
	while (mlx->map->tab[i] != '\0')
	{
		if (move_ennemy(mlx, i, p) == 1)
			return (1);
		i++;
	}
	i = 0;
	while (mlx->map->tab[i])
	{
		if (mlx->map->tab[i] == 'D')
			mlx->map->tab[i] = 'M';
		i++;
	}
	mlx->cnt_ennemies = 0;
	return (1);
}

void	nb_ennemies(t_map *map)
{
	int	nb_ennemies;
	int	nb_rand;
	int	i;
	int	cnt;

	srand(time(NULL));
	if (map->empty < 30)
		nb_ennemies = 1;
	else
		nb_ennemies = map->empty / 30;
	while (nb_ennemies != 0)
	{
		nb_rand = rand() % (map->empty + 1);
		i = 0;
		cnt = 0;
		while (cnt != nb_rand && i < (int)map->empty)
		{
			if (map->tab[i] == '0')
				cnt++;
			i++;
		}
		if (i != 0 && cnt == nb_rand)
			map->tab[i - 1] = 'M';
		nb_ennemies--;
	}
}
