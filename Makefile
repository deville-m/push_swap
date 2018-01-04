CHECKER=checker
PUSHSWAP=push_swap
CC=gcc
CFLAGS=-Wall -Wextra -Werror -fsanitize=address
INCLUDES=includes/
SRCDIR=srcs/
COMMONDIR=commons/
CHECKERDIR=checker_src/
PUSHSWAPDIR=push_swap_src/

COMMONSRC=		add_back.c \
				add_elem.c \
				check_sort.c \
				del_list.c \
				del_stack.c \
				find_elem.c \
				ft_atoi.c \
				ft_isdigit.c \
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

CHECKERSRC=		apply_instructions.c \
				main.c

PUSHSWAPSRC=	main.c \
				lstlen.c \
				lstcpy.c \
				lstsort.c \
				set_pos.c \
				insertion_sort.c \
				instruction1.c \
				instruction2.c \
				instruction3.c

COMMONDIR:= $(addprefix $(SRCDIR), $(COMMONDIR))
CHECKERDIR:= $(addprefix $(SRCDIR), $(CHECKERDIR))
PUSHSWAPDIR:= $(addprefix $(SRCDIR), $(PUSHSWAPDIR))

COMMONSRC:= $(addprefix $(COMMONDIR), $(COMMONSRC))
COMMONOBJ:= $(COMMONOBJ:.c=.o)

CHECKERSRC:= $(addprefix $(CHECKERDIR), $(CHECKERSRC))
CHECKERSRC:= $(CHECKERSRC) $(COMMONSRC)
CHECKEROBJ:= $(CHECKERSRC:.c=.o)

PUSHSWAPSRC:= $(addprefix $(PUSHSWAPDIR), $(PUSHSWAPSRC))
PUSHSWAPSRC:= $(PUSHSWAPSRC) $(COMMONSRC)
PUSHSWAPOBJ:= $(PUSHSWAPSRC:.c=.o)

all: pretty $(CHECKER) $(PUSHSWAP)
	@echo "\tDONE !!"

%.o: %.c
	@zsh -c "echo -n '\tCompiling $<'"
	@$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@
	@zsh -c 'echo -e "\r\t\033[32mCompiled $@\033[0m "'

$(CHECKER): $(CHECKEROBJ)
	@echo "\tLinking $@"
	@$(CC) $(CFLAGS) -I$(INCLUDES) -o $@ $^

$(PUSHSWAP): $(PUSHSWAPOBJ)
	@echo "\tLinking $@"
	@$(CC) $(CFLAGS) -I$(INCLUDES) -o $@ $^

clean:
	@rm -f $(CHECKEROBJ) $(PUSHSWAPOBJ) && echo "Removed object files."

fclean: clean
	@rm -f $(CHECKER) $(PUSHSWAP) && echo "Removed target(s)."

re: fclean
	@$(MAKE)

pretty:
	@figlet -W -f alligator PUSH SWAP | lolcat

.PHONY: all clean fclean re pretty

.IGNORE: pretty
