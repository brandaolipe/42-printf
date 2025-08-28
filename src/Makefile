NAME = libftprintf.a

INCLUDES = .

SRCS = ft_printf.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_putunsig.c \
	ft_puthex.c \
	ft_putpointer.c

OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror -I $(INCLUDES) 

all:		${NAME}

${NAME}:	${OBJS}
			ar crs ${NAME} ${OBJS}

${OBJS}:
			cc ${CFLAGS} -I . -c ${SRCS}

clean:		
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all
