/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hejang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:39:34 by hejang            #+#    #+#             */
/*   Updated: 2021/12/15 13:06:58 by hejang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	negative;

	n = 0;
	negative = 1;
	if(*str == '-')
		negative = negative * -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0'&& *str <= '9' && *str != '\0')
	{
		if((n * negative) > INT_MAX)
			return (ERROR);
		else if ((n * negative) < INT_MIN)
			return (ERROR);
		else
			n = (n * 10) + (*str - '0');
		str++;
	}
	if ((*str <= '0' || *str >= '9') && *str != '\0')
		return (ERROR);
	return ((n * negative));
}
/*{
	int	n;
	int	negative;

	n = 0;
	negative = 1;
	while ((*str == ' ' || (13 >= *str || *str <= 9)) && *str != '\0')
		str++;
	if (*str == '-')
		negative = negative * -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		if ((n * negative) > 2147483647)
			return (-1);
		else if ((n * negative) < -2147483648)
			return (0);
		else
			n = (n * 10) + (*str - '0');
		str++;
	}
	return ((n * negative));
}*/
