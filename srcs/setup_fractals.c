/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_fractals.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 19:47:50 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/15 19:00:03 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	init_mandelbrot(t_elem *e)
{
	e->x1 = -2.1;
	e->x2 = 0.6;
	e->y1 = -1.2;
	e->y2 = 1.2;
	e->zoom = 250;
	e->im_x = (e->x2 - e->x1) * e->zoom + 150 + WIN_X - IM_X;
	e->im_y = (e->y2 - e->y1) * e->zoom;
	e->iter_max = 100;
}

void	init_julia(t_elem *e)
{
	e->x1 = -1.6;
	e->x2 = 1;
	e->y1 = -1.2;
	e->y2 = 1.2;
	e->zoom = 250;
	e->im_x = (e->x2 - e->x1) * e->zoom + 150;
	e->im_y = (e->y2 - e->y1) * e->zoom;
	e->iter_max = 100;
	e->c_r = 0.285;
	e->c_i = 0.01;
}

void	init_tricorn(t_elem *e)
{
	e->x1 = -2.1;
	e->x2 = 1;
	e->y1 = -1.2;
	e->y2 = 1.2;
	e->zoom = 250;
	e->im_x = (e->x2 - e->x1) * e->zoom + 50;
	e->im_y = (e->y2 - e->y1) * e->zoom;
	e->iter_max = 100;
}

void	setup_fractal(t_elem *e)
{
	if (!(ft_strcmp(e->arg, "mandelbrot")))
		init_mandelbrot(e);
	if (!(ft_strcmp(e->arg, "julia")))
		init_julia(e);
	if (!(ft_strcmp(e->arg, "tricorn")))
		init_tricorn(e);
}
