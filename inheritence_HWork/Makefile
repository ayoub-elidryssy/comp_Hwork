NAME = H_work

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror

OBJ = main.o Shap.o Shap_2D.o Shap_3D.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all