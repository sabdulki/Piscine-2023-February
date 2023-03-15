/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:34:51 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/01 19:09:01 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}

/* void	print_arrays(char *arr)
{
	int		counter;

	counter = 0;
	while (arr[counter] != '\0')
	{
		write(1, &arr[counter], 1);
		counter++;
	}
	write(1, "\n", 2);
}

int main()
{
	char dest[5];
	char src[] = "hello";
	
	print_arrays(src);
	ft_strcpy(dest, src);
	print_arrays(dest);
} */