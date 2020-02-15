/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_setup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 19:45:32 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/15 19:23:41 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		key_init(int key, t_elem *elem)
{
	if (key == ESC)
	{
		ft_putstr("End of program\n");
		exit(-1);
	}
	if (key == PLUS || key == MINUS)
		elem->itm = (key == PLUS ? 1 : -1);
	if (key == ONE || key == TWO)
		elem->arg = (key == ONE ? "mandelbrot" : "julia");
	if (key == THREE)
		elem->arg = "tricorn";
	if (key == ONE || key == TWO || key == THREE)
	{
		setup_fractal(elem);
		settings(elem);
	}
	if (!elem->checker)
		settings(elem);
	elem->checker = 1;
	return (1);
}

void	key_iteration(t_elem *elem)
{
	if (elem->itm == -1 && elem->iter_max > 20)
		elem->iter_max -= 20;
	if (elem->itm == 1)
		elem->iter_max += 20;
}
