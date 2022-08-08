# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/30 16:03:26 by vfiszbin          #+#    #+#              #
#    Updated: 2022/08/08 16:55:21 by vfiszbin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex03

SOURCES := $(wildcard *.cpp)
OBJECTS := $(patsubst %.cpp,%.o,$(SOURCES))
DEPENDS := $(patsubst %.cpp,%.d,$(SOURCES))
 
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@ 

%.o : %.cpp %.hpp Makefile
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

-include $(DEPENDS)

clean :
	$(RM) $(OBJECTS) $(DEPENDS)

fclean : clean
	$(RM) $(NAME)
	$(RM) *_shrubbery

re : fclean all

.PHONY : all debut clean fclean re