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

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while ((char)big[i])
	{
		j = 0;
		if ((char)big[i] == (char)little[j])
		{
			while ((char)big[i + j] == (char)little[j] && (i + j) < len)
			{
				j++;
				if ((char)little[j] == '\0')
					return ((char *)&big[i]);
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
