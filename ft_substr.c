/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:29:34 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/11/27 01:39:10 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start || len == 0)
		return (ft_strdup(""));
	str = (char *)malloc(len + 1);
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

 #include <stdio.h>
 int        main(void) 
 {
     char str[] = "0123456";
     printf("3456: %s\n", ft_substr(str, 3, 4));
     printf("01234: %s\n", ft_substr(str, 0, 5));
     printf("none: %s\n", ft_substr(str, 9, 4));
     printf("6: %s\n", ft_substr(str, 6, 10));
     printf("none:%s\n", ft_substr("", 5, 0));
     printf("none: %s\n", ft_substr(str, 0, 0));
     printf("%s\n", ft_substr(NULL, 3, 0));
     printf("%s\n\n",str);
     char * s = ft_substr("tripouille", 0, 42000);

     printf("ft: %d\n",strcmp(s, "tripouille"));
     printf("ft: %s : %lu",s, strlen("tripouille") + 1);

     return (0);
 }
