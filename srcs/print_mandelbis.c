/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_mandelbis.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 19:46:51 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/02 20:15:35 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	print_mandelbis(t_env *e)
{
	e->x = -1;
	while (++e->x < e->im_x)
	{
		e->y = -1;
		while (++e->y < e->im_y)
		{
			e->c_r = e->x / e->zoom + e->x1;
			e->c_i = e->y / e->zoom + e->y1;
			e->z_r = 0;
			e->z_i = 0;
			e->i = 0;
			while (e->z_r * e->z_r + e->z_i * e->z_i < 4 && e->i < e->iter_max)
			{
				e->tmp = e->z_r;
				e->z_r = e->z_r * e->z_r - e->z_i * e->z_i + e->c_r;
				e->z_i = -2 * e->z_i * e->tmp + e->c_i;
				e->i++;
			}
			if (e->i == e->iter_max)
				ft_put_pixel(e, e->x, e->y, 0x000000);
			else
				ft_put_pixel(e, e->x, e->y, e->i * 1899750);
		}
	}
}
