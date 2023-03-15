/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:34:08 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/08 22:04:34 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		counter;
	char	sign1;
	char	sign2;

	counter = 0;
	sign1 = s1[counter];
	sign2 = s2[counter];
	while (s1[counter] && s2[counter] != '\0')
	{
		if (sign1 != sign2)
		{
			return (sign1 - sign2);
		}
		counter++;
		sign1 = s1[counter];
		sign2 = s2[counter];
	}
	return (sign1 - sign2);
}

/* #include <stdio.h>

int main()
{
	char s1[] = "carpetza ";
	char s2[] = "carpetka";
	int result;

	result = ft_strcmp(s1, s2);
	printf("%d", result);
} */