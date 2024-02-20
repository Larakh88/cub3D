/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:35:07 by ykulkarn          #+#    #+#             */
/*   Updated: 2023/03/29 20:39:38 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	initializer(t_cube *cube)
{
	cube->north = NULL;
	cube->south = NULL;
	cube->east = NULL;
	cube->west = NULL;
	cube->ceiling = NULL;
	cube->floor = NULL;
	cube->inc = FOV / SWIDTH;
}
