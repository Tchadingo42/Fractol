/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pixel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 19:34:10 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/02 20:18:36 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_put_pixel(t_env *e, int x, int y, int color)
{
	int	*tmp;

	if (y >= WIN_Y || x >= IM_X || x < 0 || y < 0)
		return ;
	tmp = (int *)&e->imc[(y * e->imlen) + (x * (e->bpp / 8))];
	*tmp = color;
}
