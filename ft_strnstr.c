/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:14:21 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/23 16:29:33 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* la fonction regarde dans la string big si elle contient la string little sur len caractères 
Retourne un pointeur sur big si little est nulle, un pointeur sur big au moment ou le
début de la string little est reconnue sur len char ou retourne la valeur nulle si little ne
se trouve pas sur big */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && (i + j) < len)
			{
				j++;
				if (little[j] == '\0')
					return ((char *)big + i);
			}
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	char	big[100] = "Hi dude what's going on ?";
	char	little[50] = "going";
	size_t	len = 8;

	printf("%s", ft_strnstr(big, little, len));
	
	return (0);
}*/
