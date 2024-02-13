/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:11:23 by pmendez-          #+#    #+#             */
/*   Updated: 2023/09/28 18:19:23 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (del == NULL || lst == NULL || *lst == NULL)
		return ;
	while (lst != NULL && *lst != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/*
int main()
{
	t_list *lst;

	lst = ft_lstnew(ft_strdup("hola"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("que")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("tal")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("estas")));

	printf("El tamaño de la lista es: %d\n", ft_lstsize(lst));
	ft_lstclear(&lst, free);
	printf("El tamaño de la lista es: %d\n", ft_lstsize(lst));
}
*/
