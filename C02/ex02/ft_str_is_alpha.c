/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:15:06 by yabarhda          #+#    #+#             */
/*   Updated: 2024/06/29 16:54:30 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_true;

	i = 0;
	is_true = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			is_true = 1;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			is_true = 1;
		}
		else
		{
			is_true = 0;
			break ;
		}
		i++;
	}
	return (is_true);
}
