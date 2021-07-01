NAME = ex02

FLAGS = -Wall -Wextra -Werror 

target = main.cpp \
		base.cpp \
			
headers = base.hpp \

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