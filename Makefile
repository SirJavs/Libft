# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jamedina <jamedina@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 17:49:37 by jamedina          #+#    #+#              #
#    Updated: 2023/10/03 17:21:29 by jamedina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_putchar.c ft_putnbr.c \
		ft_putstr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_tolower.c \
		ft_toupper.c ft_isalnum.c ft_isascii.c ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_memmove.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c

SRCBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		   ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ =	$(SRC:.c=.o)

OBJBONUS =	$(SRCBONUS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all:	$(NAME)

$(NAME):
			gcc -c $(CFLAGS) $(SRC)
			ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

bonus:
	gcc -c $(CFLAGS) $(SRCBONUS)
	ar rcs $(NAME) $(OBJBONUS)
	
re:	fclean all

.PHONY:	all clean fclean re