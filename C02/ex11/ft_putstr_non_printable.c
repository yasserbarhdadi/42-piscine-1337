/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:07:00 by yabarhda          #+#    #+#             */
/*   Updated: 2024/06/30 23:15:48 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_ln(char dev, char mod)
{
	write(1, "\\", 1);
	write(1, &dev, 1);
	write(1, &mod, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		dev;
	int		mod;
	char	*base;

	base = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			dev = str[i] / 16;
			mod = str[i] % 16;
			ft_print_ln(base[dev], base[mod]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
