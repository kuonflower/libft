/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 20:42:47 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/11/14 08:28:33 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

int	main(int argc, char *argv[])
{
	char	str[6];
	char	str1[6];

	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = 'd';
	str[4] = 'e';
	str1[0] = 'a';
    str1[1] = 'b';
	str1[2] = 'c';
    str1[3] = 'd';
    str1[4] = 'e';
	printf("%s\n", str);
	printf("%s\n", str1);
	bzero(str, 2);
	ft_bzero(str1, 2);
	printf("%c\n", str[0]);
	printf("%c\n", str[1]);
	printf("%c\n", str[2]);
	printf("%c\n", str[3]);
	printf("%c\n", str[4]);
	printf("%s\n", argv[0]);
	printf("%c\n", str1[0]);
	printf("%c\n", str1[1]);
	printf("%c\n", str1[2]);
	printf("%c\n", str1[3]);
	printf("%c\n", str1[4]);
	return (argc);
}
