/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:10:28 by pmendez-          #+#    #+#             */
/*   Updated: 2024/02/08 19:10:30 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_position(t_stack *stacks, int number)
{
	int pos;
	t_lists *aux;
	
	pos = 0;
	aux = stacks->list_a;
	while (aux != NULL)
	{
		if (aux->contenido == number)
			break ;
		pos++;
		aux = aux->next;
	}
	return (pos);
}

void checks_a(t_stack *stacks)
{
	check_max_a(stacks);
	check_min_a(stacks);
}

void checks_b(t_stack *stacks)
{
	check_max_b(stacks);
	check_min_b(stacks);
}

int	size_list(t_lists *lst)
{
	int	tam;

	tam = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		tam++;
	}
	return (tam);
}