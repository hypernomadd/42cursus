NAME	= convert
SRCS	= main.cpp Number.cpp
OBJS	= $(SRCS:.cpp=.o)
CPPC	= clang++
FLAGS	= -std=c++98 -Wall -Wextra -Werror

MULTI	= false
COLORED	= false

.cpp.o:
	$(CPPC) $(FLAGS) -c $< -o $@ -D MULTI=$(MULTI) -D COLORED=$(COLORED)

$(NAME): $(OBJS)
	$(CPPC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: all
	./$(NAME) c
	@echo
	./$(NAME) a
	@echo
	./$(NAME) 0
	@echo
	./$(NAME) 42
	@echo
	./$(NAME) -42
	@echo
	./$(NAME) 0f
	@echo
	./$(NAME) 42f
	@echo
	./$(NAME) -42f
	@echo
	./$(NAME) 0.0f
	@echo
	./$(NAME) 42.0f
	@echo
	./$(NAME) -42.0f
	@echo
	./$(NAME) 4.2f
	@echo
	./$(NAME) -4.2f
	@echo
	./$(NAME) 42.f
	@echo
	./$(NAME) -42.f
	@echo
	./$(NAME) 0.0
	@echo
	./$(NAME) 42.0
	@echo
	./$(NAME) -42.0
	@echo
	./$(NAME) 4.2
	@echo
	./$(NAME) -4.2
	@echo
	./$(NAME) 42.
	@echo
	./$(NAME) -42.
	@echo
	./$(NAME) inff
	@echo
	./$(NAME) -inff
	@echo
	./$(NAME) nanf
	@echo
	./$(NAME) inf
	@echo
	./$(NAME) -inf
	@echo
	./$(NAME) nan
	@echo
	./$(NAME) +0
	@echo
	./$(NAME) -0
	@echo
	./$(NAME) 42.0042

test-error: all
	! ./$(NAME) ""
	@echo
	! ./$(NAME) +
	@echo
	! ./$(NAME) ++
	@echo
	! ./$(NAME) -
	@echo
	! ./$(NAME) --
	@echo
	! ./$(NAME) 0..0
	@echo
	! ./$(NAME) 0..
	@echo
	! ./$(NAME) ..0
	@echo
	! ./$(NAME) +nan
	@echo
	! ./$(NAME) +nanf
	@echo
	! ./$(NAME) -nan
	@echo
	! ./$(NAME) -nanf
	@echo
	! ./$(NAME) aa
	@echo
	! ./$(NAME) 0123a


test-all: all test test-error

.PHONY: all re clean fclean .cpp.o test test-error
