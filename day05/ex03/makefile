NAME = ex03

FLAGS = -Wall -Wextra -Werror 

target = main.cpp \
		Bureaucrat.cpp \
		Form.cpp\
		PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp\
		ShrubberyCreationForm.cpp\
		Intern.cpp\

		
headers = Bureaucrat.hpp \
		  Form.hpp \
		  PresidentialPardonForm.hpp\
		  RobotomyRequestForm.hpp\
		  ShrubberyCreationForm.hpp\
		  Intern.hpp\

OBJS = $(target:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(headers)
	clang++ $(FLAGS) -c $< -o $@


$(NAME): $(OBJS)
	clang++ $(FLAGS) $(OBJS) -o $(NAME)


clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all