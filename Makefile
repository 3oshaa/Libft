# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joker <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 23:15:59 by joker             #+#    #+#              #
#    Updated: 2021/10/11 23:59:58 by joker            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
INCL = libft.h
SRC = ft_isdigit.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_isprint.c\
ft_putchar_fd.c ft_strlcat.c ft_substr.c ft_atoi.c ft_itoa.c ft_putendl_fd.c\
ft_strlcpy.c ft_tolower.c ft_bzero.c ft_memcpy.c ft_putnbr_fd.c ft_strlen.c\
ft_toupper.c ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strmapi.c ft_isalnum.c\
ft_memcmp.c ft_split.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c ft_striteri.c

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c\
		ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
OBJCS = ${SRC:.c=.o}
OBJCSBONUS = ${BONUS:.c=.o}
.c.o:
	gcc ${FLAGS} -c $< -o ${<:.c=.o} -I ${INCL}
$(NAME): ${OBJCS}
	ar rc ${NAME} ${OBJCS}
all: ${NAME}

bonus: ${OBJCS} ${OBJCSBONUS}
	ar rc ${NAME} ${OBJCS} ${OBJCSBONUS}
clean:
	rm -f ${OBJCS} ${OBJCSBONUS}
fclean: clean
	rm -f ${NAME}
re: fclean all
