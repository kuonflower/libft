/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:08:12 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/11/26 13:55:42 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	slen;

	slen = ft_strlen(s);
	str = (char *)s;
	while (slen >= 0)
	{
		if ((unsigned char) str[slen] == (unsigned char) c)
			return (str + slen);
		if (slen == 0)
			break ;
		slen--;
	}
	return (NULL);
}
