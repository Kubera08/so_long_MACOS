/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapcheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:41:18 by abeaudui          #+#    #+#             */
/*   Updated: 2023/01/21 19:12:09 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"


int checkextension(const char *s) // check extension
{
	int i;

	i = 0;
	while(s[i] != '.')
		i++;
	i = i + 1;
	if ((s[i] == 'b') && (s[i+1] == 'e') && (s[i+2] == 'r'))
		return(0);
	else
		{
			printf("%s n'est pas un type de fichier adequat\n", s);
			return (1);
		}
	
}

int isitarectangle(const char **map) 
{
	int i;
	int size;
	const char *str;	
	int j;
	int temp;
	
	temp = 0;
	i = 0;
	j = 0;
	size = 0;

	while (map[j])
	{	
		temp = size;
		size = 0;
		str = map[j];
		while(str[i])
		{
			size++;
			i++;
		}
		if (temp != size)
			return (1);
	j++;
	}
	free (temp);
	free (size);
	return (0);	
}

int check_all(const char *s)
{
	char **map;
	map = create_map(s);
	
	if (checkextension(s) == 0) // && isitarectangle(map) == 0 && check_only_C_E_P_1_0(map) == 0)
		return(0);
	else
		return(1);
}