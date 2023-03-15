/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:47:25 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/06 19:12:50 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	temp;

	i = 1;
	temp = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (temp <= nb - 1)
	{
		temp++;
		i *= temp;
	}
	return (i);
}

/* #include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_factorial(5));
} */