/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnizet <pnizet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:20:53 by pnizet            #+#    #+#             */
/*   Updated: 2017/07/13 16:43:30 by pnizet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// library for malloc
#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		i;
	int		src_size;
	char	*new_str;

	i = 0;
	src_size = 0;
// increase src size while src exists
	while (src[src_size])
		src_size++;
// use src size to allocate memory with malloc to the new str
	new_str = (char*)malloc(sizeof(*src) * (src_size));
	if (new_str == NULL)
		return (NULL);
// set new string to old string, for every letter in old string
	while (i < src_size)
	{
		new_str[i] = src[i];
		i++;
	}
// add the null character to end the string
	new_str[src_size] = '\0';
	return (new_str);
}
