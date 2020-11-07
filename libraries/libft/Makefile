# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhorker <dhorker@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/21 14:53:48 by dhorker           #+#    #+#              #
#    Updated: 2020/11/07 14:02:19 by dhorker          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS =		-Wall -Wextra -Werror
NAME =		libft.a

FT_OBJ =	ft_memset.o\
			ft_bzero.o\
			ft_memcpy.o\
			ft_memccpy.o\
			ft_memmove.o\
			ft_memchr.o\
			ft_memcmp.o\
			ft_strlen.o\
			ft_strdup.o\
			ft_strcpy.o\
			ft_strncpy.o\
			ft_strcat.o\
			ft_strncat.o\
			ft_strlcat.o\
			ft_strchr.o\
			ft_strrchr.o\
			ft_strstr.o\
			ft_strnstr.o\
			ft_strcmp.o\
			ft_strncmp.o\
			ft_atoi.o\
			ft_isalpha.o\
			ft_isdigit.o\
			ft_isalnum.o\
			ft_isascii.o\
			ft_isprint.o\
			ft_toupper.o\
			ft_tolower.o\
			ft_memalloc.o\
			ft_memdel.o\
			ft_strnew.o\
			ft_strdel.o\
			ft_strclr.o\
			ft_striter.o\
			ft_striteri.o\
			ft_strmap.o\
			ft_strmapi.o\
			ft_strequ.o\
			ft_strnequ.o\
			ft_strsub.o\
			ft_strjoin.o\
			ft_strtrim.o\
			ft_strsplit.o\
			ft_itoa.o\
			ft_putchar.o\
			ft_putstr.o\
			ft_putendl.o\
			ft_putnbr.o\
			ft_putchar_fd.o\
			ft_putstr_fd.o\
			ft_putendl_fd.o\
			ft_putnbr_fd.o\
			ft_lstnew.o\
			ft_lstdelone.o\
			ft_lstdel.o\
			ft_lstadd.o\
			ft_lstiter.o\
			ft_lstmap.o\
			ft_strctrim.o\
			ft_sepchar.o\
			ft_putbyte1.o\
			ft_putbyte2.o\
			ft_putbyte4.o\
			ft_lstdelcut.o\
			ft_delmass.o\
			ft_swap.o\
			ft_numlen.o\
			ft_str_char_count.o\
			ft_min.o\
			ft_max.o\
			ft_abs.o\
			ft_check_atoi_int.o\
			get_next_line.o\
			ft_mem_free_two.o\
			ft_out_message.o\
			ft_mem_free_args.o

FT_PRINTF =	$(addprefix ft_printf/support/, specificator.o support_1.o support_2.o ft_atolu.o \
			ft_itoa_base.o ft_output.o ft_utoa.o out_type_diu.o \
			out_type_pxo.o out_type_u.o out_type_big_x.o virtual_processing.o) \
			$(addprefix ft_printf/type/, type_di.o type_x.o type_u.o type_x_big.o\
			type_o.o type_p.o type_c.o type_s.o\
			type_f_1.o type_f_2.o\
			type_lf_1.o type_lf_2.o type_lf_3.o type_lf_4.o\
			type_llf_1.o type_llf_2.o type_llf_3.o type_llf_4.o)

all: $(NAME)

$(NAME): $(FT_OBJ)
	make -C ft_printf/
	ar rc $(NAME) $(FT_OBJ) $(FT_PRINTF) ft_printf/ft_printf.o
	ranlib $(NAME)

clean:
	make clean -C ft_printf/
	/bin/rm -f $(FT_OBJ)

fclean: clean
	make fclean -C ft_printf/
	/bin/rm -f libft $(NAME)

re: fclean all

%.o : %.c
	gcc $(FLAGS) -I . -I ft_printf -c $^
