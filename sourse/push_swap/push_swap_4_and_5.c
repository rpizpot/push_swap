/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_4_and_5.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 17:13:28 by rpizpot           #+#    #+#             */
/*   Updated: 2019/08/06 17:13:28 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_min_on_b(t_push_swap *push_swap)
{
	min_and_max(push_swap);
	if (push_swap->min_pos == 0)
		ft_putstr(ps_pb(push_swap));
	else if (push_swap->min_pos == 1)
	{
		ft_putstr(ps_ss(push_swap, 'a'));
		ft_putstr(ps_pb(push_swap));
	}
	else if (push_swap->min_pos == push_swap->size_a)
	{
		ft_putstr(ps_rrr(push_swap, 'a'));
		ft_putstr(ps_pb(push_swap));
	}
	else if ((push_swap->size_a / 2) >= push_swap->min_pos)
	{
		while (push_swap->steck_a[0] != push_swap->min)
			ft_putstr(ps_rr(push_swap, 'a'));
		ft_putstr(ps_pb(push_swap));
	}
	else if ((push_swap->size_a / 2) < push_swap->min_pos)
	{
		while (push_swap->steck_a[0] != push_swap->min)
			ft_putstr(ps_rrr(push_swap, 'a'));
		ft_putstr(ps_pb(push_swap));
	}
}

void	push_swap_4_and_5(t_push_swap *push_swap)
{
	while (push_swap->size_a != 3)
		push_min_on_b(push_swap);
	push_swap_3(push_swap);
	while (push_swap->size_b > 0)
		ft_putstr(ps_pa(push_swap));
}
