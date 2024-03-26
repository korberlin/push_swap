/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortarray.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoksal <gkoksal@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:22:25 by gkoksal           #+#    #+#             */
/*   Updated: 2024/03/04 12:02:50 by gkoksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_array(t_node *container)
{
	int	i;
	int	temp;

	i = -1;
	while (++i < (container->len_a / 2))
	{
		temp = container->stack_a[i];
		container->stack_a[i] = container->stack_a[container->len_a - 1 - i];
		container->stack_a[container->len_a - 1 - i] = temp;
	}
}

void	sortarray(t_node *container)
{
	int	i;
	int	len;
	int	temp;
	int	j;

	len = container->len_a;
	i = -1;
	while (++i < len)
		container->sorted[i] = container->stack_a[i];
	i = 0;
	while (i < len - 1)
	{
		j = -1;
		while (++j < len - i - 1)
		{
			if (container->sorted[j] > container->sorted[j + 1])
			{
				temp = container->sorted[j];
				container->sorted[j] = container->sorted[j + 1];
				container->sorted[j + 1] = temp;
			}
		}
		i++;
	}
	rev_array(container);
}

void	get_index(t_node *container)
{
	int	i;
	int	j;

	i = 0;
	while (i < container->len_a)
	{
		j = -1;
		while (++j < container->len_a)
		{
			if (container->stack_a[i] == container->sorted[j])
				container->sorted_indice[i] = j;
		}
		i++;
	}
	i = -1;
	while (++i < container->len_a)
		container->stack_a[i] = container->sorted_indice[i];
}
