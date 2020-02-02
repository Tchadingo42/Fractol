/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfortin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 18:20:56 by jfortin           #+#    #+#             */
/*   Updated: 2020/02/02 19:45:15 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_ini_fract(t_env *e)
{
	if (!(ft_strcmp(e->av, "mandelbrot")))
		ft_ini_val_mandelbrot(e);
	if (!(ft_strcmp(e->av, "julia")))
		ft_ini_val_julia(e);
	if (!(ft_strcmp(e->av, "mandelbis")))
		ft_ini_val_mandelbis(e);
}

void	ft_print_fract(t_env *e)
{
	if (!(ft_strcmp(e->av, "mandelbrot")))
		print_mandelbrot(e);
	if (!(ft_strcmp(e->av, "julia")))
		print_julia(e);
	if (!(ft_strcmp(e->av, "mandelbis")))
		print_mandelbis(e);
}

int		main(int argc, char **argv)
{
	t_env elem;

	elem.check = 0;
	if (argc != 2)
	{
		ft_putstr("Invalid size of arguments\n");
		exit(-1);
	}
	else
		if (ft_strcmp(argv[1], "mandelbrot") || ft_strcmp(argv[1], "julia"))
			elem.av = argv[1];
			program(elem);
	return (0);
}
