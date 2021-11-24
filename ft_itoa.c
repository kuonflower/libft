/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:33:31 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/11/24 11:33:58 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n)
{
	int	digit;

	digit = (n <= 0);
	while (n)
	{
		digit++;
		n /= 10;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*ans;
	int		digit;
	int		sign;

	sign = 1 - 2 * (n < 0);
	digit = intlen(n);
	ans = (char *)malloc(sizeof(char) * (digit + 1));
	if (!ans)
		return (NULL);
	ans[digit] = '\0';
	while (digit > 0)
	{
		if (n == 0 && sign < 0)
			ans[--digit] = '-';
		else
			ans[--digit] = n % 10 * sign + '0';
		n /= 10;
	}
	return (ans);
}
