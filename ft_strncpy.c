/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzubat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:35:59 by hzubat            #+#    #+#             */
/*   Updated: 2021/10/23 15:36:00 by hzubat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = len;
	while (a != len && src[a] != '\0')
	{
		dst[a] = src[a];
		a++;
		b--;
	}
	while (b != 0)
	{
		dst[a] = '\0';
		a++;
		b--;
	}
	return (dst);
}
