/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 12:28:56 by latang            #+#    #+#             */
/*   Updated: 2023/06/25 17:31:50 by bitan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_conditions(int col, int row, int r)
{
	int	c;

	if (col < 0 || row < 0)
		return ;
	while (r <= row)
	{
		c = 1;
		while (c <= col)
		{
			if ((c == 1 && r == 1) || (c == col && r == row))
				ft_putchar('/');
			else if ((c == 1 && r == row) || (c == col && r == 1))
				ft_putchar('\\');
			else if (c == 1 || c == col)
				ft_putchar('*');
			else if (r == 1 || r == row)
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}

void	rush(int col, int row)
{
	int	r;

	r = 1;
	ft_conditions(col, row, r);
}
