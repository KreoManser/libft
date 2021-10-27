/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzubat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:34:31 by hzubat            #+#    #+#             */
/*   Updated: 2021/10/23 15:34:32 by hzubat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*clone;
	size_t	size;

	size = ft_strlen((char *) s) + 1;
	clone = (char *)malloc(size);
	if (!clone)
		return ((void *) 0);
	ft_memcpy(clone, s, size);
	return (clone);
}
