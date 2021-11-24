/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:30:41 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/11/24 18:36:59 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char		*src;
	int			neg;
	int			num;
	long long	an;

	src = (char *)str;
	while (('\t' <= *src && *src <= '\r') || *src == ' ')
		src++;
	neg = 1;
	if (*src == '-')
		neg = -1;
	if (*src == '+' || *src == '-')
		src++;
	an = 0;
	while (ft_isdigit(*src))
	{
		num = (*src - '0');
		if ((922337203685477580 <= an && 7 < num) || 922337203685477581 <= an)
			return (-1);
		if ((an <= -922337203685477580 && 8 < num) || an <= -922337203685477581)
			return (0);
		an = an * 10 + neg * num;
		src++;
	}
	return (an);
}
