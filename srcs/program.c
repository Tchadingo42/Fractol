/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 17:54:17 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/02 20:21:40 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	program(t_env e)
{
	e.mlx = mlx_init();
	e.win = mlx_new_window(e.mlx, WIN_X, WIN_Y, " Tchadingo fractol");
	e.im = mlx_new_image(e.mlx, IM_X, WIN_Y);
	e.imc = mlx_get_data_addr(e.im, &e.bpp, &e.imlen, &e.endi);
	mlx_string_put(e.mlx, e.win, 450, 320, 0xFFFFFF, "Press a button to start");
	ft_ini_fract(&e);
	mlx_hook(e.win, MOTIONNOTIFY, POINTERMOTIONMASK, ft_julia_hook, &e);
	mlx_hook(e.win, KEYPRESS, KEYPRESSMASK, ft_key_hit, &e);
	mlx_hook(e.win, KEYRELEASE, KEYRELEASEMASK, ft_key_release, &e);
	mlx_mouse_hook(e.win, ft_mouse_hook, &e);
	mlx_loop_hook(e.mlx, ft_core, &e);
	mlx_loop(e.mlx);
}
