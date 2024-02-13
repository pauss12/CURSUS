/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:54:29 by pmendez-          #+#    #+#             */
/*   Updated: 2023/09/13 10:59:49 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cal_sig(int numminus, const char *str, int *i)
{
	if (str[*i] != '\0' && (str[*i] == '+' || str[*i] == '-'))
	{
		if (str[*i] == '-')
			numminus += 1;
		*i = *i + 1;
	}
	return (numminus);
}

int	ft_atoi(const char *str)
{
	int	sig;
	int	result;
	int	i;
	int	numminus;

	i = 0;
	result = 0;
	sig = 1;
	numminus = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (cal_sig(numminus, str, &i))
		sig = -1;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sig);
}
/*
int main()
{
	const char *str = "    -123a4";
    printf("%d", ft_atoi(str));
    return 0;
}
*/