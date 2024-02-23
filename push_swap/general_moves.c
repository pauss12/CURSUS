/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:17:49 by pmendez-          #+#    #+#             */
/*   Updated: 2024/02/04 17:05:26 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_and_rotate(t_lists **list_a)
{
	swap_a(list_a);
	rotate_a(list_a);
}

void	rotate_and_swap(t_lists **list_a)
{
	rotate_a(list_a);
	swap_a(list_a);
}
