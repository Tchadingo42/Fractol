/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_fractals.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:48:12 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/15 19:32:32 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	print_fractal(t_elem *elem)
{
	if (!(ft_strcmp(elem->arg, "mandelbrot")))
		print_mandelbrot(elem);
	if (!(ft_strcmp(elem->arg, "julia")))
		print_julia(elem);
	if (!(ft_strcmp(elem->arg, "tricorn")))
		print_tricorn(elem);
}
