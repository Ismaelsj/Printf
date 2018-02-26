# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/14 13:39:55 by isidibe-          #+#    #+#              #
#    Updated: 2017/12/23 13:30:09 by isidibe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

SRC = $(SRCDIR)/ft_printf.c\
$(SRCDIR)/ft_check_flag.c\
$(SRCDIR)/ft_check_length.c\
$(SRCDIR)/ft_check_precision.c\
$(SRCDIR)/ft_check_width.c\
$(SRCDIR)/ft_check_specifier.c\
$(SRCDIR)/ft_get_string.c\
$(SRCDIR)/ft_get_uni.c\
$(SRCDIR)/ft_is_length.c\
$(SRCDIR)/ft_is_precision.c\
$(SRCDIR)/ft_is_width.c\
$(SRCDIR)/ft_umaxtoa_base.c\
$(SRCDIR)/ft_sharp.c\
$(SRCDIR)/ft_spetype.c\
$(SRCDIR)/ft_strjoin_free.c\
$(SRCDIR)/ft_newstr.c\
$(SRCDIR)/ft_lltoa.c\
$(SRCDIR)/ft_putbuffer.c\
$(SRCDIR)/ft_uni_str_pre.c\
$(SRCDIR)/ft_space_con.c\
$(SRCDIR)/ft_put_uni.c\

INCLUDES = includes

OBJDIR = objects

SRCDIR = srcs

OBJ = $(SRC:$(SRCDIR)/%.c=%.o)

NAME = libftprintf.a

LIB = libft/libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@make -C ./libft
	@cp $(LIB) $(NAME)
	@ar rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)
	@make clean -C ./libft

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C ./libft

re: fclean all

%.o: $(SRCDIR)/%.c
	@$(CC) -c -o $@ $< $(CFLAGS) -I $(INCLUDES)
