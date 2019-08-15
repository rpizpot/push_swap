/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transposition_min.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:13:13 by rpizpot           #+#    #+#             */
/*   Updated: 2019/08/07 16:13:13 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	transposition_min_over_the_med(t_push_swap *push_swap)
{
	if (push_swap->index_min_num_of_perm_a > push_swap->index_min_num_of_perm_b)
	{
		while (push_swap->steck_b[0] != push_swap->num_b)
			ft_putstr(ps_rr(push_swap, 'r'));
		while (push_swap->steck_a[0] != push_swap->num_a)
			ft_putstr(ps_rr(push_swap, 'a'));
		ft_putstr(ps_pa(push_swap));
	}
	else
	{
		while (push_swap->steck_a[0] != push_swap->num_a)
			ft_putstr(ps_rr(push_swap, 'r'));
		while (push_swap->steck_b[0] != push_swap->num_b)
			ft_putstr(ps_rr(push_swap, 'b'));
		ft_putstr(ps_pa(push_swap));
	}
}

void	transposition_min_below_med(t_push_swap *push_swap)
{
	if (push_swap->size_a - push_swap->index_min_num_of_perm_a
	> push_swap->size_b - push_swap->index_min_num_of_perm_b)
	{
		while (push_swap->steck_b[0] != push_swap->num_b)
			ft_putstr(ps_rrr(push_swap, 'r'));
		while (push_swap->steck_a[0] != push_swap->num_a)
			ft_putstr(ps_rrr(push_swap, 'a'));
		ft_putstr(ps_pa(push_swap));
	}
	else
	{
		while (push_swap->steck_a[0] != push_swap->num_a)
			ft_putstr(ps_rrr(push_swap, 'r'));
		while (push_swap->steck_b[0] != push_swap->num_b)
			ft_putstr(ps_rrr(push_swap, 'b'));
		ft_putstr(ps_pa(push_swap));
	}
}

void	transposition_min(t_push_swap *push_swap)
{
	if (push_swap->index_min_num_of_perm_b < (push_swap->size_b / 2)
	&& push_swap->index_min_num_of_perm_a < (push_swap->size_a / 2))
		transposition_min_over_the_med(push_swap);
	else if (push_swap->index_min_num_of_perm_b >= (push_swap->size_b / 2)
	&& push_swap->index_min_num_of_perm_a >= (push_swap->size_a / 2))
		transposition_min_below_med(push_swap);
	else
	{
		if (push_swap->size_b / 2 > push_swap->index_min_num_of_perm_b)
			while (push_swap->steck_b[0] != push_swap->num_b)
				ft_putstr(ps_rr(push_swap, 'b'));
		else
			while (push_swap->steck_b[0] != push_swap->num_b)
				ft_putstr(ps_rrr(push_swap, 'b'));
		if (push_swap->size_a / 2 > push_swap->index_min_num_of_perm_a)
			while (push_swap->steck_a[0] != push_swap->num_a)
				ft_putstr(ps_rr(push_swap, 'a'));
		else
			while (push_swap->steck_a[0] != push_swap->num_a)
				ft_putstr(ps_rrr(push_swap, 'a'));
		ft_putstr(ps_pa(push_swap));
	}
}
