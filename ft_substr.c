/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzubat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:37:50 by hzubat            #+#    #+#             */
/*   Updated: 2021/10/23 15:37:52 by hzubat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, int start, size_t len)
{
	char	*str;
	size_t	my_len;

	str = ((void *) 0);
	if (s != ((void *) 0))
	{
		my_len = ft_strlen(s);
		if (len > my_len)
			len = my_len;
		if (start > (int)my_len)
			start = (int)my_len;
		if (start + len > my_len)
			len = my_len - start;
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (str != ((void *) 0))
		{
			ft_memmove(str, s + start, len);
			str[len] = '\0';
		}
	}
	return (str);
}
