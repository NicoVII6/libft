/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:36:07 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/23 15:00:04 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* alloue memoire et retourne une chaine de caracteres resultant 
de la concatenation des strings s1 et s2. Retourne la nouvelle string 
et null si l'allocation echoue */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(*str) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	i = 0;
	while (*s1)
	{
		str[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		str[i] = *s2;
		i++;
		s2++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	const char	*s1 = "Hello";
	const char	*s2 = "";

	printf("%s\n", ft_strjoin(s1, s2));

	return (0);
}*/