/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 20:42:47 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/10/16 19:12:30 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (n-- > 0)
		*p++ = '\0';
}

int	main(int argc, char *argv[])
{
	char	str[6];

	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = 'd';
	str[4] = 'e';
	printf("%s\n", str);
	bzero(str, -1);
	ft_bzero(str, 3);
	printf("%c\n", str[0]);
	printf("%c\n", str[1]);
	printf("%c\n", str[2]);
	printf("%c\n", str[3]);
	printf("%c\n", str[4]);
	printf("%s\n", argv[0]);
	return (argc);
}
