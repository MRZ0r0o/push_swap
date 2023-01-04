/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:41:11 by mradwan           #+#    #+#             */
/*   Updated: 2023/01/04 21:35:35 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_ps *s)
{
	if (s->stack_a->id == 0 && s->stack_a->next->id == 2)
	{
		ps_pb(s);
		sa(s);
		ps_pa(s);
	}
	else if(s->stack_a->id == 2 && s->stack_a->next->id == 1)
	{
		rra(s);
		rra(s);
		sa(s);
	}
	else if(s->stack_a->id == 2 && s->stack_a->next->id == 0)
		ra(s);
}

int finder(t_list *stack)
{
	t_list *tmp;
	tmp = stack;
	while (tmp)
	{
		if(tmp->id == 0)
		{
			// ft_printf("%d\n", tmp->index);
			return(tmp->index);
		}
		tmp = tmp->next;
	}
	return(0);
}

void	sorting_few(t_ps *s)
{
	if (s->stack_a->id == 0)
	{
		ps_pb(s);
		// push(&s->stack_b, &s->stack_a);
		ft_printf("pb\n");
		sort_the_nums_to_small(&s->stack_a);
	}
	else
		rra(s);
}

void	sorting2(t_ps *s)
{
	int i;
	
	while(ps_sorted_check(s->stack_a))
	{
		i = ft_lstsize(s->stack_a);
		
		
		while (i)
		{
			if(s->stack_a->id % 2 == 1)
			{	
				s->stack_a->id /= 2;
				ra(s);
			}
			else if(s->stack_a->id % 2 == 0)
			{	
				s->stack_a->id /= 2;
				ps_pb(s);
				ft_printf("pb\n");
			}
			i--;
		}
		if(s->stack_b)
		{
			while (s->stack_b)
			{
				ps_pa(s);
				ft_printf("pa\n");
			}
		}
	}
}

// rra
// rra
// rra
// rra
// pb
// pb
// pb
// pb
// pb
// pa
// pa
// pa
// pa
// pa
// pa