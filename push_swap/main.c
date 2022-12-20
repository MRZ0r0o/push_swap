/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:42:48 by mradwan           #+#    #+#             */
/*   Updated: 2022/12/19 19:21:09 by mradwan          ###   ########.fr       */
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
		if (av[d] == NULL)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		d++;
	}
	if (!ps_arg_check(ac, av) || !ps_dub_check(ac, av))
		return (0);
	ps_copy_to_lists(&list, av);
	if(!ps_sorted_check(list.stack_a))
		return(0);
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
	
int main(int ac, char **av)
{
	if (!ps_main(ac, av))
		return(0);
}
