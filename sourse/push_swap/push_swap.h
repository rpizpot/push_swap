/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 16:45:59 by rpizpot           #+#    #+#             */
/*   Updated: 2019/07/30 16:45:59 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_PUSH_SWAP_H
# define PUSH_SWAP_PUSH_SWAP_H

# include "../libft/libft.h"
# define MAX_INT "2147483647"
# define MIN_INT "2147483648"

typedef	struct	s_push_swap
{
	long int	size_a;
	long int	size_b;
	int			*steck_a;
	int			*steck_b;
	int			operation_amount;
	int			min;
	int			min_pos;
	int			max;
	int			median;
	int			num_of_perm;
	int			min_num_of_perm;
	int			index_min_num_of_perm_a;
	int			index_min_num_of_perm_b;
	int			num_a;
	int			num_b;
	int			sort;
}				t_push_swap;

char			*ps_ss(t_push_swap *push_swap, char c);
char			*ps_rr(t_push_swap *push_swap, char c);
char			*ps_rrr(t_push_swap *push_swap, char c);
void			push_swap_3(t_push_swap *push_swap);
char			*ps_pb(t_push_swap *push_swap);
char			*ps_pa(t_push_swap *push_swap);
void			min_and_max(t_push_swap *push_swap);
int				ps_atoi(const char *str, int *index);
int				inicialization_ps(t_push_swap *push_swap, int i, int ac,
		char **av);
void			push_swap_2(t_push_swap *push_swap);
void			push_swap_4_and_5(t_push_swap *push_swap);
void			push_swap_more_5(t_push_swap *push_swap);
void			transposition_min(t_push_swap *push_swap);
void			min_transposition(t_push_swap *push_swap, int i, int j);
int				check_max_min_int(char *str, int *index);
int				is_sort(t_push_swap *push_swap);
int				check_repetitions(t_push_swap *push_swap, int i, int j);

#endif
