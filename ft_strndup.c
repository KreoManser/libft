/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzubat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:36:06 by hzubat            #+#    #+#             */
/*   Updated: 2021/10/23 15:36:08 by hzubat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*blank;

	blank = ft_strnew(n);
	if (!(blank))
		return (((void *) 0));
	ft_strncpy(blank, s, n);
	return (blank);
}
