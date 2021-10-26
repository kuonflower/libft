/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 01:05:11 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/10/15 02:00:15 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>
int	ft_isprint(int c)
{
	if (' ' <= c && c <= '~')
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	printf("%d\n", ft_isprint(*argv[1]));
	printf("%d\n", isprint(*argv[1]));
	return (argc);
}
