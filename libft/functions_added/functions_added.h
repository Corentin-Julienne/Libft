/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_added.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:11:46 by cjulienn          #+#    #+#             */
/*   Updated: 2022/04/01 19:26:25 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_ADDED_H
# define FUNCTIONS_ADDED_H

# include "../libft_vanilla.h"

char	*ft_free_and_return(char **str_to_free, char *rtn_value);
size_t	ft_intlen_base(unsigned long long num, size_t base);
char	*ft_lltoa(long long n);
char	*ft_protec_strdup(const char *str);
void	ft_putlnbr_base(unsigned long nb, char *base);
void	ft_putlnbr_fd(long long n, int fd);
char	*ft_strjoin_and_free(const char *s1, const char *s2);


#endif
