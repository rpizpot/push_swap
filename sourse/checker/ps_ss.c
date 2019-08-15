/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 15:14:03 by rpizpot           #+#    #+#             */
/*   Updated: 2019/07/31 15:14:03 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ps_sa(t_push_swap *push_swap)
{
	int swap;

	swap = push_swap->steck_a[0];
	push_swap->steck_a[0] = push_swap->steck_a[1];
	push_swap->steck_a[1] = swap;
}

void	ps_sb(t_push_swap *push_swap)
{
	int swap;

	swap = push_swap->steck_b[0];
	push_swap->steck_b[0] = push_swap->steck_b[1];
	push_swap->steck_b[1] = swap;
}

void	ps_ss(t_push_swap *push_swap, char c)
{
	if (c == 'a' && push_swap->size_a > 1)
	{
		ps_sa(push_swap);
		push_swap->operation_amount++;
	}
	else if (c == 'b' && push_swap->size_b > 1)
	{
		ps_sb(push_swap);
		push_swap->operation_amount++;
	}
	else if (c == 'r' && push_swap->size_b > 1 && push_swap->size_a > 1)
	{
		ps_sa(push_swap);
		ps_sb(push_swap);
		push_swap->operation_amount++;
	}
}
