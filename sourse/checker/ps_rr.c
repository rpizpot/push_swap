/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 15:15:36 by rpizpot           #+#    #+#             */
/*   Updated: 2019/07/31 15:15:36 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ps_ra(t_push_swap *push_swap)
{
	int swap;
	int i;

	swap = push_swap->steck_a[0];
	i = 0;
	while (i + 1 < push_swap->size_a)
	{
		push_swap->steck_a[i] = push_swap->steck_a[i + 1];
		i++;
	}
	push_swap->steck_a[push_swap->size_a - 1] = swap;
}

void	ps_rb(t_push_swap *push_swap)
{
	int swap;
	int i;

	swap = push_swap->steck_b[0];
	i = 0;
	while (i + 1 < push_swap->size_b)
	{
		push_swap->steck_b[i] = push_swap->steck_b[i + 1];
		i++;
	}
	push_swap->steck_b[push_swap->size_b - 1] = swap;
}

void	ps_rr(t_push_swap *push_swap, char c)
{
	if (c == 'a')
	{
		ps_ra(push_swap);
		push_swap->operation_amount++;
	}
	else if (c == 'b')
	{
		ps_rb(push_swap);
		push_swap->operation_amount++;
	}
	else if (c == 'r')
	{
		ps_ra(push_swap);
		ps_rb(push_swap);
		push_swap->operation_amount++;
	}
}
