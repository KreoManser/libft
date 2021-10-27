/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzubat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:35:13 by hzubat            #+#    #+#             */
/*   Updated: 2021/10/23 15:35:15 by hzubat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen((char *)src));
	i = 0;
	while (size-- > 1 && *src)
	{
		*dst++ = *src++;
		i++;
	}
	*dst = '\0';
	while (*dst || *src)
	{
		if (*src++)
			i++;
	}
	return (i);
}
