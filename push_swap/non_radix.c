/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   non_radix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoksal <gkoksal@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:31:43 by gkoksal           #+#    #+#             */
/*   Updated: 2024/03/04 13:46:22 by gkoksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_one(t_node *container)
{
	if (container->len_a == 1)
	{
		free_node(container);
		exit(0);
	}
}

void	sort_two(t_node *container)
{
	swap_a(container);
}

void	sort_three(t_node *container)
{
	int	a;
	int	b;
	int	c;

	a = container->stack_a[container->len_a - 1];
	b = container->stack_a[container->len_a - 2];
	c = container->stack_a[container->len_a - 3];
	if (a > b && b > c)
	{
		swap_a(container);
		rev_rota(container);
	}
	else if (a > c && c > b)
		rotate_a(container);
	else if (b > a && a > c)
		rev_rota(container);
	else if (c > a && a > b)
		swap_a(container);
	else if (b > c && c > a)
	{
		push_b(container);
		swap_a(container);
		push_a(container);
	}
}

void	sort_four(t_node *container)
{
	while (container->stack_a[container->len_a - 1] != 0)
		rotate_a(container);
	push_b(container);
	sort_three(container);
	push_a(container);
}

void	sort_five(t_node *container)
{
	while (container->stack_a[container->len_a - 1] != 0
		&& container->stack_a[container->len_a - 1] != 1)
		rotate_a(container);
	push_b(container);
	while (container->stack_a[container->len_a - 1] != 0
		&& container->stack_a[container->len_a - 1] != 1)
		rotate_a(container);
	push_b(container);
	if (container->stack_b[1] < container->stack_b[0])
		swap_b(container);
	sort_three(container);
	push_a(container);
	push_a(container);
}
