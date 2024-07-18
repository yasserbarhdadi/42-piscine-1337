/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:33:14 by yabarhda          #+#    #+#             */
/*   Updated: 2024/07/17 03:36:31 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	dup_check[256];
	int	index;

	i = 0;
	while (i < 256)
	{
		dup_check[i] = 0;
		i++;
	}
	i = 0;
	while (base[i])
	{
		index = base[i];
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (dup_check[index] == 1)
			return (0);
		dup_check[index] = 1;
		i++;
	}
	return (1);
}

void	ft_putnbr(long num, int dev, char *base)
{
	if (num < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}
	if (num == 0)
		return ;
	ft_putnbr(num / dev, dev, base);
	num %= dev;
	write(1, &base[num], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (len < 2 || check_base(base) == 0)
		return ;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	ft_putnbr(nbr, len, base);
}
