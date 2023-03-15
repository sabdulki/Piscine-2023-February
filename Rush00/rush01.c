/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:27:41 by sabdulki          #+#    #+#             */
/*   Updated: 2023/02/26 11:33:47 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>  // доделать Rush01.  Сначала сделаю квадрат
void	ft_putchar(char c);

void	print_first_line(int x)
{
	int	star;

	star = 0;
	while (star < x)
	{
		if (star == 0)
		{
			ft_putchar('/');
		}
		else if (star == x - 1)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
		star++;
	}
	ft_putchar('\n');
}

void	print_last_line(int x)
{
	int	star_last;

	star_last = 0;
	while (star_last < x)
	{
		if (star_last == 0)
		{
			ft_putchar('\\');
		}
		else if (star_last == x - 1)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
		star_last++;
	}
	ft_putchar('\n');
}

void	print_sides(int x)
{
	int	counter_for_x;

	counter_for_x = 0;
	while (counter_for_x < x)
	{
		if (counter_for_x == 0 || counter_for_x == x - 1)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
		counter_for_x++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	counter_for_y;

	counter_for_y = 0;
	print_first_line(x);
	while (counter_for_y <= y - 3)
	{
		print_sides(x);
		counter_for_y++;
	}
	if (y > 1)
	{
		print_last_line(x);
	}
	else
	{
		return ;
	}
}
