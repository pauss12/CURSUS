/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:51:25 by pmendez-          #+#    #+#             */
/*   Updated: 2023/09/13 10:54:18 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			cont;

	ptr = (unsigned char *)s;
	cont = 0;
	while (cont < n)
	{
		if (ptr[cont] == (unsigned char)c)
			return (ptr + cont);
		cont++;
	}
	return (NULL);
}

/*
int main()
{
    char str[] = "Hola, mundo!";
    char *ptr;

    ptr = ft_memchr(str, 'o', 6);

    if (ptr != NULL)
    {
        printf("El carácter 'o' se encuentra en la posición %p\n", ptr);
    }
    else
    {
        printf("El carácter 'o' no se encuentra en la cadena\n");
    }

    return 0;
}
*/
