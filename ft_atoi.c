/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamedina <jamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:37:31 by jamedina          #+#    #+#             */
/*   Updated: 2023/07/11 16:35:22 by jamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	espacios(char *str, int *punt_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*punt_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	signo;
	int	resultado;
	int	i;

	resultado = 0;
	signo = espacios(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		resultado *= 10;
		resultado += str[i] - 48;
		i++;
	}
	resultado *= signo;
	return (resultado);
}
