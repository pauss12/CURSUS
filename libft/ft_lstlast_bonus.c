/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:52:46 by pmendez-          #+#    #+#             */
/*   Updated: 2023/09/28 18:19:45 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == 0)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int	main()
{
	t_list *list = (void *)0;
	t_list *new;
	t_list *last;

	// Crear un nuevo elemento de lista.
	new = (t_list*)malloc(sizeof(*new));
	new->content = "Hola mundo";
	new->next = (void *)0;

	// Añadir el nuevo elemento de lista al principio de la lista.
	ft_lstadd_front(&list, new);

	// Comprobar que el nuevo elemento de lista es el primer elemento de la
	// lista.
	if (list == new) {
		printf("La función `ft_lstadd_front()` funciona correctamente.\n");
	} else {
		printf("La función `ft_lstadd_front()` no funciona correctamente.\n");
	}

	// Comprobar que el último elemento de la lista es el nuevo elemento de
	// lista.
	last = ft_lstlast(list);
	if (last == new) {
		printf("La función `ft_lstlast()` funciona correctamente.\n");
	} else {
		printf("La función `ft_lstlast()` no funciona correctamente.\n");
	}

	printf("El contenido del último elemento de la lista es: %s\n", last->content);
	printf("Hay %d elementos en la lista.\n", ft_lstsize(list));
	return 0;
}
*/
