/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 17:09:40 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/15 19:32:21 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		window(t_elem *elem)
{
	if (elem->checker == 0)
		return (-1);
	mlx_destroy_image(elem->mlx, elem->im);
	elem->im = mlx_new_image(elem->mlx, IM_X, WIN_Y);
	key_iteration(elem);
	print_fractal(elem);
	mlx_put_image_to_window(elem->mlx, elem->win, elem->im, 0, 0);
	return (1);
}
