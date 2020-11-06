# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lyahasik <lyahasik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/05 23:13:16 by lyahasik          #+#    #+#              #
#    Updated: 2020/11/06 22:11:08 by lyahasik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ALG = lem-in

WW = -Wall -Wextra -Werror

DIR_LIBRARIES = libraries

DIR_SOURCES = sources

DIR_ALG = $(DIR_SOURCES)/algorithm

DIR_LIBFT = $(DIR_LIBRARIES)/libft

LIBFT = $(DIR_LIBFT)/libft.a

SRC_ALG =	$(addprefix $(DIR_ALG)/, check.c) \
			$(DIR_SOURCES)/main.c

OBJ_ALG = $(SRC_ALG:.c=.o)

all: $(ALG)

%.o : %.c
	gcc -g $(WWW) -I . -I $(DIR_LIBFT) -I $(DIR_LIBFT)/ft_printf/ -c $^ -o $@

$(LIBFT):
	make -C $(DIR_LIBFT)

$(ALG): $(LIBFT) $(OBJ_ALG)
	gcc -g $(WWW) $(OBJ_ALG) $(LIB) -I . $(DIR_LIBFT)/libft.a -o $(ALG)

clean:
	make clean -C $(DIR_LIBFT)
	rm -rf $(DIR_ALG)/*.o

fclean: clean
	make fclean -C $(DIR_LIBFT)
	rm -rf $(ALG)

re: fclean all
