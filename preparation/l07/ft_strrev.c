/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:14:01 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/14 15:56:04 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_len(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	printf("%d\n", i);
	return (i);
}

char *ft_strrev(char *str)
{
	int i = 0;
	int len;
	char temp;
	len = ft_len(str) - 1;
	printf("%d\n", len);

	while (len > i)
	{
		int i = 0;
		char temp;
		
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	printf("%d\n", i);
	return (str);
}

int main()
{
	char str[] = "hello";
	
	printf("%s\n", ft_strrev(str));
}