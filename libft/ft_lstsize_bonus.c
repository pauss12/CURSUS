/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:32:17 by pmendez-          #+#    #+#             */
/*   Updated: 2023/09/28 18:20:35 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
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
/*
int main()
{
    t_list *list;

    list = (void *)0;

    ft_lstadd_front(&list, ft_lstnew("Hola"));
    ft_lstadd_front(&list, ft_lstnew("Mundo"));
    ft_lstadd_front(&list, ft_lstnew("Hola"));
    printf("El tamaño de la lista es: %d\n", ft_lstsize(list));
}
*/
