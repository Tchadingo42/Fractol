/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 17:54:17 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/03 21:20:39 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	program(t_elem e)
{
	e.mlx = mlx_init();
	e.win = mlx_new_window(e.mlx, WIN_X, WIN_Y, " Tchadingo fractol");
	e.im = mlx_new_image(e.mlx, IM_X, WIN_Y);
	e.imc = mlx_get_data_addr(e.im, &e.bpp, &e.imlen, &e.endi);
	mlx_string_put(e.mlx, e.win, 450, 320, 0xFFFFFF, "Press a button to start");
	setup_fractal(&e);
	mlx_hook(e.win, MOTION, 1 << 0, julia_hook, &e);
	mlx_hook(e.win, KEY_PRESS, 1, key_init, &e);
	mlx_hook(e.win, KEY_RELEASE, 1 << 6, key_release, &e);
	mlx_mouse_hook(e.win, mouse_hook, &e);
	mlx_loop_hook(e.mlx, window, &e);
	mlx_loop(e.mlx);
}

void	print_fractal(t_elem *e)
{
	if (!(ft_strcmp(e->arg, "mandelbrot")))
		print_mandelbrot(e);
	if (!(ft_strcmp(e->arg, "julia")))
		print_julia(e);
	if (!(ft_strcmp(e->arg, "tricorn")))
		print_tricorn(e);
}
