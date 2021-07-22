/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 16:53:03 by amichalo          #+#    #+#             */
/*   Updated: 2021/07/10 13:13:39 by amichalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	ce;
	char	di;
	char	un;

	ce = '0';
	while (ce <= '7')
	{
		di = ce + 1;
		while (di <= '8')
		{
			un = di + 1;
			while (un <= '9')
			{
				write (1, &ce, 1);
				write (1, &di, 1);
				write (1, &un, 1);
				if (ce != '7')
					write (1, ", ", 2);
				un++;
			}
			di++;
		}
		ce++;
	}
}
