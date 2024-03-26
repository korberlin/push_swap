/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoksal <gkoksal@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:09:38 by gkoksal           #+#    #+#             */
/*   Updated: 2024/03/04 15:22:27 by gkoksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*init_node(int argc, char **argv)
{
	t_node	*container;

	if (argc == 1)
		exit(0);
	container = malloc(sizeof(t_node));
	if (!container)
		exit(0);
	else if (argc == 2)
		quotedstring(argv, container);
	else
		parsestring(argv, argc, container);
	check_sorted(container);
	container->stack_b = malloc(sizeof(int) * container->len_a);
	container->sorted = malloc(sizeof(int) * container->len_a);
	container->sorted_indice = malloc(sizeof(int) * container->len_a);
	return (container);
}

void	sort_pushswap(t_node *container)
{
	if (container->len_a == 2)
		sort_two(container);
	else if (container->len_a == 3)
		sort_three(container);
	else if (container->len_a == 4)
		sort_four(container);
	else if (container->len_a == 5)
		sort_five(container);
	else
		sort_radix(container);
}

int	main(int argc, char **argv)
{
	t_node	*container;

	container = init_node(argc, argv);
	sortarray(container);
	get_index(container);
	sort_pushswap(container);
	free_node(container);
}
