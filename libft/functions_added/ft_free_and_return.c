/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_and_return.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:27:25 by cjulienn          #+#    #+#             */
/*   Updated: 2022/04/01 19:23:50 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions_added.h"

char	*ft_free_and_return(char **str_to_free, char *rtn_value)
{
	if (*str_to_free)
	{
		free(*str_to_free);
		*str_to_free = NULL;
	}
	return (rtn_value);
}
