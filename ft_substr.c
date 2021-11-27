/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:29:34 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/11/27 13:32:02 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	malloc_size;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start || len == 0)
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		malloc_size = ft_strlen(s) - start;
	else
		malloc_size = len;
	str = (char *)malloc(malloc_size + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
