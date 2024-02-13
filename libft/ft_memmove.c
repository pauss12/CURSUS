/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:33:01 by pmendez-          #+#    #+#             */
/*   Updated: 2023/09/13 13:08:31 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, void *src, size_t len)
{
	char		*dest2;
	char		*src2;

	dest2 = (char *)dest;
	src2 = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
	{
		return (ft_memcpy(dest, src, len));
	}
	else
	{
		while (len > 0)
		{
			dest2[len - 1] = src2[len - 1];
			len--;
		}
	}
	return (dest);
}
/*
int main() {
  char str1[] = "Hello, world!";
  char str2[20];

  // Copia los primeros 10 caracteres de str1 a str2.
  ft_memmove(str2, str1, 10);

  printf("str2: %s\n", str2);

  return (0);
}
*/
