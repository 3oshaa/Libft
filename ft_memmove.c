/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalketbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:54:45 by oalketbi          #+#    #+#             */
/*   Updated: 2021/10/12 17:06:33 by oalketbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t			i;
	unsigned char	*sr;
	unsigned char	*dst;

	i = 0;
	sr = (unsigned char *)src;
	dst = (unsigned char *)dest;
	if (sr < dst)
	{
		while (num--)
		{
			dst[num] = sr[num];
		}
	}
	else
		ft_memcpy(dest, src, num);
	return (dest);
}
