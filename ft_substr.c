/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:47:51 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/24 18:56:33 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* la fonction copie la string s à partir de l'index start une nouvelle string sur 
len caractères et retourne cette new string si la copie a fonctionné et retourne 0
sinon. Si la 1ere condition de la fonction est satisfaite, celle ci renvoie un
un pointeur sur une string vide */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_s;
	unsigned int	i;

	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	new_s = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (0);
	i = 0;
	while (i < len)
			new_s[i++] = s[start++];
	new_s[i] = '\0';
	return (new_s);
}
/*
#include <stdio.h>

int	main()
{
	char	*src = "salut tu vas bien";
	char	*dst;
	unsigned int	start = 31;
	size_t	len = 6;

	printf("%s\n", ft_substr(src, start, len));
	return(0);
}*/
