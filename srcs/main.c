/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/14/01 19:15:14 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/03 21:03:01 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		main(int argc, char **argv)
{
	t_elem elem;

	elem.check = 0;
	if ((ft_strcmp(argv[1], "mandelbrot") && (ft_strcmp(argv[1], "julia")
					&& ft_strcmp(argv[1], "tricorn"))))
	{
		ft_putstr("Invalid arguments\n");
		exit(-1);
	}
	if (argc != 2)
	{
		ft_putstr("Invalid size of arguments\n");
		exit(-1);
	}
	else
		elem.arg = argv[1];
	program(elem);
	return (0);
}
