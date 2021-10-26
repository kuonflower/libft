/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 00:35:08 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/10/16 19:29:00 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*p1;
	const char	*p2;

	p1 = (char *) dst;
	p2 = (const char *) src;
	if ()
	{
		p1 += len - 1;
		p2 += len - 1;
		while (len-- > 0)
			*p1-- = *p2--;
	}
	else
	{
		while (len-- > 0)
			*p1-- = *p2--;
	}
	return (dst);
}

int main(int argc, char *argv[])
{
	printf("%s\n", argv[1]);
	printf("%s\n", argv[2]);
	printf("%s\n", argv[3]);
	return (argc);
}
