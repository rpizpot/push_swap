/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 15:17:19 by rpizpot           #+#    #+#             */
/*   Updated: 2019/07/31 15:17:19 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ps_rrb(t_push_swap *push_swap)
{
	int swap;
	int i;

	swap = push_swap->steck_b[push_swap->size_b - 1];
	i = 1;
	while (push_swap->size_b - i > 0)
	{
		push_swap->steck_b[push_swap->size_b - i] =
				push_swap->steck_b[push_swap->size_b - i - 1];
		i++;
	}
	push_swap->steck_b[0] = swap;
}

void	ps_rra(t_push_swap *push_swap)
{
	int swap;
	int i;

	swap = push_swap->steck_a[push_swap->size_a - 1];
	i = 1;
	while (push_swap->size_a - i > 0)
	{
		push_swap->steck_a[push_swap->size_a - i] =
				push_swap->steck_a[push_swap->size_a - i - 1];
		i++;
	}
	push_swap->steck_a[0] = swap;
}

void	ps_rrr(t_push_swap *push_swap, char c)
{
	if (c == 'a' && push_swap->size_a > 1)
	{
		ps_rra(push_swap);
		push_swap->operation_amount++;
	}
	else if (c == 'b' && push_swap->size_b > 1)
	{
		ps_rrb(push_swap);
		push_swap->operation_amount++;
	}
	else if (c == 'r' && push_swap->size_a > 1 && push_swap->size_b > 1)
	{
		ps_rra(push_swap);
		ps_rrb(push_swap);
		push_swap->operation_amount++;
	}
}
