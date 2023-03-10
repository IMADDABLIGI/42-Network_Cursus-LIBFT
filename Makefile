# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 16:57:31 by idabligi          #+#    #+#              #
#    Updated: 2022/11/01 10:49:45 by idabligi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
FLAGS =  -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

FLS = ft_isalpha ft_isdigit ft_isalnum ft_isprint ft_isascii\
	ft_toupper ft_tolower ft_itoa ft_atoi ft_strlen ft_strdup\
	ft_putnbr_fd ft_bzero ft_putchar_fd ft_putendl_fd ft_putstr_fd\
	ft_split ft_strchr ft_strrchr ft_calloc ft_memset ft_strjoin\
	ft_memchr ft_strtrim ft_memcmp ft_strncmp ft_memcpy ft_memmove\
	ft_striteri ft_substr ft_strmapi ft_strlcpy ft_strlcat ft_strnstr\

FLS_B = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast \
	ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter\

FO = $(FLS:=.o)
FOB = $(FLS_B:=.o)

all : $(NAME)

$(NAME) : $(FO)
	$(AR) $(NAME) $(FO)

bonus : $(FOB)
	$(AR) $(NAME) $(FOB)

%.o:%.c libft.h
	$(CC) -c $(FLAGS) $<

clean :
	$(RM) $(FO) $(FOB)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re