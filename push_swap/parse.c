/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoksal <gkoksal@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:55:56 by gkoksal           #+#    #+#             */
/*   Updated: 2024/03/04 13:33:09 by gkoksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*parsenumbers(char **str)
{
	int	check;
	int	len;
	int	*numbers;
	int	i;

	check = 0;
	len = array_length(str);
	numbers = malloc(sizeof(int) * len);
	if (!numbers)
		free_exit(str);
	i = -1;
	while (++i < len)
	{
		numbers[i] = ft_atoi(str[i], &check);
		if (check == -1)
		{
			free_str(str);
			free(numbers);
			write(1, "Error\n", 6);
			exit(0);
		}
	}
	return ((int *)numbers);
}

void	quotedstring(char **argv, t_node *container)
{
	char	**str;

	str = ft_split(argv[1], ' ');
	if (str)
	{
		check_numbers(str);
		container->stack_a = parsenumbers(str);
		container->len_a = array_length(str);
		check_duplicates(container->stack_a, &container->len_a, str);
		free_str(str);
	}
	else
	{
		write(1, "Error\n", 6);
		free_node(container);
		exit(0);
	}
}

char	*joinargv(int argc, char **argv)
{
	int		totallength;
	int		i;
	char	*str;

	totallength = 0;
	i = -1;
	while (++i < argc)
		totallength += ft_strlen(argv[i]) + 1;
	str = malloc(sizeof(char) * (totallength + 1));
	if (!str)
		return (NULL);
	str[0] = '\0';
	i = 0;
	while (++i < argc)
	{
		ft_strcat(str, argv[i]);
		if (i < argc - 1)
			ft_strcat(str, " ");
	}
	return (str);
}

void	parsestring(char **argv, int argc, t_node *container)
{
	char	**str;
	char	*temp;

	temp = joinargv(argc, argv);
	str = ft_split(temp, ' ');
	if (str)
	{
		free(temp);
		check_numbers(str);
		container->stack_a = parsenumbers(str);
		container->len_a = array_length(str);
		check_duplicates(container->stack_a, &container->len_a, str);
		free_str(str);
	}
	else
	{
		write(1, "Error\n", 6);
		free_node(container);
		exit(0);
	}
}
