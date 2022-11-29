/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:23:27 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/23 17:59:24 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* applique la fonction f a chaque caractere de la string passee en argument
pour creer une nouvelle string resultant des applications successives de f
Retourne la chaine de caractères résultant des applications successives de f
ou NULL si l'allocation échoue */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*buf;
	size_t	i;

	buf = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!buf)
		return (NULL);
	i = 0;
	while (s[i])
	{
		buf[i] = f(i, s[i]);
		i++;
	}
	buf[i] = '\0';
	return (buf);
}