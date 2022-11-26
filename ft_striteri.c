/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:19:54 by ndecotti          #+#    #+#             */
/*   Updated: 2022/11/23 12:50:31 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* applique le fonction f a chaque caractere de la string transmise en argument
chaque caractere est transmis par adresse a f, afin d'etre modifiable si
necessaire. ne retourne pas de valeur */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
