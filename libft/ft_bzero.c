/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:32:33 by pmendez-          #+#    #+#             */
/*   Updated: 2023/09/12 16:53:21 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, int size)
{
	ft_memset(s, 0, size);
}
/*
int main()
{
	char str[] = "Hola Mundo";
	printf("Antes de ft_bzero: \"%s\"\n", str);
	ft_bzero(str, 5 * sizeof(char));
	printf("Después de ft_bzero: \"%s\"\n", str);
	return 0;
}
*/