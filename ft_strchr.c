/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:01:51 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/06 10:09:56 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffered.h"

char	*ft_strchr(char const *s, int c)
{
	return ((char *)ft_memchr((void const *)s, c, ft_strlen(s) + 1));
}
