/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:32:55 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/01 19:27:14 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	char	l;
	int		counter;

	counter = 0;
	l = str[counter];
	while (l)
	{
		if (!(l >= 'A' && l <= 'Z'))
		{
			return (0);
		}
		counter++;
		l = str[counter];
	}
	return (1);
}

/*int main()
{
	char str[] = "Adkjgb457";
	char r;
	int result;
	ft_str_is_uppercase(str);
	result = ft_str_is_uppercase(str);
	
	r = result + '0';
	write(1, &r, 1);
} */