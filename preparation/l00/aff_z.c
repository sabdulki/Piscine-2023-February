/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:24:30 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/13 14:43:56 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	
	while (count < argc)
	{
		if (argv[count][i] == 'z' || argv[count][i] != 'z' || argc != 1)
		{
			write(1, "z\n", 2);
			break;
		}
	}
	return (0);
} 