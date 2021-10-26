/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 02:37:58 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/10/26 04:17:52 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"
size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	printf("%d\n\n", (int)srclen);
	return dstsize;
}

int	main(int argc, char *argv[])
{
	int a;
	a = ft_strlcat(argv[1], argv[2], argc);
	printf("%d", a);
}
