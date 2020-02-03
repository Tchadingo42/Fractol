/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   settings.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 19:53:22 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/03 20:58:52 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

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
