# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 10:12:20 by isidibe-          #+#    #+#              #
#    Updated: 2017/12/05 09:21:23 by isidibe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

SRC = $(SRCDIR)/ft_bzero.c\
$(SRCDIR)/ft_memccpy.c\
$(SRCDIR)/ft_memset.c\
$(SRCDIR)/ft_memmove.c\
$(SRCDIR)/ft_memchr.c\
$(SRCDIR)/ft_memcmp.c\
$(SRCDIR)/ft_strdup.c\
$(SRCDIR)/ft_strcpy.c\
$(SRCDIR)/ft_strncpy.c\
$(SRCDIR)/ft_strcat.c\
$(SRCDIR)/ft_strncat.c\
$(SRCDIR)/ft_strchr.c\
$(SRCDIR)/ft_strrchr.c\
$(SRCDIR)/ft_strlcat.c\
$(SRCDIR)/ft_strstr.c\
$(SRCDIR)/ft_strnstr.c\
$(SRCDIR)/ft_strcmp.c\
$(SRCDIR)/ft_strncmp.c\
$(SRCDIR)/ft_isalnum.c\
$(SRCDIR)/ft_isascii.c\
$(SRCDIR)/ft_isprint.c\
$(SRCDIR)/ft_toupper.c\
$(SRCDIR)/ft_tolower.c\
$(SRCDIR)/ft_memcpy.c\
$(SRCDIR)/ft_strlen.c\
$(SRCDIR)/ft_isalpha.c\
$(SRCDIR)/ft_isdigit.c\
$(SRCDIR)/ft_atoi.c\
$(SRCDIR)/ft_memalloc.c\
$(SRCDIR)/ft_memdel.c\
$(SRCDIR)/ft_strnew.c\
$(SRCDIR)/ft_strdel.c\
$(SRCDIR)/ft_strclr.c\
$(SRCDIR)/ft_striter.c\
$(SRCDIR)/ft_striteri.c\
$(SRCDIR)/ft_strmap.c\
$(SRCDIR)/ft_strmapi.c\
$(SRCDIR)/ft_strequ.c\
$(SRCDIR)/ft_strnequ.c\
$(SRCDIR)/ft_itoa.c\
$(SRCDIR)/ft_strsub.c\
$(SRCDIR)/ft_strjoin.c\
$(SRCDIR)/ft_strtrim.c\
$(SRCDIR)/ft_strsplit.c\
$(SRCDIR)/ft_putchar.c\
$(SRCDIR)/ft_putstr.c\
$(SRCDIR)/ft_putendl.c\
$(SRCDIR)/ft_putnbr.c\
$(SRCDIR)/ft_putchar_fd.c\
$(SRCDIR)/ft_putstr_fd.c\
$(SRCDIR)/ft_putendl_fd.c\
$(SRCDIR)/ft_putnbr_fd.c\
$(SRCDIR)/ft_lstnew.c\
$(SRCDIR)/ft_lstdelone.c\
$(SRCDIR)/ft_lstdel.c\
$(SRCDIR)/ft_lstadd.c\
$(SRCDIR)/ft_lstiter.c\
$(SRCDIR)/ft_lstmap.c\
$(SRCDIR)/ft_iscntrl.c\
$(SRCDIR)/ft_islower.c\
$(SRCDIR)/ft_isupper.c\
$(SRCDIR)/ft_strcapitalize.c\
$(SRCDIR)/ft_sqrt.c\
$(SRCDIR)/ft_strcdup.c\
$(SRCDIR)/ft_strclen.c\
$(SRCDIR)/ft_itoa_base.c\
$(SRCDIR)/ft_strupcase.c

INCLUDES = includes

OBJDIR = objects

SRCDIR = srcs

OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

NAME = libft.a

all: $(NAME)

$(NAME): build $(OBJ)
	@ar rc $(NAME) $(OBJ)

%.o: %.c
	@gcc -o $@ -c $< -Wall -Wextra -Werror

clean:
	@rm -f $(OBJ)
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

build:
	@mkdir -p objects

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@gcc -c -o $@ $< -Wall -Wextra -Werror -I$(INCLUDES)
