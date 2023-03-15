/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:48:16 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/07 18:57:19 by sabdulki         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	return (ft_find_next_prime (nb + 1));
}

/* #include <stdio.h>
int main()
{
	int nb = 6;
	int res; 
	res = ft_find_next_prime(nb);
	printf("%d\n", res);
} */