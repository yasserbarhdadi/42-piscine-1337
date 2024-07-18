/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 06:45:16 by yabarhda          #+#    #+#             */
/*   Updated: 2024/07/16 23:05:18 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (base[i] == '-' || base[i] == '+' || base[i] == 32
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		if (dup_check[index] == 1)
			return (0);
		dup_check[index] = 1;
		i++;
	}
	return (1);
}

int	check_str(int i, char *str, char *base, int len)
{
	int	j;
	int	is_present;
	int	result;

	result = 0;
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
			{
				is_present = 1;
				break ;
			}
			j++;
		}
		if (!is_present)
			return (result);
		is_present = 0;
		result = result * len + j;
		i++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	sign;
	int	len;

	i = 0;
	j = 0;
	sign = 1;
	len = ft_strlen(base);
	if (!ft_strlen(str) || len < 2 || !len || !check_base(base))
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (check_str(i, str, base, len) * sign);
}
