/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orders.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:17:24 by pmendez-          #+#    #+#             */
/*   Updated: 2024/02/04 16:48:48 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_function(t_stack *stacks, int tam_num)
{
 	if (tam_num == 1)
		return ;
	else if (tam_num == 2)
	{
		if (stacks->list_a->contenido > stacks->list_a->next->contenido)
			swap_a(&stacks->list_a);
	}
	else if (tam_num == 3)
		sort_three(&stacks->list_a);
	else if (tam_num == 4)
		sort_four(stacks);
	else
		sort_hundred(stacks);
}

//213; 231; 321; 312; 132;
void	sort_three(t_lists **list_a)
{
	int	number_one;
	int	second_number;
	int	third_element;

	number_one = (*list_a)->contenido;
	second_number = (*list_a)->next->contenido;
	third_element = (*list_a)->next->next->contenido;
	
	if ((number_one > second_number) && (second_number < third_element)
		&& (number_one < third_element))
		swap_a(list_a);
	else if ((number_one < second_number) && (second_number > third_element)
		 && (number_one > third_element))
		reverse_rotate_a(list_a);
	else if ((number_one > second_number) && (second_number > third_element)
		&& (number_one > third_element))
		rotate_and_swap(list_a);
	else if ((number_one > second_number) && (second_number < third_element)
		&& (number_one > third_element))
		rotate_a(list_a);
	else if ((number_one < second_number) && (second_number > third_element)
		&& (number_one < third_element))
		swap_and_rotate(list_a);
}

void	sort_four(t_stack *stacks) 
{
	int pos;

	stacks->moves = ft_calloc(1, sizeof(t_moves));
	stacks->cheaper_move = ft_calloc(1, sizeof(t_moves));
	stacks->values = ft_calloc(1, sizeof(t_values));
	checks_a(stacks);
	pos = find_position(stacks, stacks->values->min_a);
	if (pos == 0)
		push_b(&stacks);
	else
	{
		while(pos != 0)
		{
			rotate_a(&stacks->list_a);
			pos--;
		}
		push_b(&stacks);
	}
	sort_three(&stacks->list_a);
	push_a(&stacks);
}


void sort_hundred(t_stack *stacks)
{
	int size;
	int pos;
	
	stacks->moves = ft_calloc(1, sizeof(t_moves));
	stacks->cheaper_move = ft_calloc(1, sizeof(t_moves));
	stacks->values = ft_calloc(1, sizeof(t_values));
	size = size_list(stacks->list_a);
	while (size > 4)
	{
		checks_a(stacks);
		pos = find_position(stacks, stacks->values->min_a);
		if (pos == 0)
			push_b(&stacks);
		else
		{
			move_to_top(&stacks->list_a, pos);
			push_b(&stacks);
		}
		size--;
	}
	sort_four(stacks);
	while(stacks->list_b != NULL)
	{
		push_a(&stacks);
	}
}

void move_to_top(t_lists **list, int pos)
{
	if (pos <= (size_list(*list) / 2))
	{
		while(pos != 0)
		{
			rotate_a(list);
			pos--;
		}
	}
	else
	{
		while(pos != size_list(*list))
		{
			reverse_rotate_a(list);
			pos++;
		}
	}
}
