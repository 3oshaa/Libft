/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalketbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:32:06 by oalketbi          #+#    #+#             */
/*   Updated: 2021/10/12 17:02:36 by oalketbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	i = 0;
	ptr1 = (char *)src;
	ptr2 = (char *)dest;
	if (ptr1 == NULL && ptr2 == NULL)
		return (NULL);
	while (i < count)
	{
		ptr2[i] = ptr1[i];
		i++;
	}
	return (dest);
}
