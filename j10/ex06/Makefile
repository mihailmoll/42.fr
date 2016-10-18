# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmihail <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/19 19:39:52 by mmihail           #+#    #+#              #
#    Updated: 2016/07/19 19:39:55 by mmihail          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
FNC = ./functions/*.c
HDR = functions.h
MAIN = main.c
FLAGS = -Wall -Wextra -Werror

all:
	@gcc $(FLAGS) -o $(NAME) -I $(HDR) $(MAIN)  $(FNC)

clean:
	@rm -Rf $(NAME)
	@rm -Rf *~
