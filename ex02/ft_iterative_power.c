/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:24:40 by pyarova           #+#    #+#             */
/*   Updated: 2024/09/12 21:55:43 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(5, -1));
	printf("%d\n", ft_iterative_power(5, 0));
	printf("%d\n", ft_iterative_power(5, 1));
	printf("%d\n", ft_iterative_power(5, 2));
	printf("%d\n", ft_iterative_power(5, 100));
	return (0);
}*/
