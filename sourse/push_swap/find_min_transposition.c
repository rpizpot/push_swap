/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_transposition.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:27:02 by rpizpot           #+#    #+#             */
/*   Updated: 2019/08/07 16:27:02 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	number_of_permutations(t_push_swap *push_swap, int i, int j)
{
	if (i < (push_swap->size_b / 2) && (j + 1) < (push_swap->size_a / 2))
		if (j + 1 >= i)
			push_swap->num_of_perm += j + 1;
		else
			push_swap->num_of_perm += i;
	else if (i >= (push_swap->size_b / 2) && (j + 1) >= (push_swap->size_a / 2))
		if ((push_swap->size_a - j - 1) >= (push_swap->size_b - i))
			push_swap->num_of_perm +=
					push_swap->size_a - j - 1;
		else
			push_swap->num_of_perm +=
					push_swap->size_b - i;
	else
	{
		if (push_swap->size_b / 2 > i)
			push_swap->num_of_perm += i;
		else
			push_swap->num_of_perm +=
					push_swap->size_b - i;
		if (push_swap->size_a / 2 > (j + 1))
			push_swap->num_of_perm += j + 1;
		else
			push_swap->num_of_perm +=
					push_swap->size_a - j - 1;
	}
}

void	for_norm_min_transposition(t_push_swap *push_swap, int i, int j)
{
	if (push_swap->num_of_perm < push_swap->min_num_of_perm)
	{
		push_swap->min_num_of_perm = push_swap->num_of_perm;
		push_swap->index_min_num_of_perm_a = j + 1;
		push_swap->index_min_num_of_perm_b = i;
	}
	push_swap->num_of_perm = 0;
}

void	min_transposition(t_push_swap *push_swap, int i, int j)
{
	i = -1;
	while (++i < push_swap->size_b)
	{
		j = 0;
		while (j + 1 < push_swap->size_a)
		{
			if (push_swap->size_a > 2)
				if (push_swap->steck_b[i]
						> push_swap->steck_a[push_swap->size_a - 1]
						&& push_swap->steck_b[i] < push_swap->steck_a[0])
				{
					push_swap->num_of_perm += i;
					j = -1;
					break ;
				}
			if (push_swap->steck_b[i] > push_swap->steck_a[j]
					&& push_swap->steck_b[i] < push_swap->steck_a[j + 1])
			{
				number_of_permutations(push_swap, i, j);
				break ;
			}
			j++;
		}
		for_norm_min_transposition(push_swap, i, j);
	}
}
