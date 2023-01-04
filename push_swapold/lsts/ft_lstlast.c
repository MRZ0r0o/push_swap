/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:03:08 by mradwan           #+#    #+#             */
/*   Updated: 2022/12/15 23:04:07 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if(lst -> next == NULL)
			return(lst);
		lst = lst -> next;
	}
	return(lst); 
}

// #include <stdio.h>
// int main()
// {
// 	t_list *m = ft_lstnew("mustafa");
// 	t_list *n = ft_lstnew("waleed");
// 	t_list *l = ft_lstnew("radwan");

// 	m -> next = n;
// 	n -> next = l;
// 	//ft_lstlast(m);
// 	printf("%s\n",  ft_lstlast(m) -> content);
// }
