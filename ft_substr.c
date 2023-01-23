/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 08:55:39 by mtrembla          #+#    #+#             */
/*   Updated: 2023/01/10 15:10:57 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 *s= chaine source
 start = index début nouvelle chaine dans la chaine s
 len = taille max nouvelle chaine
 
 retourne nouvelle chaine issue de la chaine s. NULL si échec 
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	str = ft_calloc(sizeof(char), len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (start < ft_strlen(s) && i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

// {
// 	char	*substr;
// 	size_t	new_len;

// 	if (s == NULL)
// 		return (NULL);
// 	if ((unsigned int)ft_strlen(s) < start)
// 		return (ft_strdup(""));
// 	new_len = ft_strlen(s + start);
// 	if (new_len < len)
// 		len = new_len;
// 	substr = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!substr)
// 		return (NULL);
// 	ft_strlcpy(substr, s + start, len + 1);
// 	return (substr);
// }
