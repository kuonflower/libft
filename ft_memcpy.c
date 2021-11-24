/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 23:50:40 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/11/24 17:44:49 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*p1;
	const unsigned char	*p2;

	if (dst == NULL && src == NULL)
		return (NULL);
	p1 = (unsigned char *) dst;
	p2 = (const unsigned char *) src;
	while (n-- > 0)
		*p1++ = *p2++;
	return (dst);
}
