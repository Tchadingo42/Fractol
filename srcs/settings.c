/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   settings.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 19:53:22 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/02 20:31:30 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		ft_settings(t_env *e)
{
	short	i;
	short	j;

	i = 0;
	while (i <= WIN_Y)
	{
		j = 0;
		while (j <= WIN_X - IM_X)
			ft_put_pixel(e, 0 + j++, i, 0x318CE7);
		++i;
	}
	mlx_put_image_to_window(e->mlx, e->win, e->im, IM_X, 0);
	put_command(*e);
}
