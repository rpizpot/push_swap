/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_max_min_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 16:07:52 by rpizpot           #+#    #+#             */
/*   Updated: 2019/08/09 16:07:52 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	del_str_min_int(char *check_str)
{
	if (ft_strcmp(MIN_INT, check_str) >= 0)
	{
		ft_strdel(&check_str);
		return (0);
	}
	else
	{
		ft_strdel(&check_str);
		return (1);
	}
}

int	del_str_max_int(char *check_str)
{
	if (ft_strcmp(MAX_INT, check_str) >= 0)
	{
		ft_strdel(&check_str);
		return (0);
	}
	else
	{
		ft_strdel(&check_str);
		return (1);
	}
}

int	chech_max_min_int_norm(char *str, int *index, int flag, int result)
{
	char *check_str;

	check_str = ft_memalloc(11);
	if (flag == 1)
	{
		flag = -1;
		while (++flag < result)
			check_str[flag] = str[(*index) - result + flag];
		return (del_str_max_int(check_str));
	}
	else if (flag == -1)
		while (++flag < result)
			check_str[flag] = str[(*index) - result + flag];
	return (del_str_min_int(check_str));
}

int	check_max_min_int(char *str, int *index)
{
	int result;
	int flag;

	flag = 1;
	result = 0;
	while (str[*index] == ' ' || str[*index] == '\n' || str[*index] == '\t'
	|| str[*index] == '\v' || str[*index] == '\f' || str[*index] == '\r')
		(*index)++;
	if (str[*index] == '-')
		flag = -1;
	if (str[*index] == '-' || str[*index] == '+')
		(*index)++;
	while (str[*index] >= '0' && str[*index] <= '9')
	{
		result++;
		(*index)++;
	}
	if (result > 10)
		return (1);
	else if (result == 10)
		return (chech_max_min_int_norm(str, index, flag, result));
	return (0);
}
