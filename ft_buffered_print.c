/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffered_print.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 09:51:01 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/06 10:31:49 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffered.h"
#include <time.h>

static void	buffered_write(char const *s, bool _flush)
{
	static char		buffer[BUFFER_SIZE] = {0};
	bool			overflow;

	overflow = false;
	if (ft_strlen(s) + ft_strlen(buffer) > BUFFER_SIZE)
		overflow = true;
	else
		ft_strcat(buffer, s);
	if (ft_strchr(buffer, '\n') || _flush || overflow)
	{
		write(1, buffer, ft_strlen(buffer));
		ft_memset(buffer, 0, BUFFER_SIZE);
		if (overflow)
			ft_strcat(buffer, s);
	}
}

static void	_fflush(void)
{
	buffered_write("", true);
}

void	ft_buffered_print(char const *s)
{
	static bool	registered_flush = false;

	if (!registered_flush)
		atexit(&_fflush);
	if (!s)
		return ;
	buffered_write(s, false);
}
