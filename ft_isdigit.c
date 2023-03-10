/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:04:00 by mtrembla          #+#    #+#             */
/*   Updated: 2022/10/04 13:08:42 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//test for 0 to 9 numbers
int	ft_isdigit(int c)
{
	if (c >= '0' || c <= '9')
		return (1);
	return (0);
}
