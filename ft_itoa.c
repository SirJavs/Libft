/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamedina <jamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:36:08 by jamedina          #+#    #+#             */
/*   Updated: 2023/09/19 18:08:28 by jamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(long i)
{
	size_t	j;

	j = 0;
	if (i == 0)
	{
		j++;
		return (j);
	}
	if (i < 0)
	{
		i = i * -1;
		j++;
	}
	while (i > 0)
	{
		i = i / 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nl;

	nl = n;
	len = ft_numlen(nl);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (nl < 0)
	{
		str[0] = '-';
		nl = nl * -1;
	}
	while (nl > 0)
	{
		str[len] = (nl % 10) + '0';
		nl = nl / 10;
		len--;
	}
	return (str);
}
