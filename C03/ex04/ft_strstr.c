/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:10:03 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/08 22:23:43 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_next(char *str, char *to_find, int i_str)
{
	int	i_find;

	i_find = 0;
	while (to_find[i_find])
	{
		if (to_find[i_find] != str[i_str + i_find])
		{
			break ;
		}
		i_find++;
		i_str++;
	}
	if (to_find[i_find] == '\0')
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i_str;

	i_str = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i_str] != '\0')
	{
		if (str[i_str] == to_find[0])
		{	
			if (check_next(str, to_find, i_str) == 1)
				return (&str[i_str]);
		}
		i_str++;
	}
	return (0);
}

/* #include <stdio.h>
int main()
{
	char str[] = "karaganda";
	char to_find[] = "d";
	char *p;
	
	p = ft_strstr(str, to_find);
	printf("%s\n", p);
} */