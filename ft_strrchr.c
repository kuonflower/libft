/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw </var/mail/ktanigaw>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 09:15:40 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/11/21 17:55:23 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		slen;

	slen = ft_strlen(s);
	str = (char *)s;
	while (slen >= 0)
	{
		if ((unsigned char) str[slen] == (unsigned char) c)
			return (str + slen);
		slen--;
	}
	return (NULL);
}
