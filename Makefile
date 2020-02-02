# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chbelan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/30 14:13:47 by chbelan           #+#    #+#              #
#    Updated: 2020/02/02 14:22:14 by chbelan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= fractol

SRC_PATH		= ./srcs/

SRCS			= $(shell ls $(SRC_PATH) | grep -E ".+\.c")

INC				= -I ./includes

LIB				= ./libft/libft.a

GCC				= gcc

FLAGS			= -Wall -Wextra -Werror

OBJS			= $(addprefix $(SRC_PATH), $(SRCS:.c=.o))

MAKELIB			= make re -C libft/

LIBFT			= -Llibft/ -lft

LIBMLX			= -L /usr/local/lib -lmlx

FRAME			= -framework OpenGL -framework AppKit

%.o: %.c
	@$(GCC) $(INC) -o $@ -c $<

$(NAME): $(OBJS)
	@$(GCC) -o $@ $(OBJS) $(LIBFT) $(LIB) $(LIBMLX) $(FRAME) $(FLAGS)

all : $(NAME)
	

clean :
	@rm -rf $(OBJS) ; echo "Obj Cleaned"

fclean : clean
	@rm -rf $(NAME) ; echo "Exec Cleaned"

re : fclean all

relibft : 
	$(MAKELIB)

.PHONY : all clean fclean re
