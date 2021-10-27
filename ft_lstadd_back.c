/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzubat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:25:50 by hzubat            #+#    #+#             */
/*   Updated: 2021/10/23 15:25:51 by hzubat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **last, t_list *new)
{
	t_list	*last_elem;

	if (!*last)
	{
		*last = new;
		return ;
	}
	last_elem = ft_lstlast(*last);
	last_elem->next = new;
}
