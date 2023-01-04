/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:27:51 by mradwan           #+#    #+#             */
/*   Updated: 2023/01/04 17:37:17 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst){
		*lst = new;
	}
	else if (new || lst)
	{
		new -> next = *lst;
		*lst = new;
	}
}
// #include <stdio.h>
// int main()
// {
// 	t_list *m = ft_lstnew("mustafa");
// 	t_list *b = ft_lstnew("rawdan");
	
// 	ft_lstadd_front(&m, b);
// 	while (m-> next != NULL)
// 	{
// 		printf("%s ", m -> content);
// 		m = m->next;
// 	}
// 	m->next = NULL;
// 	printf("%s" , m->content);
// }