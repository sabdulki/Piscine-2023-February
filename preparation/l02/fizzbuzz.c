/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:54:43 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/13 19:19:53 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_len(int i)
{
	if (i < 10)
		return (1);
	else if (i > 10 && i < 100)
		return (2);
	else if (i == 100)
		return (3);
	return (0);
}

char ft_change(nb)
{
	int		n1;
	int		n2;
	char	temp_char;

	if (nb >= 10)
	{
		n1 = nb % 10;
		n2 = nb / 10;
		ft_change(n2);
	}
	else
	{
		n1 = nb;
	}
	temp_char = n1 + '0';
	write(1, &temp_char, 1);
	return (temp_char);
}

int main()
{
	int i;
	int len;;
	char c;
	
	i = 1;
	len = 1;
	while(i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz\n", 9);
		}
		else if (i % 3 == 0)
		{
			write(1, "fizz\n", 5);
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz\n", 5);
		}
		else
		{
			len = ft_len(i);
			c = ft_change(i);
			write(1, "\n", 1);
		}
		i++;
	}
	return (0);
}