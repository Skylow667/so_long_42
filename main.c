/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlocusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:58:56 by nlocusso          #+#    #+#             */
/*   Updated: 2022/11/14 15:04:24 by nlocusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_map	*map;

	if (argc != 2 || ft_strlen(argv[1]) < 5
		|| check_extension(argv[1], ".ber") == 1)
	{
		ft_printf("Error\nUsage : ./so_long <map.ber>\n");
		exit(0);
	}
	map = ft_calloc(1, sizeof(t_map));
	ft_initialized(map);
	check_map(argv[1], map);
	check_lines(map);
	prepare_flood(map);
	nb_ennemies(map);
	open_window(map);
	return (0);
}
