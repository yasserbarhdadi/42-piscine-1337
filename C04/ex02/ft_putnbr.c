/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:58:35 by yabarhda          #+#    #+#             */
/*   Updated: 2024/07/06 18:46:49 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_ft(int num)
{
	char	c;

	if (num < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}
	if (num == 0)
		return ;
	ft_putnbr_ft(num / 10);
	num %= 10;
	c = num + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == 2147483647)
	{
		write(1, "2147483647", 10);
		return ;
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0 || nb > 9)
		ft_putnbr_ft(nb);
	if (nb <= 9 && nb >= 0)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}
