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

#include "push_swap.h"

char	*ps_ss(t_push_swap *push_swap, char c)
{
	int swap;

	if (c == 'a')
	{
		swap = push_swap->steck_a[0];
		push_swap->steck_a[0] = push_swap->steck_a[1];
		push_swap->steck_a[1] = swap;
		push_swap->operation_amount++;
		return ("sa\n");
	}
	else if (c == 'b')
	{
		swap = push_swap->steck_b[0];
		push_swap->steck_b[0] = push_swap->steck_b[1];
		push_swap->steck_b[1] = swap;
		push_swap->operation_amount++;
		return ("sb\n");
	}
	return ("");
}
