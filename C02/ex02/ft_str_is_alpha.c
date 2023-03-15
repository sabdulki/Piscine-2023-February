/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:17:44 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/01 19:17:45 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	char	l;
	int		counter;

	counter = 0;
	l = str[counter];
	while (l)
	{
		if (!((l >= 'A' && l <= 'Z') || (l >= 'a' && l <= 'z')))
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
	char str[] = "kk";
	char r;
	int result;
	ft_str_is_alpha(str);
	result = ft_str_is_alpha(str);
	
	r = result + '0';
	write(1, &r, 1);
} */