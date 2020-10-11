# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trhee <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/07 10:40:13 by trhee             #+#    #+#              #
#    Updated: 2020/10/07 17:15:56 by trhee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
	  ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
	  ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
	  ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memccpy.c \
	  ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
	  ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
	  ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c

OBJ = $(SRC:.c=.o)

B_SRC =	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
	    ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
	    ft_lstmap.c ft_lstnew.c ft_lstsize.c

B_OBJ = $(B_SRC:.c=.o)

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rc

all: $(NAME)

%.o: %.c libft.h
	 $(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
		 $(AR) $(NAME) $^

clean:
		$(RM) $(OBJ) $(B_OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all

bonus: $(B_OBJ) 
	   $(AR) $(NAME) $^

.PHONY : all clean fclean re bonus
