/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixels.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:09:48 by lel-khou          #+#    #+#             */
/*   Updated: 2023/03/29 20:41:55 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

int	get_pix(t_data texture, int x, int y)
{
	int		color;
	char	*pixel;

	pixel = texture.addr + (y * texture.line_length + \
	x * (texture.bits_per_pixel / 8));
	color = *(int *)pixel;
	return (color);
}
