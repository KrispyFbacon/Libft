# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frbranda <frbranda@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 11:27:12 by frbranda          #+#    #+#              #
#    Updated: 2026/04/27 18:14:19 by frbranda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

#==============================================================================#
#                                    NAMES                                     #
#==============================================================================#

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -g
AR = ar -rcs
RM = rm -rf


#==============================================================================#
#                                    FILES                                     #
#==============================================================================#

SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
			ft_isalpha.c ft_isascii.c ft_isdigit.c \
			ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c\
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
			ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
			ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
			ft_toupper.c ft_striteri.c ft_strmapi.c ft_split.c \
			ft_putnbr_base.c ft_putnbr_base_p.c \
			ft_isupper.c ft_islower.c ft_isnum.c ft_isspace.c \
			ft_has_whitespace.c ft_itol.c ft_atol.c ft_atoll.c \
			ft_realloc.c ft_matrix_free.c ft_free.c ft_arrlen.c \
			ft_strcmp.c ft_strldup.c ft_strjoin_free.c ft_strdup_free.c \
			ft_matrix_dup.c ft_matrix_dup_int.c

# Bonus
SOURCES += ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c ft_lstiter.c ft_lstmap.c
			
# Printf
SOURCES += ft_printf/ft_printf.c
SOURCES += ft_printf/ft_putchar_pf.c 
SOURCES += ft_printf/ft_putnbr_pf.c
SOURCES += ft_printf/ft_putstr_pf.c 

# Printf FD
SOURCES +=	ft_printf_fd/ft_printf_fd.c
SOURCES +=	ft_printf_fd/ft_putchar_fd_pf.c
SOURCES +=	ft_printf_fd/ft_puthex_fd.c
SOURCES +=	ft_printf_fd/ft_putnbr_fd_pf.c
SOURCES +=	ft_printf_fd/ft_putptr_fd.c
SOURCES +=	ft_printf_fd/ft_putstr_fd_pf.c
SOURCES +=	ft_printf_fd/ft_pututoa_fd.c

# get_next_line
SOURCES += get_next_line/get_next_line.c
SOURCES += get_next_line/get_next_line_utils.c


OBJECT = $(SOURCES:.c=.o)


#==============================================================================#
#                                    RULES                                     #
#==============================================================================#


all: $(NAME)

$(NAME): $(OBJECT)
	$(AR) $(NAME) $(OBJECT)
	@echo "----------------- $(NAME) created"

%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECT)
	@echo "----------------- OBJECT deleted"

fclean: clean
	$(RM) $(NAME)
	@echo "----------------- $(NAME) deleted"

re: fclean all

.PHONY: all clean fclean re