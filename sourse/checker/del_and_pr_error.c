/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_and_pr_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 20:24:58 by rpizpot           #+#    #+#             */
/*   Updated: 2019/08/14 15:05:52 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	del_srt(t_push_swap *push_swap)
{
	free(push_swap->steck_a);
	free(push_swap->steck_b);
	free(push_swap);
}

int		out_erorr(t_push_swap *push_swap)
{
	ft_printf("{red}Error{eoc}\n");
	del_srt(push_swap);
	return (1);
}

int		norm_com_sort(t_push_swap *push_swap, char *comand, char **av)
{
	vizualozation(push_swap, av, comand);
	ft_strdel(&comand);
	return (2);
}
