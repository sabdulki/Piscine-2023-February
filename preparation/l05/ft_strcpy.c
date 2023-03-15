/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:49:04 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/14 13:05:51 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *s1, char *s2) // dest, src
{
	int i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main ()
{
	char s1[7] = "";
	char s2[] = "yyyy";
	
	ft_strcpy(s1, s2);
	printf("%s\n", s2);
	strcpy(s1, s2);
	printf("%s\n", s2);
}