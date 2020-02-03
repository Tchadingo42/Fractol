/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 17:09:40 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/03 21:21:56 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		window(t_elem *e)
{
	if (e->check == 0)
		return (-1);
	mlx_destroy_image(e->mlx, e->im);
	e->im = mlx_new_image(e->mlx, IM_X, WIN_Y);
	key_action(e);
	print_fractal(e);
	mlx_put_image_to_window(e->mlx, e->win, e->im, 0, 0);
	return (1);
}
