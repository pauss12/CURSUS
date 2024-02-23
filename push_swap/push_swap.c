/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:29:39 by pmendez-          #+#    #+#             */
/*   Updated: 2024/02/04 16:49:33 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//FREE LISTS  ----------------------------------------
void	stacks_freedom(t_stack *stacks)
{
	free_stack(stacks->list_a);
	free_stack(stacks->list_b);
}

void	free_stack(t_lists *lista)
{
	t_lists	*aux;

	while (lista != NULL)
	{
		aux = lista;
		lista = lista->next;
		free(aux);
	}
}

void print_both_stacks(t_stack *stacks)
{
	ft_printf(" \n----- LISTA ENLAZADA DESPUES A: ----");
	print_stack(stacks->list_a);
	ft_printf("\n ----- LISTA ENLAZADA DESPUES B: -----");
	print_stack(stacks->list_b);
}

void error()
{
	write(2, "Error", 5);
	write(2, "\n", 1);
}

//MAIN  ----------------------------------------
int	main(int argc, char *argv[])
{
	t_stack	*stacks;
	int		*integer_arguments;
	int		tam_num;

	stacks = NULL;
	integer_arguments = NULL;
	tam_num = 0;
	if (argc == 1)
		return (0);
	if (check_arguments(argc, argv) == false)
	{
		//error();
		free(stacks);
		exit (1);
	}
	integer_arguments = transforme_int_and_check(argc, argv, &tam_num, &stacks);
	stacks->list_a = stack_lists(integer_arguments, &tam_num);
	stacks->list_b = NULL;
	push_swap_function(stacks, tam_num);
	//print_both_stacks(stacks);
	//free(stacks);
	return (0);
}
