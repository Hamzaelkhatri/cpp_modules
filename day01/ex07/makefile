NAME= replace
OBJ_PATH=obj
COMP= clang++ -Wall -Wextra -Werror
SRC= replace.cpp file.cpp

OBJ_NAME= $(SRC:.cpp=.o)

OBJ= $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all:			$(NAME)

$(NAME) :  $(OBJ)
	@rm -rf $(NAME)
	@$(COMP) $(OBJ) -o $@

$(OBJ_PATH)/%.o: %.cpp 
	@mkdir -p $(OBJ_PATH) 
	@$(COMP) -g -o $@ -c $<

clean:
	@rm -rf $(OBJ_PATH)
	@echo "all objects files are deleted." 

fclean: clean
	@rm -rf $(NAME)
	@echo "all obbjects are deleted." 

re : fclean all
