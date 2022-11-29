/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:13:51 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/23 16:15:28 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* la fonction parcourt la string s à la recherche de la dernière occurence de c qu'elle contient 
Retourne la valeur nulle si c n'apparait pas dans s
Retourne le pointeur de la dernière occurence de c dans s sinon */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_o;

	last_o = 0;
	while (*s != '\0')
	{
		if (*s == (char) c)
			last_o = (char *) s;
		s++;
	}
	if (last_o != 0)
		return (last_o);
	else
		return (NULL);
}
/*
#include <stdio.h>

int main()
{
	const char s[100] = "Coucou toi cindy";
	char	c = 'i';

	printf("%s\n", ft_strrchr(s, c));
	
	return (0);
}*/