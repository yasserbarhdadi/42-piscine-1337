/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:41:30 by yabarhda          #+#    #+#             */
/*   Updated: 2024/07/02 12:11:24 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				return_value;

	i = 0;
	return_value = 0;
	while ((s1[i] != '\0' && n > i) || (n > i && s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
		{
			return_value = 0;
		}
		else
		{
			return_value = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (return_value);
}
