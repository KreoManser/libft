/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzubat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:29:25 by hzubat            #+#    #+#             */
/*   Updated: 2021/10/23 15:29:27 by hzubat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(void *s, size_t len)
{
	void	*ptr;

	ptr = ((void *) 0);
	if (s != NULL)
	{
		ptr = malloc(len + 1);
		ptr = ft_memcpy(ptr, s, len);
		((char *)ptr)[len] = '\0';
	}
	return (ptr);
}
