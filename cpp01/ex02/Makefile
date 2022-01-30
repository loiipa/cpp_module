# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjang <cjang@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/30 15:25:00 by cjang             #+#    #+#              #
#    Updated: 2022/01/30 16:54:00 by cjang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++ -std=c++98
CXXFLAGS = -Wall -Wextra -Werror
TARGET = ex01

SRCS = main.cpp Zombie.cpp ZombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
