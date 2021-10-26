/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 23:50:40 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/10/16 00:34:48 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*p1;
	const char	*p2;

	p1 = (char *) dst;
	p2 = (const char *) src;
	while (n-- > 0)
		*p1++ = *p2++;
	return (dst);
}

int	main(int argc, char *argv[])
{
	printf("%s\n", argv[1]);
	printf("%s\n", argv[2]);
	memcpy(argv[1], argv[2], atoi(argv[3]));
	ft_memcpy(argv[1], argv[2], atoi(argv[3]));
	printf("%s\n", argv[1]);
	printf("%s\n", argv[2]);
	return (argc);
}
