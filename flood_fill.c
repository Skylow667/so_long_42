/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlocusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:55:03 by nlocusso          #+#    #+#             */
/*   Updated: 2022/11/16 13:55:36 by nlocusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	flood_fill(unsigned char *tab_cpy, size_t i, t_map *map)
{
	if (tab_cpy[i] == '1')
		return ;
	tab_cpy[i] = '1';
	flood_fill(tab_cpy, i - map->columns, map);
	flood_fill(tab_cpy, i + 1, map);
	flood_fill(tab_cpy, i + map->columns, map);
	flood_fill(tab_cpy, i - 1, map);
}

void	prepare_flood(t_map *map)
{
	size_t			i;
	unsigned char	*tab_cpy;

	i = 0;
	tab_cpy = (unsigned char *)ft_strdup((char *)map->tab);
	while (tab_cpy[i] != 'P')
		i++;
	flood_fill(tab_cpy, i, map);
	i = 0;
	while (tab_cpy[i])
	{
		if (tab_cpy[i] != '1' && tab_cpy[i] != '0')
		{
			free(tab_cpy);
			print_error(3, map);
		}
		i++;
	}
	free(tab_cpy);
}
