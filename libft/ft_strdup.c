/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:22:07 by pmendez-          #+#    #+#             */
/*   Updated: 2023/09/23 18:28:33 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*dest;
	int		contador;
	char	*str1;

	str1 = (char *)s1;
	len = 0;
	contador = 0;
	while (str1[len] != '\0')
		len++;
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (contador <= len)
	{
		dest[contador] = str1[contador];
		contador++;
	}
	return (dest);
}
/*
int	main(void)
{
	char *final;
	
	final = ft_strdup("Hola, Mundo!");
	printf("%s\n", final);

	free(final);
}
*/
