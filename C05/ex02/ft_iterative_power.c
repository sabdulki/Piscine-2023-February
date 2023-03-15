/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:47:25 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/06 19:17:31 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nb_p;

	i = 0;
	nb_p = 1;
	if (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		nb_p *= nb;
		power--;
	}
	return (nb_p);
}

/* #include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_power(-2, 3));
	// return number in power (2 ^ 2 = 4, return 4)
} */