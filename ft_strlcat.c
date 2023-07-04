/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joker <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 22:39:28 by joker             #+#    #+#             */
/*   Updated: 2021/10/12 17:34:54 by oalketbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	j;
	size_t	src_size;

	src_size = 0;
	dest_size = 0;
	j = 0;
	while (src[src_size])
		src_size++;
	if (size == 0)
		return (src_size);
	while (dest[dest_size])
		dest_size++;
	while (src[j] && (dest_size + j) < size - 1)
	{
		dest[dest_size + j] = src[j];
		j++;
	}
	dest[dest_size + j] = '\0';
	if (size > dest_size)
		return (dest_size + src_size);
	return (size + src_size);
}
