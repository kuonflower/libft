/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:32:31 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/11/26 23:33:18 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	int		set_chars[260];
	size_t	i;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (i < 260)
		set_chars[i++] = 0;
	while (*set)
		set_chars[(unsigned char)*set++] = 1;
	start = -1;
	while (s1[++start])
		if (!set_chars[(unsigned char)s1[start]])
			break ;
	len = ft_strlen(s1);
	while (start < --len)
		if (!set_chars[(unsigned char)s1[len]])
			break ;
	len = len - start + 1;
	return (ft_substr(s1, start, len));
}
