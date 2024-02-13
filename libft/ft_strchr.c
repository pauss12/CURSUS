/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:03:30 by pmendez-          #+#    #+#             */
/*   Updated: 2023/09/16 20:11:27 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	cont;

	cont = 0;
	while (s[cont] != '\0')
	{
		if (s[cont] == (char)c)
			return ((char *)s + cont);
		cont++;
	}
	if ((char)c == '\0' && (char)s[cont] == '\0')
		return ((char *)s + cont);
	return (NULL);
}
/*
int main()
{
    char str[] = "This is a string";
    char *ptr;

    ptr = ft_strchr(str, '_');
    if (ptr != NULL)
    {
        printf("The first occurrence of 's' is at 
	index %ld\n", (ptr - str) + 1);
        printf("La frase que queda es [%s]\n", ptr);
    }
    else
    {
        printf("The character 's' was not found in the string\n");
    }

    return (0);
}
*/
