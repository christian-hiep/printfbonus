/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 03:03:45 by cvu               #+#    #+#             */
/*   Updated: 2023/03/16 03:03:58 by cvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pad_width(int total_width, int size, int zero)
{
	int	count;

	count = 0;
	while (total_width - size > 0)
	{
		if (zero)
			count += ft_print_c('0');
		else
			count += ft_print_c(' ');
		total_width--;
	}
	return (count);
}
