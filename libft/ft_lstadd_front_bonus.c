/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:13:49 by pmendez-          #+#    #+#             */
/*   Updated: 2023/09/28 18:18:33 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int main()
{
    t_list *list = NULL;
    t_list *new;

    // Crear un nuevo elemento de lista.
    new = (t_list*)malloc(sizeof(*new));
    new->content = "Hola mundo";
    new->next = NULL;

    // Añadir el nuevo elemento de lista al principio de la lista.
    ft_lstadd_front(&list, new);

    // Comprobar que el nuevo elemento de lista es el primer elemento de la
	// lista.
    if (list == new) {
        printf("La función `ft_lstadd_front()` funciona correctamente.\n");
    } else {
        printf("La función `ft_lstadd_front()` no funciona correctamente.\n");
    }

    return 0;
}
*/
