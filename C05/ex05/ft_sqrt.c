/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:47:25 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/07 18:52:42 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 2147483647)
	{
		while (i < nb && i <= 46340)
		{
			i++;
			if (i * i == nb)
				return (i);
		}
	}
	return (0);
}

/* #include <stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(49));
	printf("%d\n", ft_sqrt(81));
	printf("%d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(-1));

	// example return 9 if nb = 81;
} */