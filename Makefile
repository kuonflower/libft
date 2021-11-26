# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 10:18:26 by ktanigaw          #+#    #+#              #
#    Updated: 2021/11/27 00:48:37 by ktanigaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
BONUS_EXIST_FLG = .bonus_exist_flg
CC = gcc
INCLUDE = -I./
CFLAGS = -Wall -Wextra -Werror $(INCLUDE)

SRCS = ft_atoi.c\
 ft_bzero.c\
 ft_calloc.c\
 ft_isalnum.c\
 ft_isalpha.c\
 ft_isascii.c\
 ft_isdigit.c\
 ft_isprint.c\
 ft_itoa.c\
 ft_memchr.c\
 ft_memcmp.c\
 ft_memcpy.c\
 ft_memmove.c\
 ft_memset.c\
 ft_putchar_fd.c\
 ft_putendl_fd.c\
 ft_putnbr_fd.c\
 ft_putstr_fd.c\
 ft_split.c\
 ft_strchr.c\
 ft_strdup.c\
 ft_striteri.c\
 ft_strjoin.c\
 ft_strlcat.c\
 ft_strlcpy.c\
 ft_strlen.c\
 ft_strmapi.c\
 ft_strncmp.c\
 ft_strnstr.c\
 ft_strrchr.c\
 ft_strtrim.c\
 ft_substr.c\
 ft_tolower.c\
 ft_toupper.c

BONUSES = ft_lstadd_back.c\
 ft_lstadd_front.c\
 ft_lstclear.c\
 ft_lstdelone.c\
 ft_lstiter.c\
 ft_lstlast.c\
 ft_lstmap.c\
 ft_lstnew.c\
 ft_lstsize.c

SRCS_OBJS = $(SRCS:%.c=%.o)
BONUSES_OBJS =$(BONUSES:%.c=%.o)

.PHONY: all clean fclean re bonus

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(SRCS_OBJS)
	ar rc $(NAME) $(SRCS_OBJS)

bonus: $(BONUS_EXIST_FLG)

$(BONUS_EXIST_FLG) :$(SRCS_OBJS) $(BONUSES_OBJS)
	@touch $(BONUS_EXIST_FLG)
	ar rc $(NAME) $(SRCS_OBJS) $(BONUSES_OBJS)

clean:
	rm -f $(SRCS_OBJS) $(BONUSES_OBJS) $(BONUS_EXIST_FLG)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
