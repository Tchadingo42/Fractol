/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 18:39:50 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/02 18:47:34 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			check_arguments(void)
{
	t_env	elem;

	if (!(ft_strcmp(elem.av, "mandelbrot") || (ft_strcmp(elem.av, "julia"))))
	{
		ft_putstr("Invalid fractal\n");
		exit(-1);
	}
	return (0);
}
