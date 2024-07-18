/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:36:33 by yabarhda          #+#    #+#             */
/*   Updated: 2024/07/07 16:44:24 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	result = recursive_power(nb, power - 1);
	result *= nb;
	return (result);
}

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (recursive_power(nb, power));
}
