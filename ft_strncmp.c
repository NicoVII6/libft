/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:00:39 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/22 17:25:02 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* la fonction compare les string s1 et s2 sur une longueur n et retourne la valeur (-1) si la
valeur ascii de s1 et plus petite que valeur ascii de s2* et 1 dans le cas contraire et retourne
0 si les strings s1 et s2 sont les memes sur la longueur n.
pour qu'il n'y ait pas d'erreur lors de la comparaison des strings, on les cast en unsigned
char et ainsi on evite les erreurs si au depart les strings ne sont pas du meme type (une
signee (range du caractere entre -128 et 127) et l'autre non (range du caractere entre 0 et 255)*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	
	if (n == 0)
		return (0);
	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	char	s1[100] = "abcdef";
	char	s2[100] = "abc\375xx";
	int		n = 5;

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n));

	return (0);
}*/
