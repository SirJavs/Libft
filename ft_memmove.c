/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamedina <jamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:01:04 by jamedina          #+#    #+#             */
/*   Updated: 2023/09/14 16:01:15 by jamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	char		*dest_ptr;
	const char	*src_ptr;

	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	if (dest_ptr > src_ptr)
	{
		dest_ptr += n;
		src_ptr += n;
		while (n-- > 0)
		{
			*(--dest_ptr) = *(--src_ptr);
		}
	}
	else if (dest_ptr < src_ptr)
	{
		while (n-- > 0)
		{
			*dest_ptr++ = *src_ptr++;
		}
	}
	return (dest);
}
