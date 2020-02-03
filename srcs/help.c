/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 15:52:02 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/03 20:57:18 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	put_help(t_elem e)
{
	int	c_y;
	int	c_x;

	c_y = 20;
	c_x = IM_X;
	mlx_string_put(e.mlx, e.win, c_x, c_y, ORANGE, COMMANDS);
	mlx_string_put(e.mlx, e.win, c_x, c_y + 40, ORANGE, C_CLICK);
	mlx_string_put(e.mlx, e.win, c_x, c_y + 80, ORANGE, C_PLUS);
	mlx_string_put(e.mlx, e.win, c_x, c_y + 100, ORANGE, C_MINUS);
	mlx_string_put(e.mlx, e.win, c_x, c_y + 120, ORANGE, C_ZERO);
	mlx_string_put(e.mlx, e.win, c_x, c_y + 140, ORANGE, C_CHOOSE);
	mlx_string_put(e.mlx, e.win, c_x, c_y + 160, ORANGE, C_EXIT);
}
