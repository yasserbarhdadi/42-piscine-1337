/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 22:22:46 by yabarhda          #+#    #+#             */
/*   Updated: 2024/06/28 09:54:14 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_comma_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i != j)
			{
				ft_putchar((i / 10) + '0');
				ft_putchar((i % 10) + '0');
				ft_putchar(' ');
				ft_putchar((j / 10) + '0');
				ft_putchar((j % 10) + '0');
				if (i != 98)
				{
					ft_comma_space();
				}
			}
			j++;
		}
		i++;
	}
}
