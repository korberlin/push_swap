/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoksal <gkoksal@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:00:33 by gkoksal           #+#    #+#             */
/*   Updated: 2024/03/04 12:33:18 by gkoksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int	*stack_a;
	int	*stack_b;
	int	*sorted;
	int	*sorted_indice;
	int	len_a;
	int	len_b;
}	t_node;

// Libft functions
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
char	*ft_strcat(char *dest, char *src);
int		ft_atoi(char *str, int *checker);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);

// Free memory
void	free_exit(char **str);
void	free_node(t_node *container);
void	free_str(char **str);

// Check input and init node
int		array_length(char **array);
void	check_numbers(char **str);
void	quotedstring(char **argv, t_node *container);
char	*joinargv(int argc, char **argv);
void	parsestring(char **argv, int argc, t_node *container);
int		*parsenumbers(char **str);
void	check_duplicates(int *numbers, int *len, char **str);
void	check_sorted(t_node *container);
t_node	*init_node(int argc, char **argv);

// Push Swap
void	sortarray(t_node *container);
void	get_index(t_node *container);
void	sort_one(t_node *container);
void	sort_two(t_node *container);
void	sort_three(t_node *container);
void	sort_four(t_node *container);
void	sort_five(t_node *container);
void	sort_radix(t_node *container);
void	sort_pushswap(t_node *container);
int		check_sorted_b(t_node *container, int bits);
int		check_sorted_a(t_node *container, int bits);
void	first_push(t_node *container);
void	radix_a(t_node *container, int i);
void	radix_b(t_node *container, int i);
void	sort_radix(t_node *container);
int		getmaxbits(t_node *container);

// instructions
void	swap_a(t_node *container);
void	swap_b(t_node *container);
void	swap_ss(t_node *container);
void	push_b(t_node *container);
void	push_a(t_node *container);
void	rotate_a(t_node *container);
void	rotate_b(t_node *container);
void	rotate_ab(t_node *container);
void	rev_rota(t_node *container);
void	rev_rotb(t_node *container);
void	rev_rotab(t_node *container);

#endif
