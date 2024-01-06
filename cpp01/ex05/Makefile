# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/28 16:11:47 by aamhal            #+#    #+#              #
#    Updated: 2023/12/28 16:11:48 by aamhal           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl_2.0
CC = c++
FLAGS = -Wall -Wextra -Werror
SOURCE =  main.cpp  Harl.cpp       
OBJS = $(SOURCE:.cpp=.o)

all: $(NAME)

%.o: %.cpp Harl.hpp 
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) 
	@$(CC) $(FLAGS)  -o $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re