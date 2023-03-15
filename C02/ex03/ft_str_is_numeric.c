/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:22:22 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/01 19:20:51 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	char	l;
	int		counter;

	counter = 0;
	l = str[counter];
	while (l)
	{
		if (!(l >= '0' && l <= '9'))
		{
			return (0);
		}
		counter++;
		l = str[counter];
	}	
	return (1);
}

/* int main ()
{
	char str[] = "82";
	char r;
	int result;
	ft_str_is_numeric(str);
	result = ft_str_is_numeric(str);
	
	r = result + '0';
	write(1, &r, 1);
}*/