/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:13:01 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/15 12:34:49 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
// everything should handle one by one, in the right turn (spaces, +/-, and only after them - numbers)
int ft_atoi (const char *str)
{
	int i;
	int minus = 1;
	int result = 0;
	i = 0;

	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		minus = -1;
		i++;
	}
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * minus);
}

int main()
{
	char str[] = " -67898346h076 h6";
	
	printf("%d\n", ft_atoi(str));
}