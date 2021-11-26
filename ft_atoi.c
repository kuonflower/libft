/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:30:41 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/11/26 18:34:34 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overflow_return(int sign_plus_minus)
{
	if (sign_plus_minus == 1)
		return (-1);
	else if (sign_plus_minus == -1)
		return (0);
	else
		return (-1);
}

int	ft_atoi(const char *str)
{
	char		*src;
	int			sign_plus_minus;
	long long	anser;

	src = (char *)str;
	while (('\t' <= *src && *src <= '\r') || *src == ' ')
		src++;
	sign_plus_minus = 1;
	if (*src == '-')
		sign_plus_minus = -1;
	if (*src == '+' || *src == '-')
		src++;
	anser = 0;
	while (ft_isdigit(*src))
	{
		if ((anser * 10) / 10 != anser)
			return (overflow_return(sign_plus_minus));
		anser = anser * 10 + sign_plus_minus * (*src++ - '0');
		if (sign_plus_minus * anser < 0)
			return (overflow_return(sign_plus_minus));
	}
	return ((int)anser);
}
