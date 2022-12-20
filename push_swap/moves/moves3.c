/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:08:15 by mradwan           #+#    #+#             */
/*   Updated: 2022/12/19 19:24:32 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_ps *list)
{
	ps_swap_list(list->stack_b);
	ft_printf("sb\n");
}

void	ss(t_ps *list)
{
	ps_swap_list(list->stack_b);
	ps_swap_list(list->stack_a);
	ft_printf("ss\n");
}

void	rr(t_ps *list)
{
	ps_r(&list->stack_a);
	ps_r(&list->stack_b);
	ft_printf("rr\n");
}

void	rrr(t_ps *list)
{
	ps_rr_list(&list->stack_b);
	ps_rr_list(&list->stack_a);
	ft_printf("rrb\n");
}