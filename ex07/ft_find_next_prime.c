/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:40:05 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/15 14:21:28 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	del;

	if (nb < 2)
		return (0);
	del = 2;
	while (del <= nb / del)
	{
		if (nb % del == 0)
			return (0);
		del++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (2);
	else
	{
		i = nb;
		while (i <= 2147483647)
		{
			if (ft_is_prime(i))
				return (i);
			i++;
		}
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(-1));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(8));
	printf("%d\n", ft_find_next_prime(1000));
	printf("%d\n", ft_find_next_prime(2147483647));
	return (0);
}*/
