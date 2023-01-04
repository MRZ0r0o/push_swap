/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:58:56 by mradwan           #+#    #+#             */
/*   Updated: 2022/12/28 19:38:53 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new;
	new = (t_list *)malloc(sizeof(t_list));
	if(!new)
		return(NULL);
	new -> next = NULL;
	new -> content = content;
	// new->id = 0;
	return(new);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%s\n", ft_lstnew("mustafa")->content);
// }