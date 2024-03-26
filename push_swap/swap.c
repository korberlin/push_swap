/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoksal <gkoksal@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:51:21 by gkoksal           #+#    #+#             */
/*   Updated: 2024/03/04 12:04:13 by gkoksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_node *container)
{
	int	temp;

	if (container->len_a < 2)
		return ;
	temp = container->stack_a[container->len_a - 1];
	container->stack_a[container->len_a - 1]
		= container->stack_a[container->len_a - 2];
	container->stack_a[container->len_a - 2] = temp;
	write(1, "sa\n", 3);
}

void	swap_b(t_node *container)
{
	int	temp;

	if (container->len_b < 2)
		return ;
	temp = container->stack_b[container->len_b - 1];
	container->stack_b[container->len_b - 1]
		= container->stack_b[container->len_b - 2];
	container->stack_b[container->len_b - 2] = temp;
	write(1, "sb\n", 3);
}

void	swap_ss(t_node *container)
{
	int	temp_a;
	int	temp_b;

	if (container->len_a < 2 || container->len_b < 2)
		return ;
	temp_a = container->stack_a[container->len_a - 1];
	container->stack_a[container->len_a - 1]
		= container->stack_a[container->len_a - 2];
	container->stack_a[container->len_a - 2] = temp_a;
	temp_b = container->stack_b[container->len_b - 1];
	container->stack_b[container->len_b - 1]
		= container->stack_b[container->len_b - 2];
	container->stack_b[container->len_b - 2] = temp_b;
	write(1, "ss\n", 3);
}
