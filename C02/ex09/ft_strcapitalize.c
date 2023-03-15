/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:27:36 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/01 19:38:02 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	make_all_l_lower(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 65 && str[counter] <= 90)
		{
			str[counter] = str[counter] + 32;
		}
		counter++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		counter;
	char	sign;
	char	pr;

	make_all_l_lower(str);
	counter = 0;
	sign = str[counter];
	while (sign != '\0')
	{
		if (sign >= 'a' && sign <= 'z')
		{
			pr = str[counter -1];
			if (!((pr >= 'a' && pr <= 'z') || \
			(pr >= 'A' && pr <= 'Z') || \
			(pr >= '0' && pr <= '9')))
			{
				str[counter] -= 32;
			}
		}
		counter++;
		sign = str[counter];
	}
	return (str);
}

/* void	print_arrays(char *str)
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
	char str[] = "salut, coMMent tu vas";

	print_arrays(str);
	ft_strcapitalize(str);
	print_arrays(str);
} */