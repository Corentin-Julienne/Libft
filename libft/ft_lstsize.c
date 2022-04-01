/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:36:46 by cjulienn          #+#    #+#             */
/*   Updated: 2022/04/01 19:19:11 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vanilla.h"

int	ft_lstsize(t_list *lst)
{
	size_t		size;
	t_list		*lst_2;

	if (!lst)
		return (0);
	lst_2 = lst;
	size = 0;
	while (lst_2 != NULL)
	{
		size++;
		lst_2 = lst_2->next;
	}	
	return (size);
}
