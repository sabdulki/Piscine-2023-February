/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:00:26 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/09 13:36:11 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;
	char			sign1;
	char			sign2;

	counter = 0;
	sign1 = s1[counter];
	sign2 = s2[counter];
	while (s1[counter] && s2[counter] && counter < n)
	{
		if (sign1 != sign2)
		{
			return (sign1 - sign2);
		}
		counter++;
		sign1 = s1[counter];
		sign2 = s2[counter];
	}
	return (0);
}

#include <stdio.h>

int main()
{
	char s1[] = "carpet ";
	char s2[] = "caypet";
	unsigned int n;
	n = 3;
	int result;

	result = ft_strncmp(s1, s2, n);
	printf("%d", result);
}