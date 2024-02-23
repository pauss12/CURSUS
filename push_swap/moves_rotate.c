/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:52:46 by pmendez-          #+#    #+#             */
/*   Updated: 2024/02/04 17:01:24 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_lists **lista)
{
	t_lists	*aux;
	t_lists	*aux2;

	aux = *lista;
	aux2 = *lista;
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = aux2;
	*lista = aux2->next;
	aux2->next = NULL;
}

void	rotate_a(t_lists **list_a)
{
	rotate(list_a);
	ft_printf("ra\n");
}

void	rotate_b(t_lists **list_b)
{
	rotate(list_b);
	ft_printf("rb\n");
}

void	rotate_rr(t_stack *stacks)
{
	rotate(&stacks->list_a);
	rotate(&stacks->list_b);
	ft_printf("rr\n");
}
