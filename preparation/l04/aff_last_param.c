/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:34:38 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/14 12:44:04 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_string(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int main(int argc, char **argv)
{
	if (argc > 1)
		print_string(argv[argc - 1]);
	else if (argc == 1)
	{
		write (1, "\n", 1);
		return (0);
	}
	return (0);
}