/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:44:02 by yabarhda          #+#    #+#             */
/*   Updated: 2024/07/13 15:34:42 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	element_count(int min, int max)
{
	int	i;
	int	count;

	i = min;
	count = 0;
	while (i < max)
	{
		i++;
		count++;
	}
	return (count);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	count;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = min;
	count = element_count(min, max);
	*range = (int *)malloc(sizeof(int) * count);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (count);
}
