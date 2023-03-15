/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:22:43 by sabdulki          #+#    #+#             */
/*   Updated: 2023/03/11 20:41:32 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str2;
	int		len;
	int		i;

	len = ft_strlen(src);
	str2 = malloc(sizeof(char) * len);
	i = 0;
	while (src[i] != '\0')
	{
		str2[i] = src[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}

/* #include <stdio.h>
#include <string.h>
int main()
{
	char str2[] = "blablabla";
	printf("%s\n", ft_strdup(str2));
	printf("%s\n", strdup(str2));
} */