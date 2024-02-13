/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:34:18 by pmendez-          #+#    #+#             */
/*   Updated: 2023/09/28 18:20:18 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	nodo = (t_list *)malloc(sizeof(*nodo));
	if (nodo == NULL)
		return (NULL);
	nodo->content = content;
	nodo->next = NULL;
	return (nodo);
}
/*
int	main()
{
	t_list *nodo;
    char *contenido = "Hola mundo";

    nodo = ft_lstnew(contenido);
    if (nodo == (void *)0) {
        printf("Error al crear el elemento de lista.\n");
        return 1;
    }

    printf("El elemento de lista se creó correctamente.\n");

    // Liberar el elemento de lista.
    free(nodo);

    return 0;
}
*/
