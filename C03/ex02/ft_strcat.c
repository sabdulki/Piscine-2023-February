/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:14:20 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/08 22:06:03 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	dest_i;
	int	src_i;

	dest_i = 0;
	while (dest[dest_i])
		dest_i++;
	src_i = 0;
	while (src[src_i])
	{
		dest[dest_i + src_i] = src[src_i];
		src_i++;
	}
	dest[src_i + dest_i] = '\0';
	return (dest);
}

/* #include <stdio.h>
int main()
{
	char dest[20] = "beautiful ";
	char src[] = "world!";
	
	// print_arrays(src);
	ft_strcat(dest, src);
	printf("%s\n", dest);
	// in 29 line we locate the space in dest for the src
} */