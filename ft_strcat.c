/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:02:31 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/06 10:07:42 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffered.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t const	dest_str_sz = ft_strlen(dest);
	size_t const	src_str_sz = ft_strlen(src);

	ft_memcpy(dest + dest_str_sz, src, src_str_sz);
	dest[dest_str_sz + src_str_sz] = 0;
	return (dest);
}
