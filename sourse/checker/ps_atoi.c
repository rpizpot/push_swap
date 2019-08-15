/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 16:11:46 by rpizpot           #+#    #+#             */
/*   Updated: 2019/08/06 16:11:46 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ps_atoi(const char *str, int *index)
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
		result = result * 10 + (str[*index] - '0');
		(*index)++;
	}
	return (result * flag);
}
