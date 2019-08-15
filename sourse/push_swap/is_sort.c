/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 16:49:12 by rpizpot           #+#    #+#             */
/*   Updated: 2019/08/09 16:49:12 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sort(t_push_swap *push_swap)
{
	int i;

	i = 0;
	while (push_swap->size_a - (i + 1) > 0)
	{
		if (push_swap->steck_a[i] > push_swap->steck_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}
