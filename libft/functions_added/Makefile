# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/01 19:09:04 by cjulienn          #+#    #+#              #
#    Updated: 2022/04/01 19:27:09 by cjulienn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ./ft_free_and_return.c \
		./ft_intlen_base.c \
		./ft_lltoa.c \
		./ft_protec_strdup.c \
		./ft_putlnbr_base.c \
		./ft_putlnbr_fd.c \
		./ft_strjoin_and_free.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

RM = rm -f

NAME = libftadded.a

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

all:	
	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

lib:	$(NAME) clean

re:		fclean $(NAME)

.PHONY: all clean fclean lib re
