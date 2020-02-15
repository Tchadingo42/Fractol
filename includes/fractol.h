/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/14/02 15:17:05 by chbelan           #+#    #+#             */
/*   Updated: 2020/02/15 19:17:47 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../libft/libft.h"
# include <mlx.h>
# define BLACK 0x000000
# define WHITE 0xFFFFFF
# define ORANGE 0xFFA500
# define BLUE 0x4169E1
# define WIN_X 1200
# define IM_X 750
# define WIN_Y 600
# define LEFT 123
# define RIGHT 124
# define KEY_PRESS 2
# define MOVEMENT  6
# define ESC 53
# define PLUS 69
# define MINUS 78
# define ZERO 29
# define ONE 18
# define TWO 19
# define THREE 20
# define COMMANDS   "          COMMANDS         "
# define C_CLICK	"	     Click to zoom      "
# define C_PLUS	    "    Add iter  |    +       "
# define C_MINUS    "    Sub iter  |    -		"
# define C_CHOOSE   "    Choose    |    1-2-3   "
# define C_EXIT     "    Exit      |    ESC     "

typedef struct	s_elem
{
	void		*mlx;
	void		*win;
	char		*arg;
	void		*im;
	char		*imc;
	int			bpp;
	int			imlen;
	int			endi;
	int			i;
	int			x;
	int			y;
	int			checker;
	int			iter_max;
	int			im_x;
	int			im_y;
	int			itm;
	float		x1;
	float		x2;
	float		y1;
	float		y2;
	float		c_r;
	float		c_i;
	float		z_r;
	float		z_i;
	float		tmp;
	float		zoom;
	float		zoom_x;
	float		zoom_y;
	float		tmpx;
	float		tmpy;
	float		tmpx2;
	float		tmpy2;

}				t_elem;

void			invalid_arguments(void);
void			program(t_elem e);
void			print_fractal(t_elem *elem);
void			setup_fractal(t_elem *e);
int				check_arguments(void);
void			init_mandelbrot(t_elem *e);
void			init_julia(t_elem *e);
void			init_tricorn(t_elem *e);
void			print_mandelbrot(t_elem *e);
void			print_julia(t_elem *e);
void			print_tricorn(t_elem *e);
int				key_init(int key, t_elem *elem);
void			key_iteration(t_elem *elem);
void			ft_put_pixel(t_elem *e, int x, int y, int color);
void			settings(t_elem *e);
int				julia_hook(int x, int y, t_elem *e);
void			put_help(t_elem e);
void			setup_window(t_elem *e);
void			zoom_out(int x, int y, t_elem *e);
void			zoom_in(int x, int y, t_elem *e);
int				mouse_hook(int key, int x, int y, t_elem *elem);
int				window(t_elem *elem);

#endif
