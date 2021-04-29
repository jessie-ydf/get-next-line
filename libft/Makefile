# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dfiquemo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/19 11:42:48 by dfiquemo          #+#    #+#              #
#    Updated: 2019/12/04 14:48:03 by dfiquemo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strlen.c ft_memset.c ft_strcpy.c ft_strdup.c ft_strcmp.c ft_strncpy.c \
	ft_strcat.c ft_strncat.c ft_strlcat.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_atoi.c \
	ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_memcmp.c ft_memchr.c \
	ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memalloc.c ft_memdel.c \
	ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c \
	ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c \
	ft_putchar.c ft_putstr.c ft_putendl.c ft_itoa.c ft_putnbr.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strsplit.c ft_lstnew.c \
	ft_lstdel.c ft_lstdelone.c ft_lstadd.c ft_lstiter.c ft_lstmap.c

OBJ = $(SRC:.c=.o)

SRCDIR = srcs

OBJDIR = objs

SRCS = $(addprefix $(SRCDIR)/, $(SRC))

OBJS = $(addprefix $(OBJDIR)/, $(OBJ))

HEADER = includes

CC = gcc

FLAG = -Wall -Wextra -Werror

OPTION = -c -I $(HEADER)

.PHONY: all clean fclean re

all: $(NAME)

$(OBJS): $(SRCS)
	/bin/mkdir -p $(OBJDIR);
	$(CC) $(FLAG) $(OPTION) $(SRCS);
	/bin/mv $(OBJ) $(OBJDIR)/

$(NAME): $(OBJS)
	ar rcs $@ $^
	ranlib $@

clean:
	/bin/rm -rf $(OBJDIR)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
