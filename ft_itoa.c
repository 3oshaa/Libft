/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joker <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:12:26 by joker             #+#    #+#             */
/*   Updated: 2021/10/13 17:45:29 by oalketbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_num_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
	{
		size++;
		n *= -1;
	}
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	ft_put_res(char *res, int i, int n, int size)
{
	while (size > i)
	{
		res[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	int		size;
	char	*res;

	i = 0;
	size = ft_num_size(n);
	res = (char *)malloc(sizeof(char) * size + 1);
	if (!res)
		return (0);
	if (n == -2147483648)
	{
		ft_strlcpy(res, "-2147483648", size + 1);
	}
	else
	{
		if (n < 0)
		{
			res[0] = '-';
			n = -n;
			i++;
		}
		ft_put_res(res, i, n, size);
		res[size] = '\0';
	}
	return (res);
}
