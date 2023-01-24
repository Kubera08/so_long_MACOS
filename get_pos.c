/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:34:51 by arnaud            #+#    #+#             */
/*   Updated: 2023/01/24 14:13:37 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

int get_pos_x(char **map, char c)
{
	
	int i;
	int j;
	char *str;
	
	i = 0;
	while(map[i])
	{
		j = 0;
		str = map[i];
		while(str[j])
		{
			if (str[j] == c)
			{
				
				return (j);

			}
			j++;		
		}
		i++;
	}
	
	return (0);
}

int get_pos_y(char **map, char c)
{
	int i;
	int j;
	char *str;
	
	i = 0;	
	while(map[i])
	{
		str = map[i];
		j = 0;
		while(str[j])
		{					

			if (str[j] == c)
				{
					return (i);
				}
			j++;		
		}
		i++;
	}
	
	return (0);
}

