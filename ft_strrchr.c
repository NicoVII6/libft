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
	if (*s == (char) c)
		last_o = ((char *) s);
	return (last_o);
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