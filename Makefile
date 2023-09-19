# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jamedina <jamedina@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 17:49:37 by jamedina          #+#    #+#              #
#    Updated: 2023/09/19 18:18:25 by jamedina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_putchar.c ft_putnbr.c \
		ft_putstr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_tolower.c \
		ft_toupper.c ft_isalnum.c ft_isascii.c ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_memmove.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c

OBJ =	$(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all:	$(NAME)

$(NAME):
			gcc -c $(CFLAGS) $(SRC)
			ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re