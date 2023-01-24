/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_content.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:09:14 by arnaud            #+#    #+#             */
/*   Updated: 2023/01/24 14:39:54 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void mlx_put(t_data *data, void *path, int x, int y)
{
	mlx_put_image_to_window(data->mlx_ptr, data->mlx_win, path, GAMESIZE * x, GAMESIZE * y);
}




void mlx_put_content(t_data *data, int x, int y, char **map)
{
	int i;
	int j;
	char *str;
	
	i = 0;
	j = 1;
	
	while (j < x - 1)
	{
		str = map[i];
		while (i < y - 1)
		{
			if(str[i] == '1')
				mlx_put(data, "/xpm/wall.xpm", i, j );
			/*
			if(str[i] == '0')
				mlx_put(data, "/xpm/wall", i, j );
			if(str[i] == 'C')
				mlx_put(data, "/xpm/collectible", i, j );
			if(str[i] == 'E')
				mlx_put(data, "/xpm/exit", i, j );
			*/
			
			i++;
		}
		j++;
	}
}

