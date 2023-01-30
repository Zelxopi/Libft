/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:49:04 by mtrembla          #+#    #+#             */
/*   Updated: 2023/01/30 11:29:40 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_gnljoin(char *s, char c)
{
	char	*out;
	int		n;

	n = ft_strlen(s) + 2;
	out = malloc(sizeof(char) * n);
	out[--n] = '\0';
	out[--n] = c;
	if (s)
	{
		while (n--)
			out[n] = s[n];
		free(s);
	}
	return (out);
}

//gnl with auto free
char	*ft_gnl(int fd)
{
	char		c;
	static char	*line = NULL;

	if (line)
		free(line);
	line = NULL;
	while (read(fd, &c, 1) && (c != '\n' || line == NULL))
	{
		if (c == '\n')
			continue ;
		line = ft_gnljoin(line, c);
	}
	return (line);
}
