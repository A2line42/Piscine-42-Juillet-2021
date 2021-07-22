/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:07:08 by amichalo          #+#    #+#             */
/*   Updated: 2021/07/21 15:23:10 by amichalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	fend;

	i = 0;
	j = 0;
	fend = 0;
	if (to_find[0] == '\0')
		return (str);
	while (to_find[fend] != '\0')
		fend++;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
			j++;
		else
			j = 0;
		if (j == fend)
			return (&str[i - fend + 1]);
		i++;
	}
	return (NULL);
}
