/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanigaw <ktanigaw@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:05:30 by ktanigaw          #+#    #+#             */
/*   Updated: 2021/11/24 10:33:12 by ktanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_ans_memory(char **ans)
{
	size_t	i;

	i = 0;
	while (ans[i])
	{
		free(ans[i]);
		ans[i] = NULL;
		i++;
	}
	free(ans);
	return (NULL);
}

static char	**cut_src(char const *s, char c, char **ans)
{
	const char	*cut_point;
	size_t		len;
	size_t		i;

	i = 0;
	while (ans != NULL && *s)
	{
		cut_point = ft_strchr(s, c);
		if (cut_point == NULL)
			cut_point = s + ft_strlen(s);
		len = cut_point - s;
		if (0 < len)
		{
			ans[i] = ft_substr(s, 0, len);
			if (ans[i++] == NULL)
				ans = free_ans_memory(ans);
		}
		s += len + (s[len] != '\0');
	}
	ans[i] = NULL;
	return (ans);
}

static size_t	split_quantity(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s++ != c && (*s == c || *s == '0'))
			count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;

	if (!s)
		return (NULL);
	ans = (char **)malloc(sizeof(char *) * (split_quantity(s, c) + 1 ));
	if (!ans)
		return (NULL);
	return (cut_src(s, c, ans));
}
