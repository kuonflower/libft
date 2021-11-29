/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 07:57:16 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/11/30 00:36:57 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned char	*str;
	size_t			i;

	str = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return ((char *)str);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	printf("original:%s\n", strdup(NULL));
	printf("ft:%s\n", ft_strdup(NULL));
	return (0);
}*/
