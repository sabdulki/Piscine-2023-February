/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:06:17 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/06 11:13:27 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		counter;
	char	character;

	counter = 0;
	character = str[counter];
	while (character)
	{
		write(1, &character, 1);
		counter++;
		character = str[counter];
	}
}

/* int main()
{
	char *str;
	str = "hello_world";
	ft_putstr(str);
}*/