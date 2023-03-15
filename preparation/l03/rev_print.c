/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:14:40 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/14 12:30:44 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_len(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_rev_print (char *str)
{
	int i = 0;
	int len;

	len = ft_len(str);
	while (i <= len)
	{
		write(1, &str[len], 1);
		len--;
	}
	write(1, "\n", 1);
	return (str);
}


int main()
{
	ft_rev_print("ggeh");
}