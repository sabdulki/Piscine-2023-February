/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:00:39 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/08 22:07:35 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_i;
	unsigned int	src_i;

	dest_i = 0;
	while (dest[dest_i] != '\0')
	{
		dest_i++;
	}
	src_i = 0;
	while (src[src_i] != '\0' && src_i < nb)
	{
		dest[dest_i + src_i] = src[src_i];
		src_i++;
	}
	dest[dest_i + src_i] = '\0';
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
	write(1, "\n", 1);
}

int main()
{
	char dest[16] = "beautiful ";
	char src[] = "world";
	unsigned int nb;
	nb = 2;
	
	// print_arrays(src);
	ft_strncat(dest, src, nb);
	print_arrays(dest);
} */