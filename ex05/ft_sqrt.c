/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:24:31 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/15 14:11:06 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	low;
	int	high;
	int	mid;
	int	result;

	if (nb <= 0)
		return (0);
	low = 1;
	high = nb;
	result = 0;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (mid <= nb / mid)
		{
			result = mid;
			low = mid + 1;
		}
		else
			high = mid - 1;
	}
	if (result * result == nb)
		return (result);
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(2147483647));
	return (0);
}*/
