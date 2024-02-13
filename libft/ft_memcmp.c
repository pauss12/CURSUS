/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:59:44 by pmendez-          #+#    #+#             */
/*   Updated: 2023/09/23 17:42:24 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	cont;
	char	*str1;
	char	*str2;

	cont = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (cont < n)
	{
		if (str1[cont] != str2[cont])
			return ((unsigned char)str1[cont] - (unsigned char)str2[cont]);
		cont++;
	}
	return (0);
}

/*
int main() {
  char s1[] = "Hola, mundo";
  char s2[] = "Hola, mundo";
  int resultado;

  resultado = ft_memcmp(s1, s2, 12);

  if (resultado == 0) {
    printf("Los dos strings son iguales.\n");
  } else if (resultado < 0) {
    printf("El primer string es menor que el segundo.\n");
  } else {
    printf("El primer string es mayor que el segundo.\n");
  }

  return 0;
}
*/
