/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inicialization_push_swap.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 15:06:25 by rpizpot           #+#    #+#             */
/*   Updated: 2019/08/13 15:06:25 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_num(char *str)
{
	int index;

	index = 0;
	while (str[index] == ' ' || str[index] == '\n' || str[index] == '\t'
			|| str[index] == '\v' || str[index] == '\f' || str[index] == '\r')
		index++;
	if (!str[index])
		return (2);
	while (str[index])
		if (str[index] == ' ')
			index++;
		else if (str[index] == '-')
		{
			index++;
			if (!ft_isdigit(str[index]))
				return (2);
		}
		else if (!ft_isdigit(str[index]))
			return (2);
		else
			index++;
	return (0);
}

void	take_num(t_push_swap *push_swap, char **av, int i, int j)
{
	int index;

	while (push_swap->size_a - i)
	{
		index = 0;
		push_swap->steck_a[i++] = ps_atoi(av[++j], &index);
		while (av[j][index] == ' ')
		{
			index++;
			if (av[j][index] != ' ' && av[j][index])
				push_swap->steck_a[i++] = ps_atoi(av[j], &index);
		}
	}
}

void	inicial_a_and_b(t_push_swap *push_swap, int i, int j, char **av)
{
	take_num(push_swap, av, 0, 0);
	j = 0;
	while (j < push_swap->size_b)
		push_swap->steck_b[j++] = 0;
	j = 0;
	while (j < push_swap->size_a)
	{
		i = -1;
		while (++i < push_swap->size_a)
			if (push_swap->steck_a[j] > push_swap->steck_a[i])
				push_swap->steck_b[j] += 1;
		j++;
	}
	j = -1;
	while (++j < push_swap->size_a)
		push_swap->steck_a[j] = push_swap->steck_b[j];
	push_swap->size_b = 0;
}

int		is_num_check_max_min_int(char **av, int ac, int i)
{
	int index;

	while (++i < ac)
		if (is_num(av[i]))
			return (2);
	i = 0;
	while (++i < ac)
	{
		index = 0;
		if (check_max_min_int(av[i], &index))
			return (2);
		while (av[i][index] == ' ')
		{
			index++;
			if (av[i][index] != ' ' && av[i][index])
				if (check_max_min_int(av[i], &index))
					return (2);
		}
	}
	return (0);
}

int		inicialization_ps(t_push_swap *push_swap, int i, int ac, char **av)
{
	push_swap->size_a = 0;
	push_swap->size_b = 0;
	push_swap->operation_amount = 0;
	push_swap->num_of_perm = 0;
	push_swap->sort = 1;
	while (++i < ac)
		push_swap->size_a += quantity_world(av[i], ' ');
	push_swap->size_b = push_swap->size_a;
	if (!(push_swap->steck_a = (int *)malloc(sizeof(int) * push_swap->size_a)))
		return (1);
	if (!(push_swap->steck_b = (int *)malloc(sizeof(int) * push_swap->size_b)))
		return (1);
	if (is_num_check_max_min_int(av, ac, 0))
		return (2);
	inicial_a_and_b(push_swap, 0, 0, av);
	return (0);
}
