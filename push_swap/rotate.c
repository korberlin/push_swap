/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoksal <gkoksal@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:14:26 by gkoksal           #+#    #+#             */
/*   Updated: 2024/03/04 12:02:13 by gkoksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_node *container)
{
	int	last_elem;
	int	i;

	if (container->len_a <= 1)
		return ;
	i = container->len_a - 1;
	last_elem = container->stack_a[i];
	while (i > 0)
	{
		container->stack_a[i] = container->stack_a[i - 1];
		i--;
	}
	container->stack_a[0] = last_elem;
	write(1, "ra\n", 3);
}

void	rotate_b(t_node *container)
{
	int	last_elem;
	int	i;

	if (container->len_b <= 1)
		return ;
	i = container->len_b - 1;
	last_elem = container->stack_b[i];
	while (i > 0)
	{
		container->stack_b[i] = container->stack_b[i - 1];
		i--;
	}
	container->stack_b[0] = last_elem;
	write(1, "rb\n", 3);
}

void	rotate_ab(t_node *container)
{
	int	last_elem;
	int	i;

	if (container->len_a <= 1 || container->len_b <= 1)
		return ;
	i = container->len_a - 1;
	last_elem = container->stack_a[i];
	while (i > 0)
	{
		container->stack_a[i] = container->stack_a[i - 1];
		i--;
	}
	container->stack_a[0] = last_elem;
	i = container->len_b - 1;
	last_elem = container->stack_b[i];
	while (i > 0)
	{
		container->stack_b[i] = container->stack_b[i - 1];
		i--;
	}
	container->stack_b[0] = last_elem;
	write(1, "rr\n", 3);
}
