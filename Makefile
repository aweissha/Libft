NAME = libft.a

SRCS =			ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c \

OBJS = $(SRCS:.c=.o)


CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): main.o function1.o function2.o funtion3.o
		$(CC) $(CFLAGS) function1.o function2.o function3.o main.o -o $(OBJ)

function1.o :function1.c
		$(CC) $(CFLAGS) -c function1.c
function2.o :function2.c
		$(CC) $(CFLAGS) -c function2.c
function3.o :function3.c
		$(CC) $(CFLAGS) -c function3.c
main.o :main.c
		$(CC) $(CFLAGS) -c main.c
exec:
		./func

clean:
		rm -rf func
		rm -rf *.o


