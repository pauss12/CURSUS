/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:46:57 by pmendez-          #+#    #+#             */
/*   Updated: 2023/09/28 18:20:04 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*aux;

	aux = lst;
	while (aux != NULL)
	{
		f(aux->content);
		aux = aux->next;
	}
}
/*
int main()
{
    t_list *lst;

    lst = ft_lstnew(ft_strdup("Hola"));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Que")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Tal")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Estas")));

    while (lst != NULL)
    {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;

        if (lst == NULL)
            printf("%s\n", (char *)lst->content);
    }

    ft_lstiter(lst, f);

    while (lst != NULL)
    {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }
}
*/
