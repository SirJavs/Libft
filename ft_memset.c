/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamedina <jamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:34:51 by jamedina          #+#    #+#             */
/*   Updated: 2023/09/14 15:34:59 by jamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int value, unsigned int num)
{
	char	*p;
	char	val;

	p = (char *)ptr;
	val = (char)value;
	while (num > 0)
	{
		*p = val;
		p++;
		num--;
	}
	return (ptr);
}
