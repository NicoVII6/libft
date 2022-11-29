/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:38:07 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/22 16:20:53 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* la fonction retourne la première occurence de c dans la string s 
si la fonction ne trouve pas c dans s, elle retourne NULL */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char) c && *s != '\0')
		s++;
	if (*s == '\0' && (char) c != '\0')
		return (NULL);
	else
		return ((char *) s);
}

#include <stdio.h>

int main()
{
	const char s[100] = "Coucou toi cindy";
	char	c = 'o';

	printf("%s\n", ft_strchr(s, c));
	
	return (0);
}*/