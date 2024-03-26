/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoksal <gkoksal@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 15:27:06 by gkoksal           #+#    #+#             */
/*   Updated: 2024/03/04 12:33:00 by gkoksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	getmaxbits(t_node *container)
{
	int	maxbits;
	int	len;

	maxbits = 1;
	len = container->len_a;
	while (len > 1)
	{
		maxbits++;
		len /= 2;
	}
	return (maxbits);
}

void	radix_a(t_node *container, int i)
{
	if (((container->stack_a[container->len_a - 1] >> i) & 1) == 0)
		push_b(container);
	else
		rotate_a(container);
}

void	radix_b(t_node *container, int i)
{
	if (((container->stack_b[container->len_b - 1] >> i) & 1) == 1)
		push_a(container);
	else
		rotate_b(container);
}

void	sort_radix(t_node *container)
{
	int	maxbits;
	int	i;
	int	j;
	int	size_a;
	int	size_b;

	maxbits = getmaxbits(container);
	i = 0;
	while (i < maxbits)
	{
		size_a = container->len_a;
		j = -1;
		while (++j < size_a)
			radix_a(container, i);
		j = -1;
		i++;
		size_b = container->len_b;
		while (++j < size_b && i < maxbits)
			radix_b(container, i);
	}
	while (container->len_b)
		push_a(container);
}
