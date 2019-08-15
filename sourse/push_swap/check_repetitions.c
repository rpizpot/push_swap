/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_repetitions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 16:57:17 by rpizpot           #+#    #+#             */
/*   Updated: 2019/08/09 16:57:17 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_repetitions(t_push_swap *push_swap, int i, int j)
{
	while (i < push_swap->size_a)
	{
		j = 0;
		while (j < push_swap->size_a)
		{
			if ((push_swap->steck_a[i] == push_swap->steck_a[j]) && (i != j))
				return (2);
			j++;
		}
		i++;
	}
	return (0);
}
