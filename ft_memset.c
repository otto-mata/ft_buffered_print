/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:01:51 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/06 10:08:16 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffered.h"

void	*ft_memset(void *d, int c, size_t sz)
{
	unsigned char	*ptr;

	ptr = d;
	while (sz-- > 0)
		*ptr++ = c;
	return (d);
}
