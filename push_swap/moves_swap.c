/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:26:23 by pmendez-          #+#    #+#             */
/*   Updated: 2024/02/04 16:52:36 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_lists **stack)
{
	int	aux;

	if ((*stack) == NULL || (*stack)->next == NULL)
		return ;
	aux = (*stack)->contenido;
	(*stack)->contenido = (*stack)->next->contenido;
	(*stack)->next->contenido = aux;
}

//Se tiee q llamar sa
void	swap_a(t_lists **stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	swap_b(t_lists **stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void	swap_ss(t_stack *stacks)
{
	swap(&(stacks)->list_a);
	swap(&(stacks)->list_b);
	ft_printf("ss\n");
}
