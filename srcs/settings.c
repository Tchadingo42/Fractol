/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   settings.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 19:53:22 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/15 19:20:12 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		invalid_arguments(void)
{
	ft_putendl("Enter one of the fractals (1)mandelbrot (2)julia (3)tricorn");
}

void		settings(t_elem *e)
{
	short	i;
	short	j;

	i = 0;
	while (i <= WIN_Y)
	{
		j = 0;
		while (j <= WIN_X - IM_X)
			ft_put_pixel(e, 0 + j++, i, BLUE);
		i++;
	}
	mlx_put_image_to_window(e->mlx, e->win, e->im, IM_X, 0);
	put_help(*e);
}
