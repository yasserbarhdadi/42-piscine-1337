/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabarhda <yabarhda@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 23:46:27 by yabarhda          #+#    #+#             */
/*   Updated: 2024/07/07 23:49:38 by yabarhda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recursion_fibonacci(int index, int *i, int *j)
{
	int	result;

	result = 1;
	if (index == 2)
		return (1);
	result = recursion_fibonacci(index - 1, i, j);
	*j = result;
	result += *i;
	*i = *j;
	return (result);
}

int	ft_fibonacci(int index)
{
	int	i;
	int	j;
	int	*pj;
	int	*pi;

	i = 1;
	j = 0;
	pj = &j;
	pi = &i;
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	return (recursion_fibonacci(index, pi, pj));
}
