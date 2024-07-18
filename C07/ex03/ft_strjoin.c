/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:37:13 by yabarhda          #+#    #+#             */
/*   Updated: 2024/07/14 16:33:14 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_counter(char *sep, int count)
{
	int	j;

	j = 0;
	while (sep[j])
	{
		count++;
		j++;
	}
	return (count);
}

int	ft_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			count++;
			j++;
		}
		if (i != size - 1)
			count = count_counter(sep, count);
		i++;
	}
	return (++count);
}

char	*add_sep(char *dest, char *sep, int *index)
{
	int	j;
	int	k;

	k = *index;
	j = 0;
	while (sep[j])
	{
		dest[k] = sep[j];
		k++;
		j++;
	}
	*index = k;
	return (dest);
}

char	*add_strs(char *dest, char c, int *kp, int *jp)
{
	int	j;
	int	k;

	k = *kp;
	j = *jp;
	dest[k] = c;
	*kp += 1;
	*jp += 1;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		k;

	if (size <= 0)
		return ((char *)malloc(sizeof(char)));
	dest = (char *)malloc(sizeof(char) * ft_strlen(size, strs, sep));
	if (!dest)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			add_strs(dest, strs[i][j], &k, &j);
		if (i != size - 1)
			add_sep(dest, sep, &k);
		i++;
	}
	dest[k] = '\0';
	return (dest);
}
