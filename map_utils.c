/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:05:25 by arnaud            #+#    #+#             */
/*   Updated: 2023/01/21 19:14:14 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

int map_size(char *s) 
{
	char	*str;
	int		i;
	int		fd;

	i = 0;
	fd = open(s, O_RDWR);
	if(fd == -1)
		return (NULL); 
	str = get_next_line(fd);
	while (str)
	{
		i++;
		str = get_next_line(fd);
	}
	free(str);
	close(fd);
	return (i);
}

char **create_map(char *s)
{
	char	**map;
	char	*str;
	int		i;
	int		fd;
	int		size;

	i = 0;
	fd = open(s, O_RDONLY);
	if (fd == -1)
		return (NULL);
	size = map_size(s);
	map = malloc(sizeof(char *) * (size + 1));
	if (!map)
		return (NULL);
	str = get_next_line(fd);
	while (str)
	{
		map[i] = str;
		str = get_next_line(fd);
		i++;
	}
	map[i] = NULL;
	free(str);
	close(fd);
	return (map);
}

