/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:20:04 by mradwan           #+#    #+#             */
/*   Updated: 2023/01/04 21:20:59 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ps_swap_list(t_list *list)
{
	int tmp;
	tmp = list->content;
	list->content = list->next->content;
	list->next->content = tmp;
}

void	ps_pb(t_ps *list)
{
	t_list *l;
	l = ft_lstnew(list->stack_a->content);
	l->id = list->stack_a->id;
	// l->content = list->stack_a->content;
	ft_lstadd_front(&list->stack_b, l);
	t_list *tmp = list->stack_a;
	list->stack_a = tmp->next;
	free(tmp);
}

void	ps_pa(t_ps *list)
{
	t_list *l;
	l = ft_lstnew(list->stack_b->content);
	l->id = list->stack_b->id;
	// l->content = list->stack_b->content;
	ft_lstadd_front(&list->stack_a, l);
	t_list *tmp = list->stack_b;
	list->stack_b = tmp->next;
	free(tmp);
}

void	ps_r(t_list **ra)
{
	t_list *first = *ra;
	t_list *last = *ra;
	while (last -> next)
		last = last->next;
	*ra = first->next;
	first->next = NULL;
	last->next = first;
}

void	ps_rr_list(t_list **ra)
{
	t_list *b;
	t_list *last = *ra;
	while(last->next)
	{
		b = last;
		last = last->next;
	}
	b -> next = NULL;
	last->next = *ra;
	*ra = last;
}
