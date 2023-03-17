/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 03:03:09 by cvu               #+#    #+#             */
/*   Updated: 2023/03/16 03:03:22 by cvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_char(char c, t_flags flags)
{
	int	count;

	count = 0;
	if (flags.left == 1)
		count += ft_print_c(c);
	count += ft_pad_width(flags.width, 1, flags.zero);
	if (flags.left == 0)
		count += ft_print_c(c);
	return (count);
}
