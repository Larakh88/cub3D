/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:16:20 by lel-khou          #+#    #+#             */
/*   Updated: 2023/03/29 20:44:53 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static void	get_angle(t_cube *cube)
{
	if (cube->dire == 'N')
		cube->a = PI / 2;
	else if (cube->dire == 'S')
		cube->a = 3 * PI / 2;
	else if (cube->dire == 'E')
		cube->a = 0;
	else if (cube->dire == 'W')
		cube->a = PI;
}

void	start_game(t_cube *cube)
{
	cube->width = width_map(cube->map);
	cube->height = ft_sizeofarray(cube->map);
	cube->mlx = mlx_init();
	cube->mlx_win = mlx_new_window(cube->mlx, SWIDTH, SHEIGHT, "Cub3D");
	get_angle(cube);
	ray_casting(cube);
	if (cube->height < HEIGHT / 4 && cube->width < WIDTH / 4)
		draw_minimap(cube);
	mlx_hook(cube->mlx_win, 02, 1L << 0, key_hook, cube);
	mlx_hook(cube->mlx_win, 17, 0, destroy_game, cube);
	mlx_loop(cube->mlx);
}
