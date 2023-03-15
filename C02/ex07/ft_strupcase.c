/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:56:16 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/01 19:31:48 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int		counter;
	char	l;

	counter = 0;
	l = str[counter];
	while (str[counter])
	{
		if (str[counter] >= 97 && str[counter] <= 122)
		{
			str[counter] = str[counter] - 32;
		}
		counter++;
	}
	str[counter] = '\0';
	return (str);
}

/* void	print_arrays(char *str)
{
	int		counter;
	// char	str_element;

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
	char str[] = "english";
	
	print_arrays(str);
	ft_strupcase(str);
	print_arrays(str);
} */