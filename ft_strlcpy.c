/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:39:36 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/22 15:37:19 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* copie la chaine de caractères src dans la chaine de caractères dst 
retourne la taille de la string src */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < (len - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	char	src[50] = "S@lut tout le monde !!";
	char	dst[100] = "";
	size_t	len = 7;

	ft_strlcpy(dst, src, len);
	printf("%s\n", dst);

	return(0);

}*/