CC			=	cc
CFLAGS		=	-Wall -Werror -Wextra
LFLAGS		=	

FILES		=				\
			ft_isalpha		\
			ft_isdigit		\
			ft_isalnum		\
			ft_isascii		\
			ft_isprint		\
			ft_strlen		\
			ft_bzero		\
			ft_memcpy		\
			ft_memmove		\
			ft_tolower		\
			ft_memset		\
			ft_toupper		\
			ft_strlcpy		\
			ft_strlcat		\
			ft_strncmp		\
			ft_strnstr		\
			ft_strchr		\
			ft_strrchr		\
			ft_memchr		\
			ft_memcmp		\
			ft_atoi			\
			ft_strdup		\
			ft_calloc		\
			ft_substr		\
			ft_strjoin		\
			ft_putchar_fd	\
			ft_putstr_fd	\
			ft_putendl_fd	\
			ft_putnbr_fd	\
			ft_strtrim		\
			ft_split		\
			ft_itoa			\
			ft_strmapi		\
			ft_striteri

BFILES		=				\
			ft_lstnew		\
			ft_lstadd_front	\
			ft_lstsize		\
			ft_lstlast		\
			ft_lstadd_back	\
			ft_lstdelone	\
			ft_lstclear		\
			ft_lstiter		\
			ft_lstmap		\

SRCS		=	$(addsuffix .c, $(FILES))
BSRCS		=	$(addsuffix .c,$(BFILES))

OBJS		=	$(addsuffix .o,$(FILES))
BOBJS		=	$(addsuffix .o,$(BFILES))

NAME		=	libft.a

.PHONY: all bonus clean fclean re

all: $(NAME)

bonus: $(BOBJS) all
	ar rcs $(NAME) $(BOBJS)

clean:
	rm -rf $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) -c $< -o $@ -I. $(CFLAGS)