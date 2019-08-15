/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_more_5.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 17:24:00 by rpizpot           #+#    #+#             */
/*   Updated: 2019/08/06 17:24:00 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_befor_max_or_min(t_push_swap *push_swap)
{
	push_swap->median = push_swap->size_a / 2;
	push_swap->min_num_of_perm = push_swap->size_a;
	min_and_max(push_swap);
	while (push_swap->steck_a[0] != push_swap->max
			&& push_swap->steck_a[0] != push_swap->min)
	{
		ft_putstr(ps_pb(push_swap));
		if (push_swap->steck_b[0] > push_swap->median)
			ft_putstr(ps_rr(push_swap, 'b'));
	}
}

void	push_swap_after_max(t_push_swap *push_swap)
{
	ft_putstr(ps_rr(push_swap, 'a'));
	while (push_swap->steck_a[0] != push_swap->min)
	{
		ft_putstr(ps_pb(push_swap));
		if (push_swap->steck_b[0] > push_swap->median)
			ft_putstr(ps_rr(push_swap, 'b'));
	}
	ft_putstr(ps_rr(push_swap, 'a'));
	while (push_swap->steck_a[0] != push_swap->max)
	{
		ft_putstr(ps_pb(push_swap));
		if (push_swap->steck_b[0] > push_swap->median)
			ft_putstr(ps_rr(push_swap, 'b'));
	}
	ft_putstr(ps_ss(push_swap, 'a'));
}

void	push_swap_after_min(t_push_swap *push_swap)
{
	ft_putstr(ps_rr(push_swap, 'a'));
	while (push_swap->steck_a[0] != push_swap->max)
	{
		if (push_swap->steck_a[0] > push_swap->steck_a[push_swap->size_a - 1])
			ft_putstr(ps_rr(push_swap, 'a'));
		else
		{
			ft_putstr(ps_pb(push_swap));
			if (push_swap->steck_b[0] > push_swap->median)
				ft_putstr(ps_rr(push_swap, 'b'));
		}
	}
	ft_putstr(ps_rr(push_swap, 'a'));
	while (push_swap->steck_a[0] != push_swap->min)
	{
		ft_putstr(ps_pb(push_swap));
		if (push_swap->steck_b[0] > push_swap->median)
			ft_putstr(ps_rr(push_swap, 'b'));
	}
}

void	push_swap_more_5(t_push_swap *push_swap)
{
	push_befor_max_or_min(push_swap);
	if (push_swap->steck_a[0] == push_swap->max)
		push_swap_after_max(push_swap);
	else if (push_swap->steck_a[0] == push_swap->min)
		push_swap_after_min(push_swap);
	while (push_swap->size_b)
	{
		min_transposition(push_swap, 0, 0);
		push_swap->num_a =
				push_swap->steck_a[push_swap->index_min_num_of_perm_a];
		push_swap->num_b =
				push_swap->steck_b[push_swap->index_min_num_of_perm_b];
		push_swap->min_num_of_perm = push_swap->size_a + push_swap->size_b;
		transposition_min(push_swap);
	}
	min_and_max(push_swap);
	if (push_swap->size_a / 2 > push_swap->min_pos)
		while (push_swap->steck_a[0])
			ft_putstr(ps_rr(push_swap, 'a'));
	else
		while (push_swap->steck_a[0])
			ft_putstr(ps_rrr(push_swap, 'a'));
}
