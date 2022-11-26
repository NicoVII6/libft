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
/* le if sert a faire la distinction entre le cas ou on arrive a la fin
de la string quand c est != de '\0' (retour NULL) et le cas ou c == '\0'
(retour a l'emplacement du '\0' ds la string) */

/*
#include <stdio.h>

int main()
{
	const char s[100] = "Coucou toi cindy";
	char	c = 'o';

	printf("%s\n", ft_strchr(s, c));
	
	return (0);
}*/