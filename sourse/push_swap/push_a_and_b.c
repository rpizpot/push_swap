/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_and_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 17:12:25 by rpizpot           #+#    #+#             */
/*   Updated: 2019/08/04 17:12:25 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ps_pb(t_push_swap *push_swap)
{
	int i;

	i = push_swap->size_b;
	push_swap->size_a--;
	while (i > 0)
	{
		push_swap->steck_b[i] = push_swap->steck_b[i - 1];
		i--;
	}
	push_swap->steck_b[0] = push_swap->steck_a[0];
	push_swap->size_b++;
	i = -1;
	while (++i < push_swap->size_a)
		push_swap->steck_a[i] = push_swap->steck_a[i + 1];
	push_swap->operation_amount++;
	return ("pb\n");
}

char	*ps_pa(t_push_swap *push_swap)
{
	int i;

	i = push_swap->size_a;
	push_swap->size_b--;
	while (i > 0)
	{
		push_swap->steck_a[i] = push_swap->steck_a[i - 1];
		i--;
	}
	push_swap->steck_a[0] = push_swap->steck_b[0];
	push_swap->size_a++;
	i = -1;
	while (++i < push_swap->size_b)
		push_swap->steck_b[i] = push_swap->steck_b[i + 1];
	push_swap->operation_amount++;
	return ("pa\n");
}
