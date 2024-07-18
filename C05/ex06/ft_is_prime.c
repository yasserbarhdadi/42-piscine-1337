/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:10:21 by yabarhda          #+#    #+#             */
/*   Updated: 2024/07/08 15:13:51 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	is_prime;

	i = 2;
	is_prime = 0;
	if (nb <= 0 || nb == 1)
		return (0);
	while (i <= nb)
	{
		if ((nb % i) == 0)
		{
			is_prime = 1;
		}
		else if (is_prime == 1)
			return (0);
		i++;
	}
	return (1);
}
