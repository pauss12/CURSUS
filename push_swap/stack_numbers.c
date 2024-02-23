/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:20:53 by pmendez-          #+#    #+#             */
/*   Updated: 2024/02/04 16:18:18 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lists	*add_new_node(int number)
{
	t_lists	*new_node;

	new_node = (t_lists *)malloc(sizeof(t_lists));
	if (new_node == NULL)
		return (NULL);
	new_node->contenido = number;
	new_node->next = NULL;
	return (new_node);
}

t_lists	*stack_lists(int *argumentos_enteros, int *tamNum)
{
	int		i;
	t_lists	*aux;
	t_lists	*stack_a;

	i = 0;
	stack_a = add_new_node(argumentos_enteros[i]);
	aux = stack_a;
	while (i < *tamNum - 1)
	{
		i++;
		aux->next = add_new_node(argumentos_enteros[i]);
		aux = aux->next;
		aux->next = NULL;
	}
	return (stack_a);
}

void	print_stack(t_lists *stacks)
{
	t_lists	*aux;

	aux = stacks;
	while (aux != NULL)
	{
		ft_printf("\nEl numero es %d", aux->contenido);
		aux = aux->next;
	}
	ft_printf("\n");
}
