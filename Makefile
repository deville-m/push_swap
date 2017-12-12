CHECKER=checker
PUSHSWAP=push_swap
CC=gcc
CFLAGS=-Wall -Wextra -Werror -fsanitize=address
INCLUDES=includes/
SRCDIR=srcs/
COMMONDIR=commons/
CHECKERDIR=checker_src/
PUSHSWAPDIR=push_swap_src/

COMMONSRC =	add_back.c \
			add_elem.c \
			del_list.c \
			del_stack.c \
			find_elem.c \
			ft_atoi.c \
			ft_putstr_fd.c \
			ft_putnbr_fd.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strlen.c \
			ft_strnew.c \
			ft_memalloc.c \
			get_next_line.c \
			init_list.c \
			new_elem.c \
			pop_elem.c \
			print_list.c \
			print_stack.c \
			push.c \
			r_rotate.c \
			r_rotate_stack.c \
			rotate.c \
			rotate_stack.c \
			str_isnumber.c \
			swap.c \
			swap_stack.c

CHECKERSRC=	apply_instructions.c \
			check_sort.c \
			main.c

COMMONDIR:= $(addprefix $(SRCDIR), $(COMMONDIR))
CHECKERDIR:= $(addprefix $(SRCDIR), $(CHECKERDIR))
PUSHSWAPDIR:= $(addprefix $(SRCDIR), $(PUSHSWAPDIR))

COMMONSRC:= $(addprefix $(COMMONDIR), $(COMMONSRC))
COMMONOBJ:= $(COMMONOBJ:.c=.o)

CHECKERSRC:= $(addprefix $(CHECKERDIR), $(CHECKERSRC))
CHECKERSRC:= $(CHECKERSRC) $(COMMONSRC)
CHECKEROBJ:= $(CHECKERSRC:.c=.o)

#PUSHSWAPSRC= $(addprefix $(CHECKERDIR), $(CHECKERSRC))
#PUSHSWAPSRC= $(CHECKERSRC) $(COMMONSRC)
#PUSHSWAPOBJ= $(PUSHSWAPSRC:.c=.o)

all: $(CHECKER) #$(NAME2)

%.o: %.c
	@$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

$(CHECKER): $(CHECKERSRC)
	$(CC) $(CFLAGS) -I$(INCLUDES) -o $@ $^

clean:
	rm -f $(CHECKEROBJ) $(PUSHSWAPOBJ)

fclean: clean
	rm -f $(CHECKER) $(PUSHSWAP)

re: fclean
	$(MAKE)

.PHONY: all clean fclean re
