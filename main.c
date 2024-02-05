/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:35:24 by ykulkarn          #+#    #+#             */
/*   Updated: 2023/03/29 20:41:33 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(int argc, char **argv)
{
	t_cube	*cube;

	if (argc == 2)
	{
		if (error_check(argv[1]) != 0)
			return (1);
		cube = malloc(sizeof(t_cube));
		if (!cube)
			ft_error_file("Error\nMalloc Failed!", cube);
		initializer(cube);
		file_read(argv[1], cube);
		file_split(cube, cube->file);
		file_check(cube);
		start_game(cube);
	}
	else
		printf("Error\nWrong Number of Arguments!\n");
}
