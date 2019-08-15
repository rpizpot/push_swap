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

#include "push_swap.h"

char	*ps_ra(t_push_swap *push_swap)
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
	push_swap->operation_amount++;
	return ("ra\n");
}

char	*ps_rb(t_push_swap *push_swap)
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
	push_swap->operation_amount++;
	return ("rb\n");
}

char	*ps_r(t_push_swap *push_swap)
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
	swap = push_swap->steck_b[0];
	i = 0;
	while (i + 1 < push_swap->size_b)
	{
		push_swap->steck_b[i] = push_swap->steck_b[i + 1];
		i++;
	}
	push_swap->steck_b[push_swap->size_b - 1] = swap;
	push_swap->operation_amount++;
	return ("rr\n");
}

char	*ps_rr(t_push_swap *push_swap, char c)
{
	if (c == 'a')
		return (ps_ra(push_swap));
	else if (c == 'b')
		return (ps_rb(push_swap));
	else if (c == 'r')
		return (ps_r(push_swap));
	return ("");
}
