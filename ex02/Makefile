NAME		=	tests

SRCS		=	./tests.cpp \
				./Account.cpp
	
OBJS		=	$(SRCS:.cpp=.o)

CPP			=	clang++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

all :		$(NAME)

$(NAME) :	$(OBJS)
			$(CPP) $(CFLAGS) -o $(NAME) $(OBJS) -I.
			@echo "tests is ready"

clean :		
			$(RM) $(OBJS)

fclean 	:	clean
			$(RM) $(NAME)

re :		fclean all

.PHONY :	all clean fclean re