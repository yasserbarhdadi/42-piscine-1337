/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:29:47 by yabarhda          #+#    #+#             */
/*   Updated: 2024/07/13 12:35:20 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	count;
	int	i;
	int	*arr;

	if (min >= max)
		return (NULL);
	i = min;
	count = 0;
	while (i < max)
	{
		i++;
		count++;
	}
	arr = (int *)malloc(sizeof(int) * count);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
