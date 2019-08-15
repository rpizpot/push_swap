/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:59:44 by rpizpot           #+#    #+#             */
/*   Updated: 2019/08/14 15:03:46 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_CHECKER_H
# define CHECKER_CHECKER_H
# define MAX_INT "2147483647"
# define MIN_INT "2147483648"

# include "../libft/libft.h"

typedef	struct	s_push_swap
{
	long int	size_a;
	long int	size_b;
	int			*steck_a;
	int			*steck_b;
	int			operation_amount;
	int			sort;
	int			flag;
}				t_push_swap;

void			ps_ss(t_push_swap *push_swap, char c);
void			ps_rr(t_push_swap *push_swap, char c);
void			ps_rrr(t_push_swap *push_swap, char c);
void			ps_pb(t_push_swap *push_swap);
void			ps_pa(t_push_swap *push_swap);
int				ps_atoi(const char *str, int *index);
int				inicialization_checker(t_push_swap *push_swap, int i, int ac,
		char **av);
int				check_max_min_int(char *str, int *index);
int				is_sort(t_push_swap *push_swap);
int				check_repetitions(t_push_swap *push_swap, int i, int j);
void			vizualozation(t_push_swap *push_swap, char **av, char *comand);
int				out_erorr(t_push_swap *push_swap);
void			del_srt(t_push_swap *push_swap);
int				norm_com_sort(t_push_swap *push_swap, char *comand, char **av);
int				print_ko(t_push_swap *push_swap, char **av);

#endif
