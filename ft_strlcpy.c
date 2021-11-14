/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw </var/mail/ktanigaw>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:28:57 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/11/14 12:45:05 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dst == NULL || src == NULL)
		return (0);
	if (srclen + 1 < dstsize)
	{
		ft_memcpy(dst, src, srclen + 1);
	}
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (srclen);
}
