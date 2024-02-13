/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:45:12 by pmendez-          #+#    #+#             */
/*   Updated: 2023/09/23 17:13:57 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	contador;
	char	*dest;
	char	*src;

	dest = (char *)s1;
	src = (char *)s2;
	contador = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (contador < n)
	{
		dest[contador] = src[contador];
		contador++;
	}
	return (dest);
}
/*
int main() {
    char source[] = "Hello, World!";
    char destination[20];

   ft_memcpy(destination, source, sizeof(source));

    printf("Cadena destino: %s\n", destination);

    return 0;
}
*/
