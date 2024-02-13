/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:24:02 by pmendez-          #+#    #+#             */
/*   Updated: 2023/09/12 17:01:29 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *ptr, int c, size_t len)
{
	char	*p;

	p = (char *)ptr;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (ptr);
}
/*
int main()
{
	int contador;
	int arr[5] = {1, 2, 3, 4, 5};
	printf("Arreglo antes de memset:\n");
	contador = 0;
	while (contador < 5) {
		printf("%d ", arr[contador]);
		contador++;
  	 }
   	printf("\n");

	ft_memset(arr, 0, 3 * sizeof(int));
	printf("Arreglo después de memset:\n");
	contador = 0;
	while (contador < 5)
	{
		printf("%d ", arr[contador]);
		contador++;
	}
	printf("\n");
	return 0;
}
*/
