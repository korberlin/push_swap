/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoksal <gkoksal@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:07:12 by gkoksal           #+#    #+#             */
/*   Updated: 2024/03/04 11:59:25 by gkoksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_node *container)
{
	if (container->len_a < 1)
		return ;
	container->len_b++;
	container->stack_b[container->len_b - 1]
		= container->stack_a[container->len_a - 1];
	container->len_a--;
	write(1, "pb\n", 3);
}

void	push_a(t_node *container)
{
	if (container->len_b < 1)
		return ;
	container->len_a++;
	container->stack_a[container->len_a - 1]
		= container->stack_b[container->len_b - 1];
	container->len_b--;
	write(1, "pa\n", 3);
}
