/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:01:51 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/06 10:10:10 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffered.h"

void	*ft_memchr(void const *mem, int c, size_t len)
{
	unsigned char const	*src = (unsigned char const *)mem;

	while (len-- > 0)
	{
		if (*src == (unsigned char)c)
			return ((void *)src);
		src++;
	}
	return (0);
}
