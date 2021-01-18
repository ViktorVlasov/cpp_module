# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efumiko <efumiko@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/29 11:14:06 by efumiko           #+#    #+#              #
#    Updated: 2021/01/18 17:46:26 by efumiko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

# INCLUDES
#INC_DIR = ./
#INC_FILES =
#INC = $(addprefix $(INC_DIR), $(INC_FILES))

# SOURCES 
SRC_DIR = ./
SRC_FILES =	ex04.cpp
SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))

# OBJECTS
OBJ_DIR = obj/
OBJS =	$(patsubst %.cpp, $(OBJ_DIR)%.o, $(SRC))

# COMP
CC = clang++
CFLAGS = -Wall -Wextra -Werror #-I$(INC_DIR)

# MAIN
all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $@
	@echo "================ ALL DONE! ================"


$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "================ CLEAN DONE! ================"


fclean: clean
	@rm -f $(NAME)
	@echo "================ FCLEAN DONE! ================"


re: fclean all

.PHONY: all clean fclean re
