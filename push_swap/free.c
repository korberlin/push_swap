/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoksal <gkoksal@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:50:03 by gkoksal           #+#    #+#             */
/*   Updated: 2024/03/04 11:50:03 by gkoksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_exit(char **str)
{
	free_str(str);
	write(1, "Error\n", 6);
	exit(0);
}

void	free_node(t_node *container)
{
	free(container->stack_a);
	free(container->stack_b);
	free(container->sorted);
	free(container->sorted_indice);
	free(container);
}

void	free_str(char **str)
{
	int	len;

	len = array_length(str);
	while (0 <= len - 1)
	{
		free(str[len - 1]);
		len--;
	}
	free(str);
}
