/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:13:47 by oprosvir          #+#    #+#             */
/*   Updated: 2023/07/07 11:42:08 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printnum(int n)
{
	long	num;
	char	c;
	int		count;

	num = (long)n;
	count = 0;
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
		count++;
	}
	if (num > 9)
	{
		count += ft_printnum(num / 10);
		count += ft_printnum(num % 10);
	}
	else
	{
		c = num + '0';
		write(1, &c, 1);
		count++;
	}
	return (count);
}
