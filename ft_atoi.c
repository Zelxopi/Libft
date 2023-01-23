/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 09:03:53 by mtrembla          #+#    #+#             */
/*   Updated: 2022/12/12 12:22:46 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	nb;
	int			negative;
	int			i;

	nb = 0;
	negative = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			negative *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i++] - '0');
		if ((nb * negative) > INT_MAX)
			return (-1);
		if ((nb * negative) < INT_MIN)
			return (0);
	}
	return (nb * negative);
}

// {
// 	long long	nb;
// 	int			negative;

// 	nb = 0;
// 	negative = 1;
// 	while ((*str >= 9 && *str <= 13) || *str == ' ')
// 		str++;
// 	if (*str == '-' || *str == '+')
// 	{
// 		if (*str == '-')
// 			negative *= -1;
// 		str++;
// 	}
// 	while (*str >= '0' && *str <= '9')
// 	{
// 		nb = nb * 10 + (*str - '0');
// 		if ((nb * negative) > INT_MAX)
// 			return (-1);
// 		if ((nb * negative) < INT_MIN)
// 			return (0);
// 		str++;
// 	}
// 	return (nb * negative);
// }
