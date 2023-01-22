# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sohyupar <sohyupar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 15:03:15 by sohyupar          #+#    #+#              #
#    Updated: 2023/01/18 17:17:12 by sohyupar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= cc

CFLAGS		= -Wall -Wextra -Werror

HEADER 		= libft.h

SRCS 		= ft_memset.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
			  ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c ft_atoi.c \
			  ft_strncmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c \
			  ft_strrchr.c ft_substr.c ft_strnstr.c ft_calloc.c ft_strdup.c \
			  ft_strjoin.c ft_itoa.c ft_strtrim.c ft_split.c ft_bzero.c ft_memcpy.c \
			  ft_memmove.c ft_memchr.c ft_memcmp.c ft_strmapi.c ft_striteri.c \
			  ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_itoa.c

OBJS 		= $(SRCS:c=o) 

ALLOBJ 		= $(OBJS)

NAME		= libft.a

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

$(NAME): $(ALLOBJ)
	ar rc $@ $(ALLOBJ)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: 
	make fclean 
	make all

.PHONY: all clean fclean re
