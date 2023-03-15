/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:27:36 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/04 16:39:51 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	count;

	count = 0;
	counter = 0;
	while (src[count])
	{
		count++;
	}
	if (size < 1)
	{
		return (count);
	}
	while (src[counter] && counter < (size - 1))
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (count);
}

/* int main()
{
	char src[] = "c";
	char dest[10];
	
	unsigned int size;
	size = 2;  // count of elemnts that i want to copy
	ft_strlcpy(dest, src, size);
	write(1, dest, size);

	// the function strlcpy by itself returns
	avaliable to copy count of element 
} */