/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzubat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:35:39 by hzubat            #+#    #+#             */
/*   Updated: 2021/10/23 15:35:40 by hzubat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	unsigned char	*out_str;

	if (!s || !f)
		return (((void *) 0));
	len = ft_strlen(s);
	out_str = malloc(sizeof(char) * (len + 1));
	if (!(out_str))
		return (((void *) 0));
	i = 0;
	while (s[i])
	{
		out_str[i] = f(i, s[i]);
		i++;
	}
	out_str[i] = '\0';
	return ((char *)out_str);
}
