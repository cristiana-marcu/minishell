/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:39:34 by cmarcu            #+#    #+#             */
/*   Updated: 2021/02/05 11:57:47 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	a;

	if (!s)
		return (NULL);
	if (!(p = (char*)malloc(sizeof(*s) * (len + 1))))
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
		start = ft_strlen(s);
	a = 0;
	while (a < len && s[start])
	{
		p[a] = s[start + a];
		a++;
	}
	p[a] = '\0';
	return (p);
}
