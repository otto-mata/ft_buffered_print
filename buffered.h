/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffered.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:04:00 by tblochet          #+#    #+#             */
/*   Updated: 2024/12/06 10:14:11 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUFFERED_H
# define BUFFERED_H
# include <unistd.h>
# include <stdbool.h>
# include <stdlib.h>
# define BUFFER_SIZE 128

size_t	ft_strlen(char const *s);
void	*ft_memcpy(void *d, void const *s, size_t sz);
void	*ft_memset(void *d, int c, size_t sz);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(char const *s, int c);
void	*ft_memchr(void const *mem, int c, size_t len);
#endif