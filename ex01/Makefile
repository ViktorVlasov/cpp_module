# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/29 11:14:06 by efumiko           #+#    #+#              #
#    Updated: 2021/01/09 10:51:40 by efumiko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pbook

SRC = main.cpp ContactPbook.cpp Pbook.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -o $(NAME) $(CFLAGS) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re run