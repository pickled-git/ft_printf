/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:43:54 by oprosvir          #+#    #+#             */
/*   Updated: 2023/07/08 14:08:16 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printhex(unsigned int num, bool is_capital)
{
	char	*base_hex;
	int		count;

	count = 0;
	if (is_capital)
		base_hex = "0123456789ABCDEF";
	else
		base_hex = "0123456789abcdef";
	if (num >= 16)
	{
		count += ft_printhex(num / 16, is_capital);
	}
	count += ft_printchar(base_hex[num % 16]);
	return (count);
}
