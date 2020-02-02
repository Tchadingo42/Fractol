/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/14/02 15:17:05 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/02 19:56:29 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../libft/libft.h"
# include <mlx.h>
# include <math.h>
# define WIN_X 1200
# define IM_X 750
# define WIN_Y 600
# define KEYPRESS 2
# define KEYRELEASE 3
# define KEYPRESSMASK (1<<0)
# define KEYRELEASEMASK (1<<1)
# define POINTERMOTIONMASK (1<<6)
# define MOTIONNOTIFY 6
# define ESC 53
# define PLUS 69
# define MINUS 78
# define NUM_ZERO 82
# define ZERO 29
# define SPACE 49
# define ONE 18
# define TWO 19
# define THREE 20
# define FOUR 21
# define CONTROLS  "         CONTROLS      "
# define H_L_CLICK "   zoom in   |  L click"
# define H_R_CLICK "   zoom out  |  R click"
# define H_PLUS    "   add iter  |     +   "
# define H_MINUS   "   sub iter  |     -   "
# define H_ZERO    "     reset   |     0   "
# define H_NUM     " change frac |  1-2-3-4"
# define H_ESC     "     exit    |    esc  "
# define H_SPACE1  "   pause the |         "
# define H_SPACE2  " modification|   space "
# define H_SPACE3  "   of julia  |         "
# define H_JULIA1  "      move the mouse   "
# define H_JULIA2  "      to change the    "
# define H_JULIA3  "   shape of the fractal"

typedef struct	s_env
{
	void		*mlx;
	void		*win;
	char		*av;
	void		*im;
	char		*imc;
	int			bpp;
	int			imlen;
	int			endi;
	int			i;
	int			x;
	int			y;
	float		x1;
	float		x2;
	float		y1;
	float		y2;
	int			iter_max;
	int			im_x;
	int			im_y;
	float		c_r;
	float		c_i;
	float		z_r;
	float		z_i;
	float		tmp;
	float		zoom;
	float		zoom_x;
	float		zoom_y;
	int			itm;
	int			reset;
	int			bj;
	int			check;
	float		tmpx;
	float		tmpy;
	float		tmpx2;
	float		tmpy2;

}				t_env;

void			program(t_env e);
int				check_arguments(void);
void			ft_ini_fract(t_env *e);
void			ft_ini_val_mandelbrot(t_env *e);
void			ft_ini_val_julia(t_env *e);
void			ft_ini_val_bship(t_env *e);
void			ft_ini_val_mandelbis(t_env *e);
void			ft_print_fract(t_env *e);
void			print_mandelbrot(t_env *e);
void			print_julia(t_env *e);
void			print_mandelbis(t_env *e);
int				ft_core(t_env *e);
int				ft_key_hit(int keycode, t_env *e);
int				ft_key_release(int keycode, t_env *e);
void			ft_do_key_ation(t_env *e);
void			ft_put_pixel(t_env *e, int x, int y, int color);
void			ft_settings(t_env *e);
int				ft_mouse_hook(int keycode, int x, int y, t_env *e);
int				ft_julia_hook(int x, int y, t_env *e);
void			put_command(t_env env);

#endif
