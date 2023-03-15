/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:09:11 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/15 15:37:46 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_if_once (char *str1, char ch, int index)
{
	while(index > 0) //  && str2[i] != '\0')
	{
		index--;
		if (ch == str1[index])
			return (0);
	}
	return (1);
}

int ft_len(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}


int main(int argc, char **argv)  // dorg dot
{
	int index = 0;
	int index2 = 0;
	int len;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	len = ft_len(argv[1]);
	while (argv[1][index])
	{
		if (check_if_once(argv[1], argv[1][index], index) == 1)
		{
			write(1, &argv[1][index], 1);
		}
		index++;
	}
	while (argv[2][index2])
	{
		if (check_if_once(argv[2], argv[2][index2], index2) == 1 && check_if_once(argv[1], argv[2][index2], len) == 1)
		{
			write (1, &argv[2][index2], 1);
		}
		index2++;
	}
}