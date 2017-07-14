/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnizet <pnizet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 16:54:21 by pnizet            #+#    #+#             */
/*   Updated: 2017/07/13 17:32:13 by pnizet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// include library for write function
#include <unistd.h>

int			checkchar(char *str, char lettrex, int len)
{
	int		j;

	j = 0;
// while the string exists && (the string is smaller than the lenght or equal to -1)
	while (str[j] && (j < len || len == -1))
	{
// check if letters from arg[1] matches with letter from arg[2]
		if (str[j] == lettrex)
// if so, this is true, so the condition in the main is correct
			return (1);
		j++;
	}
	return (0);
}

int			main(int ac, char **av)
{
	int		i;

	i = 0;
// the number of arguments must be 2, otherwise it's false
	if (ac == 3)
	{
// while the first arguments exists
		while (av[1][i])
		{
// if the letter is not repeted && if both arguments have a matching letter.
// -1 is to ensure the argument passes the next while loop
			if (!checkchar(av[1], av[1][i], i) && checkchar(av[2], av[1][i], -1))
// av[1] + i = av[1][i] - so it should print the letter that matches
				write(1, av[1] + i, 1);
			i++;
		}
	}
// otherwise print a new line character and return 0 to finish
	write(1, "\n", 1);
	return (0);
}
