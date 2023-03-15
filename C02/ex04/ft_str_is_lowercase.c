/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:27:38 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/01 19:22:45 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	char	l;
	int		counter;

	counter = 0;
	l = str[counter];
	while (l)
	{
		if (!(l >= 'a' && l <= 'z'))
		{
			return (0);
		}
		counter++;
		l = str[counter];
	}
	return (1);
}

/* int main()
{
	char str[] = "ldfgh";
	char r;
	int result;
	ft_str_is_lowercase(str);
	result = ft_str_is_lowercase(str);
	
	r = result + '0';
	write(1, &r, 1);
}*/
