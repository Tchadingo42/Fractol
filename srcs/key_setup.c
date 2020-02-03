/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_setup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 19:45:32 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/03 21:16:12 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		key_init(int key, t_elem *e)
{
	if (key == PLUS || key == MINUS)
		e->itm = (key == PLUS ? 1 : -1);
	if (key == ZERO || key == 82)
		e->reset = 1;
	if (key == ONE || key == TWO)
		e->arg = (key == ONE ? "mandelbrot" : "julia");
	if (key == THREE)
		e->arg = "tricorn";
	if (key == ONE || key == TWO || key == THREE)
	{
		setup_fractal(e);
		settings(e);
	}
	if (!e->check)
		settings(e);
	e->check = 1;
	return (1);
}

int		key_release(int key, t_elem *e)
{
	if (key == ESC)
		exit(-1);
	if (key == PLUS || key == MINUS)
		e->itm = 0;
	if (key == ZERO)
		e->reset = 0;
	return (1);
}

void	key_action(t_elem *e)
{
	if (e->itm == -1 && e->iter_max > 10)
		e->iter_max -= 10;
	if (e->itm == 1)
		e->iter_max += 10;
	if (e->reset == 1)
		setup_fractal(e);
}
