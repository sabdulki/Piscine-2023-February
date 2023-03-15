/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:36:09 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/01 19:29:13 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (!(str[counter] >= 32 && str[counter] <= 126))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

/* int main()
{
	char str[] = "~!&jksdfhI UTVJ976";
	char r;
	int result;
	ft_str_is_printable(str);
	result = ft_str_is_printable(str);
	
	r = result + '0';
	write(1, &r, 1);
} */