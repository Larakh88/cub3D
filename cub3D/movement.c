/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:12:12 by ykulkarn          #+#    #+#             */
/*   Updated: 2023/03/29 20:41:53 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	w_move(t_cube *c)
{
	if (c->a > A240 && c->a < A300 && c->map[c->y - 1][c->x] != '1')
		c->y--;
	else if (c->a > A150 && c->a < A210 && c->map[c->y][c->x - 1] != '1')
		c->x--;
	else if (c->a > A60 && c->a < A120 && c->map[c->y + 1][c->x] != '1')
		c->y++;
	else if (c->map[c->y][c->x + 1] != '1' \
			&& ((c->a >= 0 && c->a < A30) || c->a > A330))
		c->x++;
	else
		w_diag(c);
}

void	s_move(t_cube *c)
{
	if (c->a > A240 && c->a < A300 && c->map[c->y + 1][c->x] != '1')
		c->y++;
	else if (c->a > A150 && c->a < A210 && c->map[c->y][c->x + 1] != '1')
		c->x++;
	else if (c->a > A60 && c->a < A120 && c->map[c->y - 1][c->x] != '1')
		c->y--;
	else if (c->map[c->y][c->x - 1] != '1' \
			&& ((c->a >= 0 && c->a < A30) || c->a > A330))
		c->x--;
	else
		s_diag(c);
}

void	d_move(t_cube *c)
{
	if (c->a > A240 && c->a < A300 && c->map[c->y][c->x + 1] != '1')
		c->x++;
	else if (c->a > A150 && c->a < A210 && c->map[c->y - 1][c->x] != '1')
		c->y--;
	else if (c->a > A60 && c->a < A120 && c->map[c->y][c->x - 1] != '1')
		c->x--;
	else if (c->map[c->y + 1][c->x] != '1' \
			&& ((c->a >= 0 && c->a < A30) || c->a > A330))
		c->y++;
	else
		d_diag(c);
}

void	a_move(t_cube *c)
{
	if (c->a > A240 && c->a < A300 && c->map[c->y][c->x - 1] != '1')
		c->x--;
	else if (c->a > A150 && c->a < A210 && c->map[c->y + 1][c->x] != '1')
		c->y++;
	else if (c->a > A60 && c->a < A120 && c->map[c->y][c->x + 1] != '1')
		c->x++;
	else if (c->map[c->y - 1][c->x] != '1' \
			&& ((c->a >= 0 && c->a < A30) || c->a > A330))
		c->y--;
	else
		a_diag(c);
}
