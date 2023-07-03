/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bitan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 20:23:59 by bitan             #+#    #+#             */
/*   Updated: 2023/07/03 20:43:37 by bitan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{	
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	arr = malloc(sizeof(int) * (i));
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range =  arr;
	i = 0;
	while (max > min)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (i); 
}
