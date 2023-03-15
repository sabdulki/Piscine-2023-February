/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:47:25 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/07 18:54:08 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	counter;

	counter = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (counter <= nb / counter)
	{
		if (nb % counter == 0)
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

/* #include <stdio.h>
int main()
{
	int counter = -3;
	while (counter < 50)
	{
		printf("%d - %d\n",counter, ft_is_prime(counter));
		counter++;
	}
	printf("%d result \n", ft_is_prime(300055));
} */