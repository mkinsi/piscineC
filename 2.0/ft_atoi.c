/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkinsi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 15:40:17 by mmkinsi           #+#    #+#             */
/*   Updated: 2017/07/13 16:18:53 by mmkinsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		nb;
	int		factor;

	if (str)
	{
		i = 0;
		nb = 0;
// 
		factor = 1;

// si c'est un espace, tabulation, shift etc.. passes au caractere suivant 
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
// si c'est un + ou un moins
		if (str[i] == 45 || str[i] == 43)
		{
// si c'est un +, le factor = 1, donc positif, et s c'est -, le factor devient -1 donc negatif
			factor = 44 - str[i];
			i++;
		}
// si c'est un chiffre (0 et 9) 
		while (str[i] >= 48 && str[i] <= 57)
		{
// le nb initial est egal a 0 comme initialise precedemment, ici il faut imprimer chacun des numeros | exemple, "140" > commencer par le "1", puis passer au "4", puis passer
// au "0". Donc pour 1, nb = 0 * 10 + 49 - 48 = 1 >> Ensuite passer a 4, nb = 1 * 10 + 52 - 48 = 4 etc..
			nb = nb * 10 + str[i] - 48;
			i++;
		}
// multiplier le factor si le chiffre est negatif ou positif pour savoir si c'est un chiffre negatif ou positif
		return (nb * factor);
	}
	return (0);
}
