# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlarson <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/12 16:48:42 by hlarson           #+#    #+#              #
#    Updated: 2019/08/12 20:12:49 by rpizpot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ../../checker

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

LDIR = ../libft/

FLAG_PATH_OBJ = -o $@

LIBFT = make -C $(LDIR)

PATH_S = ./obj/

OBJECT = check_max_min_int.o check_repetitions.o del_and_pr_error.o \
inicialization_checker.o is_sort.o main.o ps_atoi.o ps_rr.o ps_rrr.o \
ps_ss.o push_a_and_b.o vizualization.o print_ko.o

INCLUDES = checker.h

PATH_SRC = $(patsubst %.o, $(PATH_S)%.o, $(OBJECT))

all:LIB $(NAME)

LIB:
	$(LIBFT)

$(NAME): $(PATH_SRC)
	$(CC) $(PATH_SRC) -o $(NAME) -I $(INCLUDES) -L $(LDIR)sourse -lft

$(PATH_S)check_max_min_int.o: check_max_min_int.c
	$(CC) $(CFLAGS) check_max_min_int.c $(FLAG_PATH_OBJ)
$(PATH_S)check_repetitions.o: check_repetitions.c
	$(CC) $(CFLAGS) check_repetitions.c $(FLAG_PATH_OBJ)
$(PATH_S)del_and_pr_error.o: del_and_pr_error.c
	$(CC) $(CFLAGS) del_and_pr_error.c $(FLAG_PATH_OBJ)
$(PATH_S)inicialization_checker.o: inicialization_checker.c
	$(CC) $(CFLAGS) inicialization_checker.c $(FLAG_PATH_OBJ)
$(PATH_S)is_sort.o: is_sort.c
	$(CC) $(CFLAGS) is_sort.c $(FLAG_PATH_OBJ)
$(PATH_S)main.o: main.c
	$(CC) $(CFLAGS) main.c $(FLAG_PATH_OBJ)
$(PATH_S)ps_atoi.o: ps_atoi.c
	$(CC) $(CFLAGS) ps_atoi.c $(FLAG_PATH_OBJ)
$(PATH_S)ps_rr.o: ps_rr.c
	$(CC) $(CFLAGS) ps_rr.c $(FLAG_PATH_OBJ)
$(PATH_S)ps_rrr.o: ps_rrr.c
	$(CC) $(CFLAGS) ps_rrr.c $(FLAG_PATH_OBJ)
$(PATH_S)ps_ss.o: ps_ss.c
	$(CC) $(CFLAGS) ps_ss.c $(FLAG_PATH_OBJ)
$(PATH_S)push_a_and_b.o: push_a_and_b.c
	$(CC) $(CFLAGS) push_a_and_b.c $(FLAG_PATH_OBJ)
$(PATH_S)vizualization.o: vizualization.c
	$(CC) $(CFLAGS) vizualization.c $(FLAG_PATH_OBJ)
$(PATH_S)print_ko.o: print_ko.c
	$(CC) $(CFLAGS) print_ko.c $(FLAG_PATH_OBJ)
clean:
	make fclean -C $(LDIR)
	rm -f $(PATH_SRC)
fclean: clean
	rm -f $(NAME)
re: fclean
	make all
