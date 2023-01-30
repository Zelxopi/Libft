/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 15:55:35 by mtrembla          #+#    #+#             */
/*   Updated: 2023/01/30 11:28:44 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//find string's length
size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	if (s)
		while (*s++)
			len++;
	return (len);
}
