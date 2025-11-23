/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancheab <ancheab@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:06:33 by ancheab           #+#    #+#             */
/*   Updated: 2025/11/04 18:24:21 by ancheab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static int	ft_numlen(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*strnum;
	int		size;
	long	nb;

	nb = n;
	size = ft_numlen(nb);
	strnum = malloc(sizeof(char) * (size + 1));
	if (!strnum)
		return (NULL);
	strnum[size] = '\0';
	if (nb == 0)
		strnum[0] = '0';
	if (nb < 0)
	{
		strnum[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		strnum[--size] = (nb % 10) + '0';
		nb /= 10;
	}
	return (strnum);
}
