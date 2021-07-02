NAME = ex01

FLAGS = -Wall -Wextra -Werror 

target = main.cpp \
		serialization.cpp \
			
headers = serialization.hpp \

OBJS = $(target:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(headers)
	@clang++ $(FLAGS) -c $< -o $@


$(NAME): $(OBJS)
	clang++ $(FLAGS) $(OBJS) -o $(NAME)


clean:
	rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all