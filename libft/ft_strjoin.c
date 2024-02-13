/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:12:58 by pmendez-          #+#    #+#             */
/*   Updated: 2023/09/16 20:08:11 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*ptr1;
	char	*ptr2;
	size_t	i;
	size_t	j;

	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	i = 0;
	j = 0;
	str = malloc(((ft_strlen(ptr1) + ft_strlen(ptr2)) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
/*
int main() {
  const char str1[] = "This is a string";
  const char str2[] = " with whitespace.";
  char *joined_str;

  joined_str = ft_strjoin(str1, str2);

  if (joined_str == NULL) {
    printf("The ft_strjoin() function failed.\n");
    return (1);
  }
  printf("The joined string is: %s\n", joined_str);
  return 0;
}
*/
