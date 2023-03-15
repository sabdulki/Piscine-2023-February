/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:27:36 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/01 19:33:07 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int		counter;
	char	l;

	counter = 0;
	l = str[counter];
	while (str[counter])
	{
		if (str[counter] >= 65 && str[counter] <= 90)
		{
			str[counter] = str[counter] + 32;
		}
		counter++;
	}
	str[counter] = '\0';
	return (str);
}

/*void	print_arrays(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		write(1, &str[counter], 1);
		counter++;
	}
	write(1, "\n", 2);
}

int main()
{
	char str[] = "EBDKB";
	
	print_arrays(str);
	ft_strlowcase(str);
	print_arrays(str);
} */