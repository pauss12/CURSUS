/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:19:11 by pmendez-          #+#    #+#             */
/*   Updated: 2024/01/22 19:20:33 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_character(char *str, char c)
{
	int	cont;
	int	numstr;

	cont = 0;
	numstr = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] != c)
		{
			numstr++;
			while (str[cont] != c && str[cont] != '\0')
				cont++;
		}
		else
			cont++;
	}
	return (numstr);
}

static char	*reserve_and_copy_str(char *str, char c, int *pos)
{
	char	*result;
	int		str_length;
	int		i;

	i = *pos;
	str_length = 0;
	result = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		str_length++;
		i++;
	}
	result = (char *)malloc(sizeof(char) * (str_length + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, str + *pos, str_length + 1);
	*pos += str_length;
	return (result);
}

static void	ft_freememory(char **result, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		numstr;
	int		j;
	int		pos;

	if (s == NULL)
		return (NULL);
	j = 0;
	pos = 0;
	numstr = count_character((char *)s, c);
	result = (char **)ft_calloc((numstr + 1), sizeof(char *));
	while (j < numstr && result != NULL)
	{
		while (s[pos] == c)
			pos++;
		result[j] = reserve_and_copy_str((char *)s, c, &pos);
		if (result[j] == NULL)
		{
			ft_freememory(result, j);
			return (NULL);
		}
		j++;
	}
	return (result);
}
/*
int main()
{
    char **solucion;
    char *s = "   Hola,     mundo,    ¿cómo, estás?    ";
    char c = ',';
    //char *s = "tres tristes tigres";
    //char c = 's';
    int contador;

    contador = 0;
    printf("La cadena original es %s\n", s);
    solucion = ft_split(s, c);
    printf("Cadena separada:\n");
    for (contador = 0; solucion[contador] != NULL; contador++)
    {
        printf("%s\n", solucion[contador]);
    }
    return (0);
}
*/
