/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:32:15 by mtrembla          #+#    #+#             */
/*   Updated: 2023/01/30 11:29:08 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *s1 = chaine préfixe
 *s2 = chaine suffixes

 retourne nouvelle chaine concaténant s1 et s2. NULL si échec
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	char	*out;

	new_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	out = new_str;
	if (s1)
		while (*s1)
			*new_str++ = *s1++;
	if (s2)
		while (*s2)
			*new_str++ = *s2++;
	*new_str = '\0';
	return (out);
}
