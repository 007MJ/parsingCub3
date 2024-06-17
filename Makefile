NAME   = cubepars
CC     = gcc
CFLAGS = -Wall -Werror -Wextra -g -fsanitize=address
# -fsanitize=address

RM     = rm -fr

SRCS    = main.c parsing/getfile.c parsing/filename.c parsing/printerror.c parsing/valide.c parsing/pathtexture.c parsing/wallscolors.c parsing/getmap.c parsing/removenewline.c\
		libft/ft_strdup.c libft/ft_strlen.c libft/ft_memcpy.c libft/ft_memmove.c libft/strmalloc.c libft/ft_isupper.c libft/ft_isdigit.c libft/ft_putstr_fd.c libft/ft_strchr.c\
		get_next/get_next_line.c \
		pars_map/look_space.c pars_map/six_char_invalide.c pars_map/close_by_one.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME):$(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $^

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
