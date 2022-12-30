/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:20:04 by mradwan           #+#    #+#             */
/*   Updated: 2022/12/30 15:20:00 by mradwan          ###   ########.fr       */
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

// void	push(t_list **dst, t_list **src)
// {
// 	if(*src == NULL)
// 		return;
// 	t_list *tmp = ft_lstnew((*src)->content);
// 	// tmp = *dst;
// 	*dst = (*dst)->next;
// 	tmp->next = *src;
// 	*dst = tmp;
// 	free(tmp);
// }

void	ps_pb(t_ps *list)
{
	t_list *l;
	l = ft_lstnew(list->stack_a->content);
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
	// l->content = list->stack_b->content;
	ft_lstadd_front(&list->stack_a, l);
	t_list *tmp = list->stack_b;
	list->stack_b = tmp->next;
	free(tmp);
}

// void	ps_pa(t_ps *list)
// {
// 	t_list *l;
// 	l = ft_lstnew(list->stack_b->content);
// 	// l->content = list->stack_b->content;
// 	ft_lstadd_front(&list->stack_a, l);
// 	t_list *tmp = list->stack_b;
// 	if(tmp->next)
// 		list->stack_b = tmp->next;
// 	ft_printf("pa\n");
// 	// free(tmp);
// }

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

// 1 2 3 4
// 2 3 
