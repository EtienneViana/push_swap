/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 12:07:54 by eviana            #+#    #+#             */
/*   Updated: 2019/02/25 15:03:33 by eviana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_factorial(int nb)
{
	if ((nb < 0) || (nb > 12))
		return (0);
	else if (nb == 0)
		return (1);
	return (nb * ft_factorial(nb - 1));
}