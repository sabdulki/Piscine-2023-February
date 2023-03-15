/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:17:14 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/06 11:26:44 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *nbr)
{
	int	counter;

	counter = 0;
	while (nbr[counter])
	{
		if (nbr[counter] < '0' || nbr[counter] > '9')
		{
			return (counter);
		}
		counter++;
	}
	return (counter);
}

int	right_int(int digit, int length)
{
	int	degree;
	int	counter;
	int	count;

	counter = 0;
	count = 0;
	degree = length - 1;
	while (counter < degree)
	{
		digit = digit * 10;
		degree--;
	}
	return (digit);
}

char	*first_number(char *str, int *minus)
{
	int	i;

	i = 0;
	*minus = 1;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			return (&str[i]);
		}
		else if (str[i] == '-')
		{
			*minus *= -1;
		}
		else if (str[i] != '-' && str[i] != '+' && str[i] != ' ' && \
		str[i] != '\f' && str[i] != '\n' && str[i] != '\r' && \
		str[i] != '\t' && str[i] != '\v')
		{
			*minus = 0;
			return (&str[i]);
		}
		i++;
	}
	return (&str[i]);
}

int	ft_atoi(char *str)
{
	int		counter;
	int		length;
	int		res;
	char	*nbr;
	int		minus;

	counter = 0;
	res = 0;
	nbr = first_number(str, &minus);
	if (!(minus))
		return (res);
	length = ft_strlen(nbr);
	while (nbr[counter] != '\0')
	{
		if (nbr[counter] < '0' || nbr[counter] > '9')
			break ;
		res += right_int(nbr[counter] - '0', length - counter);
		counter++;
	}
	res = res * minus;
	return (res);
}

/* #include <stdio.h>
int main()
{
	printf("%d\n", ft_atoi("    \n    --++125g67a-08g"));
	printf("%d\n", ft_atoi("-++ dfk-125g67a-08g"));
	printf("%d\n", ft_atoi("-+-+ -125 67a-08g"));
	printf("%d\n", ft_atoi("-++ -125675adfg-08g"));
	printf("%d\n", ft_atoi("---+--+1234ab567"));
} */