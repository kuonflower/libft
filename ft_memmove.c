/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 00:35:08 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/11/14 11:05:32 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p1;
	const unsigned char	*p2;

	if (dst == NULL && src == NULL)
		return (NULL);
	p1 = (unsigned char *) dst;
	p2 = (const unsigned char *) src;
	if (p2 < p1)
	{
		p1 += len - 1;
		p2 += len - 1;
		while (len-- > 0)
			*p1-- = *p2--;
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
