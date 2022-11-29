/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:58:55 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/23 14:57:07 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* alloue et retourne une chaine de caractères représentant l'entier (positif ou négatif) 
reçu en paramètre. Si l'allocation échoue, retourne NULL */

#include "libft.h"
#include <stdlib.h>

int	count_figures(long nb);

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;
	int		i;

	nb = n;
	len = count_figures(nb);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	str[0] = '0';
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	i = len - 1;
	while (nb)
	{
		str[i] = '0' + nb % 10;
		nb = nb / 10;
		i--;
	}
	str[len] = '\0';
	return (str);
}

int	count_figures(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	if (nb == 0)
		i++;
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int main()
{
	int	nb = -2147483647;
	char	*str;

	printf("%s\n", ft_itoa(nb));

	return (0);
}*/