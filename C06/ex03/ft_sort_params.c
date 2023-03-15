/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:37:18 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/07 17:38:19 by sabdulki         ###   ########.fr       */
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

int	compare_chars_in_strings(char *argv1, char *argv2)
{
	int		i;
	char	sign1;
	char	sign2;

	i = 0;
	sign1 = argv1[i];
	sign2 = argv2[i];
	while (argv1[i] && argv2[i] != '\0')
	{
		if (sign1 != sign2)
		{
			return (sign1 - sign2);
		}
		i++;
		sign1 = argv1[i];
		sign2 = argv2[i];
	}
	return (sign1 - sign2);
}

int	main(int argc, char **argv)
{
	int		i;
	int		res;
	char	*temp;
	int		c;

	i = 1;
	c = 1;
	while (i + 1 < argc)
	{
		res = compare_chars_in_strings(argv[i], argv[i + 1]);
		if (res > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 0;
		}
		i++;
	}
	while (c < argc)
	{
		ft_print_one_string(argv[c]);
		write(1, "\n", 1);
		c++;
	}
}
