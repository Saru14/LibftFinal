# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbodson <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/23 14:57:00 by jbodson           #+#    #+#              #
#    Updated: 2020/01/23 14:57:05 by jbodson          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c  ft_memccpy.c ft_memset.c  ft_tolower.c \
ft_bzero.c   ft_memcpy.c  ft_strlen.c  ft_toupper.c \
ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
ft_isprint.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_memcmp.c \
ft_memmove.c ft_memchr.c ft_calloc.c ft_strdup.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c ft_substr.c ft_strjoin.c \
ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		  ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		  ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUSOBJ= ${BONUS:.c=.o}

CC		= cc

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}

bonus:		${OBJS} ${BONUSOBJ}
			ar rc ${NAME} ${OBJS} ${BONUSOBJ}	

clean:
			${RM} ${OBJS} ${BONUSOBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
