/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 10:58:12 by yabarhda          #+#    #+#             */
/*   Updated: 2024/06/30 11:57:05 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(char str)
{
	int	is_true;

	is_true = 1;
	if (str >= 'a' && str <= 'z')
	{
		is_true = 1;
	}
	else if (str >= 'A' && str <= 'Z')
	{
		is_true = 1;
	}
	else
	{
		is_true = 0;
	}
	return (is_true);
}

int	ft_is_numeric(char str)
{
	int	is_true;

	is_true = 1;
	if (str >= '0' && str <= '9')
	{
		is_true = 1;
	}
	else
	{
		is_true = 0;
	}
	return (is_true);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	while (str[i] != '\0')
	{
		if (ft_is_alpha(str[i]) == 1 || ft_is_numeric(str[i]) == 1)
		{
			if (cap && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!cap && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			cap = 0;
		}
		else
		{
			cap = 1;
		}
		i++;
	}
	return (str);
}
