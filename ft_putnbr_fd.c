/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:09:32 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/11/24 14:51:41 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	long_n;

	long_n = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		long_n = -long_n;
	}
	if (long_n <= 9)
	{
		ft_putchar_fd(long_n + '0', fd);
	}
	else
	{
		ft_putnbr_fd(long_n / 10, fd);
		ft_putchar_fd(long_n % 10 + '0', fd);
	}
}
