/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 20:23:51 by rpizpot           #+#    #+#             */
/*   Updated: 2019/08/11 20:23:51 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	com_sort_norm_2(t_push_swap *push_swap, char *comand)
{
	ft_strdel(&comand);
	return (out_erorr(push_swap));
}

int	com_sort(t_push_swap *push_swap, char *comand, char **av)
{
	if (ft_strcmp("sa", comand) == 0)
		ps_ss(push_swap, 'a');
	else if (ft_strcmp("sb", comand) == 0)
		ps_ss(push_swap, 'b');
	else if (ft_strcmp("ss", comand) == 0)
		ps_ss(push_swap, 'r');
	else if (ft_strcmp("pa", comand) == 0)
		ps_pa(push_swap);
	else if (ft_strcmp("pb", comand) == 0)
		ps_pb(push_swap);
	else if (ft_strcmp("ra", comand) == 0)
		ps_rr(push_swap, 'a');
	else if (ft_strcmp("rb", comand) == 0)
		ps_rr(push_swap, 'b');
	else if (ft_strcmp("rr", comand) == 0)
		ps_rr(push_swap, 'r');
	else if (ft_strcmp("rra", comand) == 0)
		ps_rrr(push_swap, 'a');
	else if (ft_strcmp("rrb", comand) == 0)
		ps_rrr(push_swap, 'b');
	else if (ft_strcmp("rrr", comand) == 0)
		ps_rrr(push_swap, 'r');
	else
		return (com_sort_norm_2(push_swap, comand));
	return (norm_com_sort(push_swap, comand, av));
}

int	print_ok(t_push_swap *push_swap, char **av)
{
	if (!ft_strcmp(av[1], "-v") || !ft_strcmp(av[1], "-vc"))
	{
		vizualozation(push_swap, av, "OK");
		ft_printf("{green}OK{eoc}\n");
	}
	else if (!ft_strcmp(av[1], "-c"))
	{
		ft_printf("Number of operations: %d\n", push_swap->operation_amount);
		ft_printf("{green}OK{eoc}\n");
	}
	else
		ft_printf("{green}OK{eoc}\n");
	del_srt(push_swap);
	return (0);
}

int	read_com(t_push_swap *push_swap, char **av)
{
	char *comand;

	while (get_next_line(0, &comand))
		if (!ft_strcmp("Error\n", comand))
			return (com_sort_norm_2(push_swap, comand));
		else if (com_sort(push_swap, comand, av) == 1)
			return (0);
	if (is_sort(push_swap) && push_swap->size_b == 0)
		return (print_ok(push_swap, av));
	else
		return (print_ko(push_swap, av));
}

int	main(int ac, char **av)
{
	t_push_swap	*push_swap;
	int			check_erorr;

	if (ac == 1)
		return (0);
	if (!(push_swap = (t_push_swap *)malloc(sizeof(t_push_swap))))
		return (1);
	if ((!(ft_strcmp(av[1], "-v")) || !(ft_strcmp(av[1], "-c"))
	|| !(ft_strcmp(av[1], "-vc"))) && (ac > 2))
		check_erorr = inicialization_checker(push_swap, 1, ac, av);
	else
		check_erorr = inicialization_checker(push_swap, 0, ac, av);
	if (check_erorr == 2)
		return (out_erorr(push_swap));
	else if (check_erorr == 1)
		return (1);
	check_erorr = check_repetitions(push_swap, 0, 0);
	if (check_erorr == 2)
		return (out_erorr(push_swap));
	return (read_com(push_swap, av));
}
