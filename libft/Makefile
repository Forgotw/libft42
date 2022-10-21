
NAME		= libft.a

SRCS		= ft_isalpha.c ft_isascii.c ft_strncmp.c\
				ft_memcpy.c ft_strjoin.c ft_strnstr.c ft_atoi.c ft_isdigit.c ft_memmove.c\
				ft_strlcat.c ft_bzero.c ft_isprint.c ft_memset.c ft_split.c ft_strlcpy.c ft_strtrim.c ft_calloc.c\
				ft_strlen.c ft_substr.c ft_isalnum.c ft_strdup.c

OBJS	= $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -I.

RM		= rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: 		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:		
			$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:		fclean $(NAME)

bonus: 		$(OBJS) $(BONUS_OBJS)
			ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus

