/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transforme.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:10:10 by pmendez-          #+#    #+#             */
/*   Updated: 2024/02/04 16:18:26 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	check_how_many_numbers(int argc, char **argv)
{
	int		i;
	int		j;
	size_t	nums;

	i = 1;
	j = 0;
	nums = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			printf("NUM: --%c--\n", argv[i][j]);
			if (argv[i][j] == ' ' && argv[i][j + 1] != ' ')
				nums++;
			j++;
		}
		nums++;
		i++;
		j = 0;
	}
	printf("NUM: %zu", nums);
	return (nums);
}

int	*transforme_int_and_check(int argc, char **argv, int *tamNum, t_stack **stacks)
{
	int	i;
	int	cont;
	int	*integer_arguments;

	i = 1;
	cont = 0;
	*stacks = (t_stack *)malloc(sizeof(t_stack));
	if (!(*stacks))
		return (NULL);
	*tamNum = check_how_many_numbers(argc, argv);
	if (*tamNum == 0)
		exit(1);
	integer_arguments = (int *)ft_calloc(*tamNum, sizeof(int));
	if (integer_arguments == NULL)
		return (0);
	while (i < argc)
	{
		while_function(argv[i], integer_arguments, &cont);
		i++;
	}
	if (check_repeated(integer_arguments, tamNum) == 0)
	{
		free(integer_arguments);
	//	free(stacks);
		exit(1);
	}
	return (integer_arguments);
}

int	check_repeated(int *argumentos_enteros, int *tamNum)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < *tamNum)
	{
		while (j < *tamNum)
		{
			if (argumentos_enteros[i] == argumentos_enteros[j])
			{
				ft_printf("ERROR! Son iguales\n");
				return (0);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

void	while_function(char *str, int *argumentos_enteros, int *cont)
{
	int	i;
	int state;

	i = 0;
	state = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			numbers_together(str, argumentos_enteros, cont);
			break ;
		}
		i++;
	}
	if (str[i] == '\0')
	{
		argumentos_enteros[*cont] = ft_atoi_changed(str, &state);
		if (state == 1)
		{
			ft_printf("ERROR! El numero supera el MAX negativo o el MAX positivo\n");
			free(argumentos_enteros);
			exit (0);
		}
		*cont = *cont + 1;
	}
}


void	numbers_together(char *str, int *argumentos_enteros, int *cont)
{
	char	**numeros;
	int		state;
	int		j;

	j = 0;
	state = 0;
	numeros = ft_split(str, ' ');
	while (numeros[j] != NULL)
	{
		argumentos_enteros[*cont] = ft_atoi_changed(numeros[j], &state);
		if (state == 1)
		{
			ft_printf("ERROR! El numero supera el MAX negativo o el MAX positivo\n");
			free(argumentos_enteros);
			exit (0);
		}
		j++;
		*cont = *cont + 1;
	}
}
