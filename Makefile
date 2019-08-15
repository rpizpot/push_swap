# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlarson <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/12 16:48:42 by hlarson           #+#    #+#              #
#    Updated: 2019/08/13 15:49:35 by rpizpot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECKER_DIR = ./sourse/checker/

PUSH_SWAP_DIR = ./sourse/push_swap/

CHECKER_MAKE = make -C $(CHECKER_DIR)

PUSH_SWAP_MAKE = make -C $(PUSH_SWAP_DIR)

all: P_AND_S
P_AND_S:
	$(CHECKER_MAKE)
	$(PUSH_SWAP_MAKE)
clean:
	make clean -C $(CHECKER_DIR)
	make clean -C $(PUSH_SWAP_DIR)
fclean: clean
	make fclean -C $(CHECKER_DIR)
	make fclean -C $(PUSH_SWAP_DIR)
re: fclean
	make all
