
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:21:36 by coder             #+#    #+#             */
/*   Updated: 2022/02/05 18:40:48 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int hgt;
	int wdh;

	if(x <= 0 || y <=0)
		write(1, "Voce inseriu um valor invalido\n", 31);
	else
	{
		hgt = 0;
		while(hgt < y)
		{
			wdh = 0;
			while(wdh < x)
			{
				if(hgt == 0 && wdh == 0)
					ft_putchar ('A');
				else if (hgt == 0 && wdh ==  (x - 1))
					ft_putchar ('C');
				else if(hgt == y-1 && (wdh == 0))
					ft_putchar ('C');
				else if(hgt == y-1 && (wdh == (x - 1)))
					ft_putchar ('A');
				else if((wdh == 0 || wdh == x -1 ) || (hgt == 0 || hgt == y - 1)) //else if(hgt == 0 || hgt == y-1 || wdh == 0 || wdh == x-1)
					ft_putchar ('B');
				else
					ft_putchar (' ');
				wdh++;
			}
			hgt ++;
			ft_putchar('\n');
		}
	}
}

