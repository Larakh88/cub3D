/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diagonal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:36:42 by ykulkarn          #+#    #+#             */
/*   Updated: 2023/03/28 10:35:46 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	w_diag(t_cube *c)
{
	if (c->a >= A300 && c->a <= A330 && c->map[c->y - 1][c->x + 1] != '1' \
		&& c->map[c->y][c->x + 1] != '1' && c->map[c->y - 1][c->x] != '1')
	{
		c->x++;
		c->y--;
	}
	else if (c->a >= A210 && c->a <= A240 && c->map[c->y - 1][c->x - 1] != '1' \
			&& c->map[c->y - 1][c->x] != '1' && c->map[c->y][c->x - 1] != '1')
	{
		c->x--;
		c->y--;
	}
	else if (c->a >= A120 && c->a <= A150 && c->map[c->y + 1][c->x - 1] != '1' \
			&& c->map[c->y][c->x - 1] != '1' && c->map[c->y + 1][c->x] != '1' )
	{
		c->x--;
		c->y++;
	}
	else if (c->a >= A30 && c->a <= A60 && c->map[c->y + 1][c->x + 1] != '1' \
			&& c->map[c->y][c->x + 1] != '1' && c->map[c->y + 1][c->x] != '1')
	{
		c->x++;
		c->y++;
	}
}

void	s_diag(t_cube *c)
{
	if (c->a >= A300 && c->a <= A330 && c->map[c->y + 1][c->x - 1] != '1' \
		&& c->map[c->y + 1][c->x] != '1' && c->map[c->y + 1][c->x - 1] != '1')
	{
		c->x--;
		c->y++;
	}
	else if (c->a >= A210 && c->a <= A240 && c->map[c->y + 1][c->x + 1] != '1' \
			&& c->map[c->y + 1][c->x] != '1' && c->map[c->y][c->x + 1] != '1')
	{
		c->x++;
		c->y++;
	}
	else if (c->a >= A120 && c->a <= A150 && c->map[c->y - 1][c->x + 1] != '1' \
			&& c->map[c->y - 1][c->x] != '1' && c->map[c->y][c->x + 1] != '1')
	{
		c->x++;
		c->y--;
	}
	else if (c->a >= A30 && c->a <= A60 && c->map[c->y - 1][c->x - 1] != '1' \
			&& c->map[c->y - 1][c->x] != '1' && c->map[c->y][c->x - 1] != '1')
	{
		c->x--;
		c->y--;
	}
}

void	d_diag(t_cube *c)
{
	if (c->a >= A300 && c->a <= A330 && c->map[c->y + 1][c->x + 1] != \
		'1' && c->map[c->y + 1][c->x] != '1' && c->map[c->y][c->x + 1] != '1')
	{
		c->x++;
		c->y++;
	}
	else if (c->a >= A210 && c->a <= A240 && c->map[c->y - 1][c->x + 1] != '1' \
			&& c->map[c->y - 1][c->x] != '1' && c->map[c->y][c->x + 1] != '1')
	{
		c->x++;
		c->y--;
	}
	else if (c->a >= A120 && c->a <= A150 && c->map[c->y - 1][c->x - 1] != '1' \
			&& c->map[c->y - 1][c->x] != '1' && c->map[c->y][c->x - 1] != '1')
	{
		c->x--;
		c->y--;
	}
	else if (c->a >= A30 && c->a <= A60 && c->map[c->y + 1][c->x - 1] != '1' \
			&& c->map[c->y + 1][c->x] != '1' && c->map[c->y][c->x - 1] != '1')
	{
		c->x--;
		c->y++;
	}
}

void	a_diag(t_cube *c)
{
	if (c->a >= A300 && c->a <= A330 && c->map[c->y - 1][c->x - 1] != '1' \
		&& c->map[c->y - 1][c->x] != '1' && c->map[c->y][c->x - 1] != '1')
	{
		c->x--;
		c->y--;
	}
	else if (c->a >= A210 && c->a <= A240 && c->map[c->y + 1][c->x - 1] != '1' \
			&& c->map[c->y + 1][c->x] != '1' && c->map[c->y][c->x - 1] != '1')
	{
		c->x--;
		c->y++;
	}
	else if (c->a >= A120 && c->a <= A150 && c->map[c->y + 1][c->x + 1] != '1' \
			&& c->map[c->y + 1][c->x] != '1' && c->map[c->y][c->x + 1] != '1')
	{
		c->x++;
		c->y++;
	}
	else if (c->a >= A30 && c->a <= A60 && c->map[c->y - 1][c->x + 1] != '1' \
			&& c->map[c->y - 1][c->x] != '1' && c->map[c->y][c->x + 1] != '1')
	{
		c->x++;
		c->y--;
	}
}
