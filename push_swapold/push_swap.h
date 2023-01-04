/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:38:54 by mradwan           #+#    #+#             */
/*   Updated: 2022/12/30 15:17:08 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct s_list
{
	int				content;
	int				id;
	int				index;
	struct s_list	*next;
}	t_list;

typedef struct t_ps
{
	t_list *stack_a;
	t_list *stack_b;
}	t_ps;

int		ps_arg_check(int ac, char **av);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_atoi(const char *str);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char const *s, char c);
void	ps_swap_list(t_list *list);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
int		ps_dub_check(int ac, char **av);
void	ps_push(t_ps *list);
int		ps_sorted_check(t_list *list);
void	ps_r(t_list **ra);
void	ps_rr_list(t_list **ra);
void	rb(t_ps *list);
void	sorting(t_ps *s);
void	ra(t_ps *list);
void	ps_pa(t_ps *list);
void	sa(t_ps *list);
void	rrb(t_ps *list);
void	rra(t_ps *list);
void	sort_the_nums_to_small(t_list **list);
void	ps_pb(t_ps *list);
void	sa(t_ps *list);
void	sort_three(t_ps *s);
int		ft_lstsize(t_list *lst);
void	push(t_list **dst, t_list **src);
void	check_and_sort(t_ps *lst);

#endif