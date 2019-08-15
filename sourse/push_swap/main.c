/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 16:40:38 by rpizpot           #+#    #+#             */
/*   Updated: 2019/07/30 16:40:38 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	del_srt(t_push_swap *push_swap)
{
	free(push_swap->steck_a);
	free(push_swap->steck_b);
	free(push_swap);
}

int		out_erorr(t_push_swap *push_swap)
{
	ft_putstr("Error\n");
	del_srt(push_swap);
	return (1);
}

void	sort(t_push_swap *push_swap)
{
	if (push_swap->size_a == 2)
		push_swap_2(push_swap);
	else if (push_swap->size_a == 3)
		push_swap_3(push_swap);
	else if (push_swap->size_a <= 5)
		push_swap_4_and_5(push_swap);
	else if (push_swap->size_a > 5)
		push_swap_more_5(push_swap);
}

int		check_is_sort(t_push_swap *push_swap)
{
	if (is_sort(push_swap))
	{
		del_srt(push_swap);
		return (0);
	}
	if (push_swap->size_a == 1)
	{
		del_srt(push_swap);
		return (0);
	}
	else
		sort(push_swap);
	return (1);
}

int		main(int ac, char **av)
{
	int			check_erorr;
	t_push_swap	*push_swap;

	if (ac == 1)
		return (0);
	if (!(push_swap = (t_push_swap *)malloc(sizeof(t_push_swap))))
		return (1);
	check_erorr = inicialization_ps(push_swap, 0, ac, av);
	if (check_erorr == 2)
		return (out_erorr(push_swap));
	else if (check_erorr == 1)
		return (1);
	check_erorr = check_repetitions(push_swap, 0, 0);
	if (check_erorr == 2)
		return (out_erorr(push_swap));
	if (!check_is_sort(push_swap))
		return (0);
	del_srt(push_swap);
	return (0);
}
