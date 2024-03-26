/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoksal <gkoksal@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:42:51 by gkoksal           #+#    #+#             */
/*   Updated: 2024/03/04 12:01:21 by gkoksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rota(t_node *container)
{
	int	first_elem;
	int	i;

	if (container->len_a <= 1)
		return ;
	first_elem = container->stack_a[0];
	i = 0;
	while (i < container->len_a - 1)
	{
		container->stack_a[i] = container->stack_a[i + 1];
		i++;
	}
	container->stack_a[container->len_a - 1] = first_elem;
	write(1, "rra\n", 4);
}

void	rev_rotb(t_node *container)
{
	int	first_elem;
	int	i;

	if (container->len_b <= 1)
		return ;
	first_elem = container->stack_b[0];
	i = 0;
	while (i < container->len_b - 1)
	{
		container->stack_b[i] = container->stack_b[i + 1];
		i++;
	}
	container->stack_b[container->len_b - 1] = first_elem;
	write(1, "rrb\n", 4);
}

void	rev_rotab(t_node *container)
{
	int	first_elem;
	int	i;

	if (container->len_a <= 1 || container->len_b <= 1)
		return ;
	first_elem = container->stack_a[0];
	i = -1;
	while (++i < container->len_a - 1)
		container->stack_a[i] = container->stack_a[i + 1];
	container->stack_a[i] = first_elem;
	first_elem = container->stack_b[0];
	i = -1;
	while (++i < container->len_b - 1)
		container->stack_b[i] = container->stack_b[i + 1];
	container->stack_b[i] = first_elem;
	write(1, "rrr\n", 4);
}
