/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:31:41 by pmendez-          #+#    #+#             */
/*   Updated: 2024/02/04 16:25:41 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>
# include <stdbool.h>

# include "libft/libft.h"

typedef struct s_lists
{
	int				contenido;
	//struct t_stack *anterior;
	struct s_lists	*next;
	//int posicion;
}	t_lists;

typedef struct s_stack
{
	t_lists			*list_a;
	t_lists			*list_b;
	struct t_moves	*moves;
	struct t_moves	*cheaper_move;
	struct t_values	*values;
}	t_stack;

typedef struct t_moves
{
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
	int	pa;
	int	pb;
	int	sa;
	int	sb;
	int	ss;
	int	moves;
}	t_moves;

typedef struct t_values
{
	int	max_a;
	int	max_b;
	int	min_a;
	int	min_b;
}	t_values;


//int		check_arguments(int argc, char **argv);
bool		check_arguments(int argc, char **argv);

int		check_numbers(char *arguments, int j);

t_lists	*add_new_node(int number);
//t_lists	*stack_lists(int *argumentos_enteros, int *tam_num);
void	stack_lists(int *argumentos_enteros, int *tam_num, t_lists **list_a);

int		check_repeated(int *argumentos_enteros, int *tam_num);

int		*transforme_int_and_check(int argc, char **argv, int *tam_num, t_stack **stacks);

size_t	check_how_many_numbers(int argc, char **argv);
void	imprimir_array(int *argumentos_enteros, int *tam_num);

void	numbers_together(char *str, int *argumentos_enteros, int *cont);
//mvoid	numbers_together(char *str, int *argumentos_enteros, int *cont, int *estado);

void	while_function(char *str, int *argumentos_enteros, int *cont);
//void	while_function(char *str, int *argumentos_enteros, int *cont, int *estado);

void	print_stack(t_lists *stack_a);

void	rotate(t_lists **lista);
void	rotate_a(t_lists **list_a);
void	rotate_b(t_lists **list_b);
void	rotate_rr(t_stack *stacks);

void 	push_a(t_stack **stack);
void	push_b(t_stack **stack);

void	swap_a(t_lists **stack_a);
void	swap_b(t_lists **stack_b);
void	swap_ss(t_stack *stacks);
void	swap(t_lists **stack);

void	reverse_rotate(t_lists **lista);
void	reverse_rotate_a(t_lists **list_a);
void	reverse_rotate_b(t_lists **list_b);
void	reverse_rotate_rr(t_stack *stacks);

void	free_stack(t_lists *lista);
void	stacks_freedom(t_stack *stacks);

void	push_swap_function(t_stack *stacks, int tam_num);
void	sort_three(t_lists **list_a);
void	rotate_and_swap(t_lists **list_a);
void	swap_and_rotate(t_lists **list_a);
void	sort_four(t_stack *stacks);

void	checks_b(t_stack *stacks);
void	check_max_b(t_stack *stack);
void 	check_min_b(t_stack *stacks);

void	checks_a(t_stack *stacks);
void	check_max_a(t_stack *stack);
void 	check_min_a(t_stack *stacks);

int		find_position(t_stack *stacks, int number);

void	sort_hundred(t_stack *stacks);
int		size_list(t_lists *lst);
void 	print_both_stacks(t_stack *stacks);

void 	move_to_top(t_lists **list_a, int pos);
void	error();

#endif