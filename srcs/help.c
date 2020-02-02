/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 19:52:02 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/02 19:55:48 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	put_command(t_env e)
{
	int	m_y;
	int	m_x;

	m_y = 20;
	m_x = IM_X;
	mlx_string_put(e.mlx, e.win, m_x, m_y, 0xDDDDDD, CONTROLS);
	mlx_string_put(e.mlx, e.win, m_x, m_y + 36, 0xDDDDDD, H_L_CLICK);
	mlx_string_put(e.mlx, e.win, m_x, m_y + 53, 0xDDDDDD, H_R_CLICK);
	mlx_string_put(e.mlx, e.win, m_x, m_y + 70, 0xDDDDDD, H_PLUS);
	mlx_string_put(e.mlx, e.win, m_x, m_y + 87, 0xDDDDDD, H_MINUS);
	mlx_string_put(e.mlx, e.win, m_x, m_y + 104, 0xDDDDDD, H_ZERO);
	mlx_string_put(e.mlx, e.win, m_x, m_y + 121, 0xDDDDDD, H_NUM);
	mlx_string_put(e.mlx, e.win, m_x, m_y + 138, 0xDDDDDD, H_ESC);
	if (!(ft_strcmp(e.av, "julia")))
	{
		mlx_string_put(e.mlx, e.win, m_x, m_y + 155, 0xDDDDDD, H_SPACE1);
		mlx_string_put(e.mlx, e.win, m_x, m_y + 172, 0xDDDDDD, H_SPACE2);
		mlx_string_put(e.mlx, e.win, m_x, m_y + 189, 0xDDDDDD, H_SPACE3);
		mlx_string_put(e.mlx, e.win, m_x, m_y + 220, 0xDDDDDD, H_JULIA1);
		mlx_string_put(e.mlx, e.win, m_x, m_y + 237, 0xDDDDDD, H_JULIA2);
		mlx_string_put(e.mlx, e.win, m_x, m_y + 254, 0xDDDDDD, H_JULIA3);
	}
}
