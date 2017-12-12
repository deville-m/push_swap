CHECKER=checker
PUSHSWAP=push_swap
CC=gcc
CFLAGS=-Wall -Wextra -Werror
INCLUDES=includes/
SRCDIR=srcs/
COMMONDIR=commons/
CHECKERDIR=checker/
PUSHSWAPDIR=push_swap/

COMMONDIR= $(addprefix $(SRCDIR), $(COMMONDIR))
CHECKERDIR= $(addprefix $(SRCDIR), $(CHECKERDIR))
PUSHSWAPDIR= $(addprefix $(SRCDIR), $(PUSHSWAPDIR))
CHECKEROBJ=$(CHECKERSRC:.c=.o)
#PUSHSWAPOBJ=$(PUSHSWAPSRC:.c=.o)
OBJS=$(CHECKEROBJ) #$(PUSHSWAPOBJ)

all: $(CHECKER) #$(NAME2)

%.o: %.c
	@$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

$(CHECKER): $(CHECKERSRC)
	$(CC) $(CFLAGS) -I$(INCLUDES) -o $@ $^

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(CHECKER) $(PUSHSWAP)

re: fclean
	@$(MAKE)

.PHONY: all clean fclean re
