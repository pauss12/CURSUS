/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:10:43 by pmendez-          #+#    #+#             */
/*   Updated: 2023/09/22 15:33:51 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t dstsize)
{
	size_t	contador;
	size_t	tamsrc;

	contador = 0;
	if (dstsize == 0)
	{
		tamsrc = ft_strlen(src);
		return (tamsrc);
	}
	while (contador < dstsize - 1 && src[contador] != '\0')
	{
		dest[contador] = src[contador];
		contador++;
	}
	dest[contador] = '\0';
	tamsrc = 0;
	while (src[tamsrc] != '\0')
	{
		tamsrc++;
	}
	return (tamsrc);
}
/*
int main(void)
{
	char src[] = "Hola, mundo!";
	char dest[10];

	int tam_strlcpy = strlcpy(dest, src, 10);
	//int tam_ft_strlcpy = ft_strlcpy(dest, src, 10);

	printf("strlcpy(): %d y %s\n", tam_strlcpy, dest);
	//printf("ft_strlcpy(): %d y %s\n", tam_ft_strlcpy, dest);

	return 0;
}
*/
