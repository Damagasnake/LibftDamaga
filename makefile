# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davidma2 <davidma2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 10:00:31 by davidma2          #+#    #+#              #
#    Updated: 2024/09/30 09:43:35 by davidma2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = atoi bzero calloc isalnum isalpha isascii isdigit isprint \
memchr memcmp memcpy memmove memset strchr strdup strlcat \
strlcpy strlen strncmp strnstr strrchr tolower toupper ft_putendl_fd \
ft_putstr_fd ft_substr
OBJ = $(SRC:=.o)

INCLUDE = libft.h

AR = ar rcs
RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
		
fclean: clean
	$(RM) $(NAME)

re: fclean all
