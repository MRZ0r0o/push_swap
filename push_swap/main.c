/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:42:48 by mradwan           #+#    #+#             */
/*   Updated: 2022/12/30 15:14:35 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_copy_to_lists(t_ps *list, char **av)
{
	int i = 0;
	int num = ft_atoi(av[i++]);
	list->stack_a = ft_lstnew(num);
	while(av[i])
	{
		num = ft_atoi(av[i]);
		ft_lstadd_back(&list->stack_a, ft_lstnew(num));
		i++;
	}
	sort_the_nums_to_small(&list->stack_a);
}

int	ps_main(int ac, char **av)
{
	char *str;
	t_ps list;
	int i;
	int d;

	i = 1;
	while(av[i])
		str = ft_strjoin(str, av[i++]);
	av = ft_split(str, ' ');
	d = 0;
	while (d < i - 1)
	{
		if (av[d++] == NULL)
		{
			write(2, "Error\n", 10);
			return (0);
		}
	}
	if (!ps_arg_check(ac, av) || !ps_dub_check(ac, av))
		return (0);
	ps_copy_to_lists(&list, av);
	if(!ps_sorted_check(list.stack_a))
		return(0);
	check_and_sort(&list);
	return(1);
}

	// ps_rra(&list.stack_a);
	// // ps_pb(&list);
	// // ps_swap_list(list.stack_b);
	// // t_list *node = list.stack_b;
	// t_list *node2 = list.stack_a;
	// while (node2)
	// {
	// 	ft_printf("%d\n", (node2->content));
	// 	// ft_printf("%d\n", (node2->next->content));
	// 	node2 = node2->next;
	// }
void	check_and_sort(t_ps *lst)
{
	if(ft_lstsize(lst->stack_a) == 3)
	{
		sort_three(lst);
		return;
	}
	while (ft_lstsize(lst->stack_a) > 0)
	{
		// if(ft_lstsize(lst->stack_a) > 1)
			sorting(lst);
		// else
		// 	ps_pb(lst);
	}
	while (lst->stack_b)
	{
		ps_pa(lst);
		// push(&lst->stack_b, &lst->stack_a);
		ft_printf("pa\n");
		// printf("%d-----\n",lst->stack_b->content);
		// lst->stack_b = lst->stack_b->next;
	}
}

int main(int ac, char **av)
{
	if (!ps_main(ac, av))
		return(0);
}
