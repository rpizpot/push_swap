/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 15:12:24 by rpizpot           #+#    #+#             */
/*   Updated: 2019/07/31 15:12:24 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min_and_max(t_push_swap *push_swap)
{
	int i;

	i = 0;
	push_swap->min = push_swap->steck_a[0];
	push_swap->max = push_swap->steck_a[0];
	push_swap->min_pos = 0;
	while (i < push_swap->size_a)
	{
		if (push_swap->min >= push_swap->steck_a[i])
		{
			push_swap->min = push_swap->steck_a[i];
			push_swap->min_pos = i;
		}
		i++;
	}
	i = 0;
	while (i < push_swap->size_a)
	{
		if (push_swap->max <= push_swap->steck_a[i])
			push_swap->max = push_swap->steck_a[i];
		i++;
	}
}

void	push_swap_3(t_push_swap *push_swap)
{
	min_and_max(push_swap);
	if (push_swap->steck_a[0] == push_swap->max)
	{
		if (push_swap->steck_a[2] == push_swap->min)
		{
			ft_putstr(ps_rr(push_swap, 'a'));
			ft_putstr(ps_ss(push_swap, 'a'));
		}
		else if (push_swap->steck_a[1] == push_swap->min)
			ft_putstr(ps_rr(push_swap, 'a'));
	}
	else if (push_swap->steck_a[1] == push_swap->max)
	{
		if (push_swap->steck_a[0] == push_swap->min)
		{
			ft_putstr(ps_rrr(push_swap, 'a'));
			ft_putstr(ps_ss(push_swap, 'a'));
		}
		else if (push_swap->steck_a[push_swap->size_a - 1] == push_swap->min)
			ft_putstr(ps_rrr(push_swap, 'a'));
	}
	else if (push_swap->steck_a[push_swap->size_a - 1] == push_swap->max)
		if (push_swap->steck_a[1] == push_swap->min)
			ft_putstr(ps_ss(push_swap, 'a'));
}
