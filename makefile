# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 10:00:31 by davidma2          #+#    #+#              #
#    Updated: 2024/10/04 14:28:48 by davidma2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii ft_isdigit \
ft_isprint ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset ft_strchr \
  ft_strdup ft_strlcat ft_strlcpy ft_strlen ft_strncmp ft_strnstr ft_strrchr \
  ft_tolower ft_toupper ft_putendl_fd ft_putstr_fd ft_substr ft_split ft_itoa \
  ft_strlen ft_tolower ft_putchar_fd ft_strjoin ft_strtrim ft_strmapi

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
