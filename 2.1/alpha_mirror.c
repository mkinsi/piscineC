/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnizet <pnizet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:01:40 by pnizet            #+#    #+#             */
/*   Updated: 2017/07/13 22:13:07 by pnizet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		alpha_mirror(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 97 && str[i] <= 122))
			ft_putchar(122 - str[i] + 97);
		else if (str[i] >= 65 && str[i] <= 90)
			ft_putchar(90 - str[i] + 65);
		else
			ft_putchar(str[i]);
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	write (1, "\n", 1);
	return (0);
}
