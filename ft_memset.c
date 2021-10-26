/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:43:42 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/10/15 22:27:07 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t size)
{
	unsigned char	uc;
	unsigned char	*p;

	uc = c;
	p = (unsigned char *) s;
	while (size-- > 0)
		*p++ = c;
	return (s);
}

int	main(int argc, char *argv[])
{
	size_t	av3;

	av3 = atoi(argv[3]);
	printf("%s \n", argv[1]);
	printf("%s \n", argv[2]);
	printf("%s \n", argv[3]);
	memset(argv[1], 'f', av3);
	ft_memset(argv[2], 'f', av3);
	printf("%s \n", argv[1]);
	printf("%s \n", argv[2]);
	return (argc);
}
