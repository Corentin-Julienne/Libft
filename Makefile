# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/09 18:00:27 by cjulienn          #+#    #+#              #
#    Updated: 2022/04/01 19:39:41 by cjulienn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

NAME_VANILLA = libftvanilla.a
VANILLA_PATH = ./libft/

NAME_GNL = libftgnl.a
GNL_PATH =  ./libft/get_next_line/

NAME_FT_PRINTF = libftprintf.a
FT_PRINTF_PATH = ./libft/ft_printf/

NAME_ADDED_FUNC = libftadded.a
ADDED_FUNC_PATH = ./libft/functions_added/

INCLUDES_PATH = ./includes/

CC = gcc
CFLAGS = -Wall -Wextra -Werror I$(INCLUDES_PATH)

RM = rm -f

$(NAME):
	$(MAKE) -C $(GNL_PATH)
	$(MAKE) -C $(FT_PRINTF_PATH)
	$(MAKE) -C $(ADDED_FUNC_PATH)
	$(MAKE) -C $(VANILLA_PATH) bonus
	ar -rc $(NAME) $(VANILLA_PATH)$(NAME_VANILLA) $(GNL_PATH)$(NAME_GNL) \
	$(FT_PRINTF_PATH)$(NAME_FT_PRINTF) $(ADDED_FUNC_PATH)$(NAME_ADDED_FUNC)
	ranlib $(NAME)
	@echo libft.a successfully made !!!

all: 
	$(NAME)

clean:
	$(MAKE) -C $(GNL_PATH) clean
	$(MAKE) -C $(FT_PRINTF_PATH) clean
	$(MAKE) -C $(ADDED_FUNC_PATH) clean
	$(MAKE) -C $(VANILLA_PATH) clean

fclean:	clean
	$(MAKE) -C $(GNL_PATH) fclean
	$(MAKE) -C $(FT_PRINTF_PATH) fclean
	$(MAKE) -C $(ADDED_FUNC_PATH) fclean
	$(MAKE) -C $(VANILLA_PATH) fclean
	$(RM) $(NAME)
	
re:		fclean $(NAME)

lib:	$(NAME) clean

.PHONY: all clean fclean re lib
