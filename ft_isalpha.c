/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:05:50 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/10/14 19:53:28 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int character)
{
	if (('A' <= character && character <= 'Z') || \
	('a' <= character && character <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	printf("%d\n", ft_isalpha(*argv[1]));
	printf("%d\n", isalpha(*argv[1]));
	printf("%d\n", argc);
	return (0);
}
