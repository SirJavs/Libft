/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamedina <jamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:26:35 by jamedina          #+#    #+#             */
/*   Updated: 2023/09/14 21:32:20 by jamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *source, const char *dest, unsigned int len)
{
	unsigned int	dest_len;
	unsigned int	i;

	if (*dest == '\0')
		return ((char *)source);
	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (*source != '\0' && len >= dest_len)
	{
		if (*source == *dest)
		{
			i = 0;
			while (i < dest_len && source[i] == dest[i])
				i++;
			if (i == dest_len)
				return ((char *)source);
		}
		source++;
		len--;
	}
	return ((char *)0);
}
