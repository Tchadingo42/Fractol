/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/14/01 19:15:14 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/15 19:19:02 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		main(int argc, char **argv)
{
	t_elem elem;

	elem.checker = 0;
	if (argc != 2)
	{
		invalid_arguments();
		exit(-1);
	}
	else if ((ft_strcmp(argv[1], "mandelbrot") && (ft_strcmp(argv[1], "julia")
					&& ft_strcmp(argv[1], "tricorn"))))
	{
		invalid_arguments();
		exit(-1);
	}
	else
		elem.arg = argv[1];
	program(elem);
	return (0);
}
