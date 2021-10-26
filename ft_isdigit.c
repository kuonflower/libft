/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:58:11 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/10/14 20:09:10 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	printf("%d \n", ft_isdigit(*argv[1]));
	printf("%d \n", isdigit(*argv[1]));
	return (0);
}
