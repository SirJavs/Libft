/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamedina <jamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:00:29 by jamedina          #+#    #+#             */
/*   Updated: 2023/07/18 14:48:31 by jamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	i = 0;
	while ((dest[i] != '\0') && (i < (size - 1)))
	{
		dest[i] = src[count];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
