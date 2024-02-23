/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:36:04 by pmendez-          #+#    #+#             */
/*   Updated: 2024/02/04 17:04:42 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_lists **lista)
{
	t_lists	*aux;
	t_lists	*aux2;

	aux = *lista;
	aux2 = *lista;
	while (aux->next->next != NULL)
	{
		aux = aux->next;
	}
	aux2 = aux->next;
	aux->next = NULL;
	aux2->next = *lista;
	*lista = aux2;
}

void	reverse_rotate_a(t_lists **list_a)
{
	reverse_rotate(list_a);
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_lists **list_b)
{
	reverse_rotate(list_b);
	ft_printf("rrb\n");
}

void	reverse_rotate_rr(t_stack *stacks)
{
	reverse_rotate(&stacks->list_a);
	reverse_rotate(&stacks->list_b);
	ft_printf("rrr\n");
}
