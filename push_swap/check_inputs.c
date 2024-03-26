/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoksal <gkoksal@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:48:37 by gkoksal           #+#    #+#             */
/*   Updated: 2024/03/04 11:49:35 by gkoksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_num(char c, char **str)
{
	if (!(c >= '0' && c <= '9'))
		free_exit(str);
}

void	check_numbers(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != NULL)
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == '+' || str[i][j] == '-')
				check_num(str[i][++j], str);
			else if (!(str[i][j] >= '0' && str[i][j] <= '9'))
				check_num('e', str);
			j++;
		}
		i++;
	}
}

void	check_duplicates(int *numbers, int *len, char **str)
{
	int	i;
	int	j;

	i = 0;
	while (i < *len)
	{
		j = i + 1;
		while (j < *len)
		{
			if (numbers[i] == numbers[j])
			{
				free_str(str);
				free(numbers);
				write(1, "Error\n", 6);
				exit(0);
			}
			j++;
		}
		i++;
	}
}

void	check_sorted(t_node *container)
{
	int	move;
	int	i;
	int	j;

	move = 0;
	i = 0;
	if (container->len_a == 1)
		sort_one(container);
	while (i < container->len_a)
	{
		j = i + 1;
		while (j < container->len_a)
		{
			if (container->stack_a[i] > container->stack_a[j])
				move++;
			j++;
		}
		i++;
	}
	if (move == 0)
	{
		free_node(container);
		exit(0);
	}
}
