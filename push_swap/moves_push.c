/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:56:06 by pmendez-          #+#    #+#             */
/*   Updated: 2024/02/04 17:02:42 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	push_a(t_stack **stack)
{
	t_lists	*aux;

	if ((*stack)->list_b == NULL)
		return ;
	aux = (*stack)->list_b;
	(*stack)->list_b = (*stack)->list_b->next;
	aux->next = (*stack)->list_a;
	(*stack)->list_a = aux;
	ft_printf("pa\n");
}

void push_b(t_stack **stack)
{
    t_lists	*aux;

    if ((*stack)->list_a == NULL)
        return ;
    aux = (*stack)->list_a;
    (*stack)->list_a = (*stack)->list_a->next;
    aux->next = (*stack)->list_b;
    (*stack)->list_b = aux;
    ft_printf("pb\n");
}