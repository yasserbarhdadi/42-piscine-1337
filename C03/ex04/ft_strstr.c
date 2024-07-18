/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 01:13:27 by yabarhda          #+#    #+#             */
/*   Updated: 2024/07/03 13:31:18 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = 0;
	k = ft_strlen(to_find);
	l = ft_strlen(str);
	while (i <= l - k)
	{
		j = 0;
		while (j < k && str[i + j] == to_find[j])
		{
			j++;
		}
		if (j == k)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
