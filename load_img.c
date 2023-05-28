/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlocusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:15:42 by nlocusso          #+#    #+#             */
/*   Updated: 2022/11/16 11:41:30 by nlocusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_img5(t_mlx_ptr *mlx)
{
	mlx->end[18].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end19.xpm",
			&mlx->end[18].width, &mlx->end[18].heigth);
	mlx->end[19].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end20.xpm",
			&mlx->end[19].width, &mlx->end[19].heigth);
	mlx->end[20].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end21.xpm",
			&mlx->end[20].width, &mlx->end[20].heigth);
	mlx->end[21].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end22.xpm",
			&mlx->end[21].width, &mlx->end[21].heigth);
	mlx->end[22].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end23.xpm",
			&mlx->end[22].width, &mlx->end[22].heigth);
	mlx->end[23].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end24.xpm",
			&mlx->end[23].width, &mlx->end[23].heigth);
	mlx->end[24].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end25.xpm",
			&mlx->end[24].width, &mlx->end[24].heigth);
	mlx->end[25].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end26.xpm",
			&mlx->end[25].width, &mlx->end[25].heigth);
	mlx->end[26].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end27.xpm",
			&mlx->end[26].width, &mlx->end[26].heigth);
	mlx->end[27].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end28.xpm",
			&mlx->end[27].width, &mlx->end[27].heigth);
	mlx->end[28].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end29.xpm",
			&mlx->end[28].width, &mlx->end[28].heigth);
	mlx->end[29].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end30.xpm",
			&mlx->end[29].width, &mlx->end[29].heigth);
	load_img6(mlx);
}

void	load_img4(t_mlx_ptr *mlx)
{
	mlx->end[6].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end7.xpm",
			&mlx->end[6].width, &mlx->end[6].heigth);
	mlx->end[7].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end8.xpm",
			&mlx->end[7].width, &mlx->end[7].heigth);
	mlx->end[8].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end9.xpm",
			&mlx->end[8].width, &mlx->end[8].heigth);
	mlx->end[9].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end10.xpm",
			&mlx->end[9].width, &mlx->end[9].heigth);
	mlx->end[10].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end11.xpm",
			&mlx->end[10].width, &mlx->end[10].heigth);
	mlx->end[11].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end12.xpm",
			&mlx->end[11].width, &mlx->end[11].heigth);
	mlx->end[12].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end13.xpm",
			&mlx->end[12].width, &mlx->end[12].heigth);
	mlx->end[13].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end14.xpm",
			&mlx->end[13].width, &mlx->end[13].heigth);
	mlx->end[14].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end15.xpm",
			&mlx->end[14].width, &mlx->end[14].heigth);
	mlx->end[15].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end16.xpm",
			&mlx->end[15].width, &mlx->end[15].heigth);
	mlx->end[16].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end17.xpm",
			&mlx->end[16].width, &mlx->end[16].heigth);
	mlx->end[17].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end18.xpm",
			&mlx->end[17].width, &mlx->end[17].heigth);
	load_img5(mlx);
}

void	load_img3(t_mlx_ptr *mlx)
{
	mlx->player[21].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/ppr7.xpm",
			&mlx->player[21].width, &mlx->player[21].heigth);
	mlx->floor->ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/floor.xpm",
			&mlx->floor->width, &mlx->floor->heigth);
	mlx->collect->ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/collect.xpm",
			&mlx->collect->width, &mlx->collect->heigth);
	mlx->exit[0].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/exit.xpm",
			&mlx->exit[0].width, &mlx->exit[0].heigth);
	mlx->exit[1].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/exit_p1.xpm",
			&mlx->exit[1].width, &mlx->exit[1].heigth);
	mlx->exit[2].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/exit_p2.xpm",
			&mlx->exit[2].width, &mlx->exit[2].heigth);
	mlx->end[0].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end1.xpm",
			&mlx->end[0].width, &mlx->end[0].heigth);
	mlx->end[1].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end2.xpm",
			&mlx->end[1].width, &mlx->end[1].heigth);
	mlx->end[2].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end3.xpm",
			&mlx->end[2].width, &mlx->end[2].heigth);
	mlx->end[3].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end4.xpm",
			&mlx->end[3].width, &mlx->end[3].heigth);
	mlx->end[4].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end5.xpm",
			&mlx->end[4].width, &mlx->end[4].heigth);
	mlx->end[5].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/end6.xpm",
			&mlx->end[5].width, &mlx->end[5].heigth);
	load_img4(mlx);
}

void	load_img2(t_mlx_ptr *mlx)
{
	mlx->player[9].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/pp2.xpm",
			&mlx->player[9].width, &mlx->player[9].heigth);
	mlx->player[10].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/pp3.xpm",
			&mlx->player[10].width, &mlx->player[10].heigth);
	mlx->player[11].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/pp4.xpm",
			&mlx->player[11].width, &mlx->player[11].heigth);
	mlx->player[12].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/pp5.xpm",
			&mlx->player[12].width, &mlx->player[12].heigth);
	mlx->player[13].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/pp6.xpm",
			&mlx->player[13].width, &mlx->player[13].heigth);
	mlx->player[14].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/pp7.xpm",
			&mlx->player[14].width, &mlx->player[14].heigth);
	mlx->player[15].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/ppr1.xpm",
			&mlx->player[15].width, &mlx->player[15].heigth);
	mlx->player[16].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/ppr2.xpm",
			&mlx->player[16].width, &mlx->player[16].heigth);
	mlx->player[17].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/ppr3.xpm",
			&mlx->player[17].width, &mlx->player[17].heigth);
	mlx->player[18].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/ppr4.xpm",
			&mlx->player[18].width, &mlx->player[18].heigth);
	mlx->player[19].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/ppr5.xpm",
			&mlx->player[19].width, &mlx->player[19].heigth);
	mlx->player[20].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/ppr6.xpm",
			&mlx->player[20].width, &mlx->player[20].heigth);
	load_img3(mlx);
}

void	load_img(t_mlx_ptr *mlx)
{
	mlx->wlp[0].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/cp-wp.xpm",
			&mlx->wlp[0].width, &mlx->wlp[0].heigth);
	mlx->wlp[1].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/wp-lose.xpm",
			&mlx->wlp[1].width, &mlx->wlp[1].heigth);
	mlx->player[0].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/player.xpm",
			&mlx->player[0].width, &mlx->player[0].heigth);
	mlx->ennemies->ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/cyborg.xpm",
			&mlx->ennemies->width, &mlx->ennemies->heigth);
	mlx->player[1].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/player_2.xpm",
			&mlx->player[1].width, &mlx->player[1].heigth);
	mlx->player[2].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/pf1.xpm",
			&mlx->player[2].width, &mlx->player[2].heigth);
	mlx->player[3].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/pf2.xpm",
			&mlx->player[3].width, &mlx->player[3].heigth);
	mlx->player[4].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/pf3.xpm",
			&mlx->player[4].width, &mlx->player[4].heigth);
	mlx->player[5].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/pf4.xpm",
			&mlx->player[5].width, &mlx->player[5].heigth);
	mlx->player[6].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/pf5.xpm",
			&mlx->player[6].width, &mlx->player[6].heigth);
	mlx->player[7].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/pf6.xpm",
			&mlx->player[7].width, &mlx->player[7].heigth);
	mlx->player[8].ptr = mlx_xpm_file_to_image(mlx->ptr, "sprites/pp1.xpm",
			&mlx->player[8].width, &mlx->player[8].heigth);
	load_img2(mlx);
}
