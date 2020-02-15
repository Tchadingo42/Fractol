/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 18:42:11 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/15 19:13:54 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		zoom_out(int x, int y, t_elem *e)
{
	if (e->zoom > 250)
	{
		e->zoom /= 2;
		e->tmpx = e->x1 + x * (e->x2 - e->x1) / IM_X;
		e->tmpy = e->y1 + y * (e->y2 - e->y1) / WIN_Y;
		e->tmpx2 = e->x1;
		e->tmpy2 = e->y1;
		e->x1 = e->tmpx - (e->x2 - e->x1);
		e->x2 = e->tmpx + (e->x2 - e->tmpx2);
		e->y1 = e->tmpy - (e->y2 - e->y1);
		e->y2 = e->tmpy + (e->y2 - e->tmpy2);
	}
}

void		zoom_in(int x, int y, t_elem *e)
{
	e->zoom *= 2;
	e->tmpx = e->x1 + x * (e->x2 - e->x1) / (IM_X - 50);
	e->tmpy = e->y1 + y * (e->y2 - e->y1) / (WIN_Y - 20);
	e->tmpx2 = e->x1;
	e->tmpy2 = e->y1;
	e->x1 = e->tmpx - (e->x2 - e->x1) / 4;
	e->x2 = e->tmpx + (e->x2 - e->tmpx2) / 4;
	e->y1 = e->tmpy - (e->y2 - e->y1) / 4;
	e->y2 = e->tmpy + (e->y2 - e->tmpy2) / 4;
}

int			mouse_hook(int key, int x, int y, t_elem *elem)
{
	if (!elem->checker)
		settings(elem);
	if (y > 0 && elem->checker)
	{
		if ((key == 1 || key == 5) && x <= IM_X)
			zoom_in(x, y, elem);
		if ((key == 2 || key == 4) && x <= IM_X)
			zoom_out(x, y, elem);
	}
	elem->checker = 1;
	return (1);
}
