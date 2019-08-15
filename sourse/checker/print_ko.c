/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ko.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 16:45:11 by rpizpot           #+#    #+#             */
/*   Updated: 2019/08/14 16:45:11 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	print_ko(t_push_swap *push_swap, char **av)
{
	if (ft_strcmp(av[1], "-v") == 0 || !ft_strcmp(av[1], "-vc"))
	{
		vizualozation(push_swap, av, "KO");
		ft_printf("{red}KO{eoc}\n");
	}
	else if (!ft_strcmp(av[1], "-c"))
	{
		ft_printf("Number of operations: %d\n", push_swap->operation_amount);
		ft_printf("{red}KO{eoc}\n");
	}
	else
		ft_printf("{red}KO{eoc}\n");
	del_srt(push_swap);
	return (0);
}
