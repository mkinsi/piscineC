/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnizet <pnizet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:34:25 by pnizet            #+#    #+#             */
/*   Updated: 2017/07/13 17:48:12 by pnizet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int j;
	int i;

	i = 0;
	j = 0;
// while the string exists
	while (str[i])
	{
// if the current character in the string is a space && the next one is a printable character
		if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 127)
// make j equal to the amount of characters before the last word
			j = i + 1;
		i++;
	}
// while j is a printable character, write it
	while (str[j] >= 33 && str[j] <= 127)
	{
		write(1, &str[j], 1);
		j++;
	}
}

int		main(int argc, char **argv)
{
// we need to have only 1 parameter, then run the function last_word
	if (argc == 2)
		last_word(argv[1]);
// otherwise, write the new line character
	write(1, "\n", 1);
	return (0);
}
