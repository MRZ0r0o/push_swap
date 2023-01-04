/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:56:11 by mradwan           #+#    #+#             */
/*   Updated: 2022/12/28 19:45:20 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	ft_atoi(const char *str)
// {
// 	int					i;
// 	int					k;
// 	unsigned long long	value;
// 	int					d;

// 	i = 0;
// 	k = 1;
// 	d = 0;
// 	value = 0;
// 	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
// 			i++;
// 	if (str[i] == '+' || str[i] == '-')
// 		if (str[i++] == '-')
// 			k = k * -1;
// 	while (str[i] == '0')
// 			i++;
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		value = (value * 10) + (str[i++] - '0');
// 		d++;
// 	}
// 	if (d > 19 || value >= 9223372036854775808ULL)
// 		return (-(k == 1));
// 	return (value * k);
// }

int	ft_atoi(const char *str)
{
	int i;
	long int res;
	int sign;
	
	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = sign * -1;
	while (str[i] == '0')
			i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i++] - '0');
		if ((res > 2147483647 && sign == 1) || (res > 2147483648 && sign == -1))
		{
			write(2, "Error\n", 6);
			exit(-1);
		}
	}
	return(res * sign);
}

int	ps_dub_check(int ac, char **av)
{
	int	i = 1;
	int j;
	
	j = 0;
	i = 0;
	if (ac < 2)
		return (0);
	while(av[j])
	{
		i = j + 1;
		while (av[i])
		{
			if(ft_atoi(av[i]) == ft_atoi(av[j]))
			{
				ft_printf("error");
				return(0);
			}
			i++;
		}
		j++;
	}
	return (1);
}

int	ps_sorted_check(t_list *list)
{
	t_list *tmp;
	
	tmp = list;
	while (tmp->next)
	{
		if(tmp->content < tmp->next->content)
			tmp = tmp->next;
		else
			return(1);
	}
	// ft_printf("is sorted\n");
	return(0);
}

void	sort_the_nums_to_small(t_list **list)
{
	// int i;
	// t_list *tmp;
	// t_list *tmp2;
	// t_list *tmp3;
	
	// tmp = (*list);
	// tmp2 = (*list);
	// tmp3 = (*list);
	// while (tmp)
	// {
	// 	i = 0;
	// 	while (tmp2)
	// 	{
	// 		if(tmp->content > tmp2->content)
	// 		{
	// 			i++;
	// 			tmp->id = i;
	// 		}
	// 		tmp2 = tmp2->next;
	// 	}
	// 	tmp2 = tmp3;
	// 	ft_printf("%d\n", tmp->id);
	// 	tmp = tmp->next;
	// }
	int i;
	t_list *tmp;
	t_list *tmp2;

	i = 0;
	tmp = (*list);
	while (tmp)
	{
		i = 0;
		tmp2 = (*list);
		while (tmp2)
		{
			if (tmp->content > tmp2->content)
				i++;
			tmp2 = tmp2->next;
		}
		tmp->id = i;
		// printf("value |%d| index |%d|\n", tmp->content, tmp->id);	
		tmp = tmp->next;
	}
	i = 0;
	tmp = (*list);
	while (tmp)
	{
		tmp->index = i;
		// printf("value |%d| crnt_pos |%d| index |%d|\n", tmp->content, tmp->index, tmp->id);	
		tmp = tmp->next;
		i++;
	}
}

// 5 -4 1 -2
// 3  1 1