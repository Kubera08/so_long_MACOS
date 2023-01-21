/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapcheck_collectibles.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:11:09 by abeaudui          #+#    #+#             */
/*   Updated: 2023/01/21 19:01:07 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"
#include <stddef.h>

int check_only_C_E_P_1_0(const char **map)
{
	int i;
	int j;
	char *str;

	i = 0;
	j = 0;

	while (map[i])
	{
		str = map[i];
		while (str[j])
		{
			if(str[j] != 'C' || str[j] != 'P' || str[j] != 'E' || str[j] != '1' || str[j] != '0')
				return (1);
			j++;
 		}
		i++;		
	}
	return(0);
}