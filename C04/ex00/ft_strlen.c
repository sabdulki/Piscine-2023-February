/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:00:30 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/06 11:12:09 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int		counter;
	char	letter;

	counter = 0;
	letter = str[counter];
	while (letter)
	{
		counter++;
		letter = str[counter];
	}
	return (counter);
}

/* int main()
{
	char *str;
	int r_counter;
	char number;
	str = "school";
	r_counter = ft_strlen(str);
	number = r_counter + '0';
	write(1, &number, 1);
} */
