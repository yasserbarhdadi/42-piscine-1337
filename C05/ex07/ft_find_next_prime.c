/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:26:46 by yabarhda          #+#    #+#             */
/*   Updated: 2024/07/08 15:28:22 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	is_prime;

	i = 2;
	is_prime = 0;
	while (i < nb)
	{
		if ((nb % i) == 0)
		{
			is_prime = 1;
		}
		else if (is_prime == 1)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (i);
}
