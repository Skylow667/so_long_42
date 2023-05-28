/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlocusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:13:50 by nlocusso          #+#    #+#             */
/*   Updated: 2022/11/16 13:56:37 by nlocusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_initialized(t_map *map)
{
	(void)map;
	map->lines = 0;
	map->columns = 0;
	map->player = 0;
	map->collect = 0;
	map->empty = 0;
	map->exit = 0;
	map->exit_i = 0;
	map->win = 0;
	map->lose = 0;
	map->tab = NULL;
}

void	print_error(int error_type, t_map *map)
{
	if (error_type == 0)
		ft_printf("Error\nUnkonwn values!\n");
	else if (error_type == 1)
		ft_printf("Error\nThe map is not surrounded by a wall!\n");
	else if (error_type == 2)
	{
		ft_printf("Error\n");
		ft_printf("The map must contain one player, exit and collectible!\n");
	}
	else if (error_type == 3)
		ft_printf("Error\nImpossible map!\n");
	else if (error_type == 4)
		ft_printf("Error\nThe lines do not have the same length!\n");
	else if (error_type == 5)
		ft_printf("Error\nThe file does not exist!\n");
	free(map->tab);
	free(map);
	exit(0);
}

void	check_data(t_map *map, size_t i)
{
	if ((i < map->columns || i > i * (map->lines - 1))
		&& map->tab[i] != '1')
		print_error(1, map);
	if (i > ft_strlen((const char *)map->tab) - map->columns
		&& map->tab[i] != '1')
		print_error(1, map);
	if ((i % map->columns == 0 || i % map->columns == map->columns - 1)
		&& map->tab[i] != '1')
		print_error(1, map);
	if (map->tab[i] != '1' && map->tab[i] != '0' && map->tab[i] != 'P'
		&& map->tab[i] != 'E' && map->tab[i] != 'C')
		print_error(0, map);
	if (map->tab[i] == 'P')
		map->player++;
	if (map->tab[i] == 'E')
	{
		map->exit_i = i;
		map->exit++;
	}
	if (map->tab[i] == 'C')
		map->collect++;
	if (map->tab[i] == '0')
		map->empty++;
}

void	check_lines(t_map *map)
{
	size_t	i;

	i = 0;
	while (map->tab[i])
	{
		check_data(map, i);
		i++;
	}
	if (map->exit > 1 || map->exit == 0 || map->player > 1
		|| map->player == 0 || map->collect == 0)
		print_error(2, map);
}

void	check_map(char *argv, t_map *map)
{
	char			*line;
	int				fd;
	char			*tmp;

	fd = open(argv, O_RDONLY);
	if (fd < 0)
		print_error(5, map);
	line = get_next_line(fd);
	map->columns = ft_strlen(line) - 1;
	map->tab = ft_calloc(map->columns, 1);
	while (line != NULL)
	{
		line[ft_strlen(line) - 1] = 0;
		map->lines++;
		if (ft_strlen(line) != map->columns)
		{
			free(line);
			print_error(4, map);
		}
		tmp = ft_strjoin((char *)map->tab, line);
		free(map->tab);
		free(line);
		map->tab = (unsigned char *)tmp;
		line = get_next_line(fd);
	}
}
