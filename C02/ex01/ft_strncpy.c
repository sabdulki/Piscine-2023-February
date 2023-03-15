/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:55:45 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/04 16:12:16 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;
	char			sign;

	counter = 0;
	sign = src[counter];
	while (sign && counter < n)
	{
		dest[counter] = src[counter];
		counter++;
		sign = src[counter];
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}

/* int main()
{
	char src[] = "miyagi";
	char dest[] = "";
	unsigned int n;
	n = 6;
	
	ft_strncpy(dest, src, n);
	write(1, dest, n);
} */