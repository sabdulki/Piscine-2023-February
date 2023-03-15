/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:29:34 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/06 11:18:05 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_negative(int nb)
{
	int		n1;
	int		n2;
	char	temp_char;

	if (nb <= -10)
	{
		n1 = nb % 10 * -1;
		n2 = nb / 10;
		print_negative(n2);
	}
	else
	{
		n1 = nb * -1;
		write(1, "-", 1);
	}
	temp_char = n1 + '0';
	write(1, &temp_char, 1);
}

void	print_positive(int nb)
{
	int		n1;
	int		n2;
	char	temp_char;

	if (nb >= 10)
	{
		n1 = nb % 10;
		n2 = nb / 10;
		print_positive(n2);
	}
	else
	{
		n1 = nb;
	}
	temp_char = n1 + '0';
	write(1, &temp_char, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0)
	{
		print_positive(nb);
	}
	else
	{
		print_negative(nb);
	}
}

/* int main()
{
	int nb;
	nb = -5;
	ft_putnbr(nb);

	in line 44 n2  go straight to temp_char;
} */