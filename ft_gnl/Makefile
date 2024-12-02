OBJS = \
	ft_get_next_line.o \

all: libftgnl.a

libftgnl.a: libftstr.a $(OBJS)
	cp ../ft_str/libftstr.a libftgnl.a
	ar rcs $@ $(OBJS)

libftstr.a:
	make -C ./../ft_str all

%.o: %.c \
	cc -c $< -Wall -Wextra -Werror -o $@

clean:
	rm -f $(OBJS)
	make -C ./../ft_str clean

fclean: clean
	rm -f libftgnl.a
	make -C ./../ft_str fclean

re: fclean all

.PHONY: all clean fclean re
