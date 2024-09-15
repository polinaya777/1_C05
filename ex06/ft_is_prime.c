/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:43:10 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/15 14:18:23 by pyarova          ###   ########.fr       */
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

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_is_prime(-1));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(9));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(17));
	printf("%d\n", ft_is_prime(2147483647));
	return (0);
}*/
