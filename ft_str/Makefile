OBJS = \
	ft_str_char_array.o \
	ft_str_creation.o \
	ft_str_push.o \
	ft_str_troncate.o \
	

all: libftstr.a

libftstr.a: $(OBJS)
	ar rcs $@ $^

%.o: %.c \
	cc -c $< -Wall -Wextra -Werror -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libftstr.a

re: fclean all

.PHONY: all clean fclean re
