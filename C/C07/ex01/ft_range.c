/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bitan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:41:37 by bitan             #+#    #+#             */
/*   Updated: 2023/07/03 20:07:19 by bitan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	i = max - min;
	arr = (int *)malloc(sizeof(int) * (i));
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (max > min)
	{
		arr[i] = min;
		min++;
		i++; 
	}
	return (arr);
}
