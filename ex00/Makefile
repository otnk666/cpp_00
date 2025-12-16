NAME		=	megaphone
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra
CXXFLAGS	+=	-std=c++98 -pedantic

RM		=	rm -rf
SRCS	=	megaphone.cpp
OBJS	=	$(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re