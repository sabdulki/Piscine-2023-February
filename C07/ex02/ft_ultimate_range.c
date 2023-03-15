/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:39:44 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/11 20:57:37 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*array;

	if (min >= max)
	{
		return (0);
	}
	len = max - min;
	array = malloc(sizeof(int) * len);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	*range = array;
	return (len);
}

/* #include <stdio.h>
int main()
{
	int min;
	int max;
	int len;
	int *arr = NULL; // an empty array

	min = 1;
	max = 5;
	
	len = ft_ultimate_range(&arr, min, max); 
	printf("%d\n", len);
} */