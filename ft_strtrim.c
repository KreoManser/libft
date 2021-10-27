/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzubat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:37:39 by hzubat            #+#    #+#             */
/*   Updated: 2021/10/23 15:37:40 by hzubat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rear;

	if (!s1 || !set)
		return (((void *) 0));
	while (*s1)
	{
		if (!(ft_strchr(set, *s1)))
			break ;
		s1++;
	}
	rear = (char *)s1 + (ft_strlen((char *)s1) - 1);
	while (rear >= s1)
	{
		if (!(ft_strchr(set, *rear)))
			break ;
		rear--;
	}
	return (ft_strndup(s1, ++rear - s1));
}
