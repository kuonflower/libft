/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw </var/mail/ktanigaw>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 09:15:40 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/11/15 09:45:30 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*str;
	size_t		slen;

	slen = ft_strlen(s);
	str = (char *)s;
	while (islen >= 0)
	{
		if (str[slen] == c)
			return (str + slen);
		slen--;
	}
	return (NULL);
}
