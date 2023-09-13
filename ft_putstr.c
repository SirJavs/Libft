/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamedina <jamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:00:48 by jamedina          #+#    #+#             */
/*   Updated: 2023/09/13 16:42:14 by jamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "libft.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
