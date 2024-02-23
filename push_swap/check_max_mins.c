/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_max_mins.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:15:03 by pmendez-          #+#    #+#             */
/*   Updated: 2024/02/04 18:15:05 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check_max_a(t_stack *stacks)
{
    t_lists	*aux;

    aux = (stacks)->list_a;
    while (aux != NULL)
    {
        if (aux->contenido > stacks->values->max_a)
            stacks->values->max_a = aux->contenido;
        aux = aux->next;
    }
}

void check_min_a(t_stack *stacks)
{
    t_lists	*aux;

    aux = (stacks)->list_a;
    stacks->values->min_a = aux->contenido;
    while (aux != NULL)
    {
        if (aux->contenido < stacks->values->min_a)
            stacks->values->min_a = aux->contenido;
        aux = aux->next;
    }
}

void check_max_b(t_stack *stacks)
{
    t_lists	*aux;

    aux = (stacks)->list_b;
    while (aux != NULL)
    {
        if (aux->contenido > stacks->values->max_b)
            stacks->values->max_b = aux->contenido;
        aux = aux->next;
    }
}

void check_min_b(t_stack *stacks)
{
    t_lists	*aux;

    aux = (stacks)->list_b;
    stacks->values->min_b = aux->contenido;
    while (aux != NULL)
    {
        if (aux->contenido < stacks->values->min_b)
            stacks->values->min_b = aux->contenido;
        aux = aux->next;
    }
}
