/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vizualization.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 17:48:05 by rpizpot           #+#    #+#             */
/*   Updated: 2019/08/11 17:48:05 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	pr_frame(int i)
{
	i = -1;
	while (++i <= 41)
		ft_printf("%c", '-');
	ft_putchar('\n');
}

void	viz_out(char *comand)
{
	if (ft_strcmp(comand, "OK") == 0)
		ft_printf("{green}|%5s|{eoc}%9s%9c%9s%8c\n",
				comand, "(a)", '|', "(b)", '|');
	else if (ft_strcmp(comand, "KO") == 0)
		ft_printf("{red}|%5s|{eoc}%9s%9c%9s%8c\n",
				comand, "(a)", '|', "(b)", '|');
	else
		ft_printf("{green}|%5s|{eoc}%9s%9c%9s%8c\n",
				comand, "(a)", '|', "(b)", '|');
}

void	viz_a_more_b(t_push_swap *push_swap, int i, char *comand)
{
	while (i < push_swap->size_b)
	{
		ft_printf("|%4d)| %15d |%15d |\n", (i + 1), push_swap->steck_a[i],
				push_swap->steck_b[i]);
		i++;
	}
	while (i < push_swap->size_a)
	{
		ft_printf("|%4d)| %15d |%17c\n", (i + 1), push_swap->steck_a[i], '|');
		i++;
	}
	pr_frame(-1);
	viz_out(comand);
}

void	viz_b_more_a(t_push_swap *push_swap, int i, char *comand)
{
	while (i < push_swap->size_a)
	{
		ft_printf("|%4d)| %15d |%15d |\n", (i + 1), push_swap->steck_a[i],
				push_swap->steck_b[i]);
		i++;
	}
	while (i < push_swap->size_b)
	{
		ft_printf("|%4d)| %17c %14d |\n", (i + 1), '|', push_swap->steck_b[i]);
		i++;
	}
	pr_frame(-1);
	viz_out(comand);
}

void	vizualozation(t_push_swap *push_swap, char **av, char *comand)
{
	if (!(ft_strcmp(av[1], "-v")) || !(ft_strcmp(av[1], "-vc")))
	{
		pr_frame(-1);
		if (push_swap->size_a > push_swap->size_b)
			viz_a_more_b(push_swap, 0, comand);
		else
			viz_b_more_a(push_swap, 0, comand);
		pr_frame(-1);
	}
	if (!(ft_strcmp(av[1], "-vc")))
		ft_printf("Number of operations: %d\n", push_swap->operation_amount);
}
