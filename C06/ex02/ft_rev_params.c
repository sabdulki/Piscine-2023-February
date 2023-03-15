/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:37:18 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/07 14:59:17 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_one_string(char *argv)
{
	int		i;
	char	c;

	i = 0;
	c = argv[i];
	while (argv[i] != '\0')
	{
		c = argv[i];
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_print_one_string(argv[argc - 1]);
		write(1, "\n", 1);
		argc--;
	}
}
