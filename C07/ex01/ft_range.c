/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:39:44 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/11 20:53:53 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*array;
	int	i;

	len = max - min;
	array = malloc(sizeof(int) * len);
	if (min >= max)
	{
		return (0);
	}
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

/* #include <stdio.h>
void	print_array(int *arr2, int min, int max)
{
	int i;

	i = 0;
	int len;
	len = max - min;
	while (i < len)
	{
		printf("%d\n", arr2[i]);
		i++;
	}
}

int main()
{
	int min;
	int max;
	int *arr2;

	min = 0;
	max = 0;
	
	arr2 = ft_range(min, max);
	print_array(arr2, min, max);
	
	// i need to return a new array of integers
} */