# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csorrilh <cbsorrilha@hotmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/29 11:58:27 by csorrilh          #+#    #+#              #
#    Updated: 2022/06/16 15:20:33 by csorrilh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalnum.c\
	  ft_isalpha.c\
	  ft_isascii.c\
	  ft_isdigit.c\
	  ft_isprint.c\
	  ft_tolower.c\
	  ft_toupper.c\
	  ft_strlen.c\
	  ft_memset.c\
	  ft_bzero.c\
	  ft_memcpy.c\
	  ft_atoi.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strncmp.c\
	  ft_memmove.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_strlcpy.c\
	  ft_strlcat.c\
	  ft_strnstr.c\
	  ft_calloc.c\
	  ft_strdup.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_itoa.c\
	  ft_substr.c\
	  ft_strjoin.c\
	  ft_strtrim.c\
	  ft_strmapi.c\
	  ft_putnbr_fd.c\
	  ft_split.c\
	  ft_striteri.c

OBJS	= $(SRCS:.c=.o)

BONUS_SRC	= ft_lstnew_bonus.c\
		ft_lstiter_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstadd_back_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstmap_bonus.c


OBJS_BONUS	= ${BONUS_SRC:.c=.o}

NAME	= libft.a

CC	= cc

AR	= ar rc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}


${NAME}: $(OBJS)
	${AR} ${NAME} $(OBJS)

all: ${NAME}

bonus: ${NAME} ${OBJS_BONUS}
		ar rcs ${NAME} ${OBJS_BONUS}

clean:
	${RM} ${OBJS}
	${RM} ${OBJS_BONUS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all


.PHONY:	all clean fclean re
