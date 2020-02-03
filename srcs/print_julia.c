/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_julia.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 17:42:39 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/03 21:17:51 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	print_julia(t_elem *e)
{
	e->x = -1;
	while (++e->x < e->im_x)
	{
		e->y = -1;
		while (++e->y < e->im_y)
		{
			e->z_r = e->x / e->zoom + e->x1;
			e->z_i = e->y / e->zoom + e->y1;
			e->i = 0;
			while (e->z_r * e->z_r + e->z_i * e->z_i < 4 && e->i < e->iter_max)
			{
				e->tmp = e->z_r;
				e->z_r = e->z_r * e->z_r - e->z_i * e->z_i + e->c_r;
				e->z_i = 2 * e->z_i * e->tmp + e->c_i;
				e->i++;
			}
			if (e->i == e->iter_max)
				ft_put_pixel(e, e->x, e->y, WHITE);
			else
				ft_put_pixel(e, e->x, e->y, e->i * 1899762);
		}
	}
}

int		julia_hook(int x, int y, t_elem *e)
{
	if (!(ft_strcmp(e->arg, "julia")) &&
			x <= IM_X && y <= WIN_Y && x > 0 && y > 0)
	{
		e->c_r = (float)(x + 400 - IM_X) / 300;
		e->c_i = (float)(y + 320 - WIN_Y) / 300;
	}
	return (0);
}
