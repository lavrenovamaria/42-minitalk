# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/04 19:44:00 by wrickard          #+#    #+#              #
#    Updated: 2021/08/04 19:44:00 by wrickard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_isalpha.c ft_memcpy.c ft_memset.c ft_itoa.c ft_putendl_fd.c\
ft_memccpy.c ft_memmove.c ft_memcmp.c ft_memchr.c ft_strlen.c ft_strlcpy.c \
ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_isdigit.c \
ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c \
ft_strdup.c ft_substr.c ft_strmapi.c ft_strjoin.c ft_strtrim.c \
ft_putchar_fd.c ft_putstr_fd.c ft_bzero.c ft_putnbr_fd.c ft_split.c\

OBJS = $(patsubst %.c,%.o,$(SRCS))

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

$(NAME) : $(OBJS)
	ar rcs $(NAME) $?

%.o : %.c
	 gcc $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
		@rm -f $(OBJS)
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
