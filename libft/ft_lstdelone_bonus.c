/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:41:54 by pmendez-          #+#    #+#             */
/*   Updated: 2023/09/28 18:18:57 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
int main()
{
    // Create a new element to add to the linked list.
    t_list  *new_element;
    
    new_element = ft_lstnew(ft_strdup("Hello World!"));
	
	t_list *head;
    
    head = ft_lstnew(ft_strdup("hola buenas"));
    // Add the new element to the end of the linked list.
    ft_lstadd_back(&new_element, head);

    //Imprimir el contenido del nodo head
    printf("El contenido del nodo head es %s\n", head->content);

    // Delete the new element from the linked list using ft_lstdelone().
    ft_lstdelone(head, NULL);

    // Check if the linked list is empty.
    if (head == (void *)0)
    {
        printf("The linked list is empty.\n");
    }

    return 0;
}
*/
