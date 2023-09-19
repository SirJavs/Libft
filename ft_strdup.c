/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamedina <jamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:57:31 by jamedina          #+#    #+#             */
/*   Updated: 2023/09/18 18:17:15 by jamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ss1;
	char	*i;
	size_t	j;

	ss1 = (char *)s1;
	i = (char *)malloc((ft_strlen(ss1) + 1));
	if (i == NULL)
		return (NULL);
	j = 0;
	while (ss1[j] != '\0')
	{
		i[j] = ss1[j];
		j++;
	}
	i[j] = '\0';
	return (i);
}
