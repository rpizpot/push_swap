/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 17:07:13 by rpizpot           #+#    #+#             */
/*   Updated: 2019/08/06 17:07:13 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_2(t_push_swap *push_swap)
{
	if (push_swap->steck_a[0] > push_swap->steck_a[1])
		ft_putstr(ps_ss(push_swap, 'a'));
}
