/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:24:29 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/08 22:46:37 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_else(char *dest, char *src, unsigned int s, unsigned int d_s)
{
	unsigned int	src_i;

	src_i = 0;
	while (src[src_i] && s > src_i)
	{
		dest[d_s + src_i] = src[src_i];
		src_i++;
	}
	dest[d_s + src_i] = '\0';
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	res;

	dest_size = 0;
	src_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src[src_size])
		src_size++;
	res = src_size;
	if (size <= dest_size)
	{
		res += size;
		return (res);
	}
	else
	{
		res += dest_size;
		ft_else(dest, src, size, dest_size);
	}
	return (res);
}

/* #include <stdio.h>
int main()
{
	char dest[100] = "hello ";
	char src[] = "world";
	unsigned int	res;
	
	res = ft_strlcat(dest, src, 1);
	printf("%d - %s\n", res, dest);
	// s = size;
	// d_s = dest_size
} */