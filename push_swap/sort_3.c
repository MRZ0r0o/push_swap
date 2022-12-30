/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:41:11 by mradwan           #+#    #+#             */
/*   Updated: 2022/12/29 19:18:06 by mradwan          ###   ########.fr       */
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

void	sorting(t_ps *s)
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