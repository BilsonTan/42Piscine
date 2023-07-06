/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bitan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:10:17 by bitan             #+#    #+#             */
/*   Updated: 2023/07/06 22:56:58 by bitan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int 	strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return i;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int 	i;
	int	temp_size;
	char	*str	

	whil
	temp_size = size;
	str = malloc(sizeof(char) * 
}
