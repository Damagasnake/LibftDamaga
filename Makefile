# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 16:34:16 by davidmartin       #+#    #+#              #
#    Updated: 2025/05/14 10:59:55 by davidma2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii ft_isdigit \
ft_isprint ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset ft_strchr \
  ft_strdup ft_strlcat ft_strlcpy ft_strlen ft_strncmp ft_strnstr ft_strrchr \
 ft_toupper ft_putendl_fd ft_putstr_fd ft_substr ft_split ft_itoa \
  ft_strlen ft_tolower ft_putchar_fd ft_strjoin ft_strtrim ft_strmapi ft_putnbr_fd ft_striteri \
 ft_printf_hex ft_printf ft_pointersp printf_utils
OBJ = $(SRC:=.o)

HEAD = libft.h

AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

%.o: %.c $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
		
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re