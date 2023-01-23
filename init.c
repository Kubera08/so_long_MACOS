/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud <arnaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:32:09 by abeaudui          #+#    #+#             */
/*   Updated: 2023/01/23 20:49:34 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void *init_content (t_data *data)
{
	t_data	data;

	data->x_size = ft_strlen((data->map[1]) -1);
	data->y_size = map_size(data->title);

//	data->wall = ft_put_img(data, "/xpm/");
//	data ->floor = ft_put_img(data, "/xpm/");
	
	data->x_pos = get_pos_x(data->map, 'P');
	data->y_pos = get_pos_y(data->map, 'P');



	data->mlx_ptr = mlx_init();
	if (data->mlx_ptr == NULL)
		return (MLX_ERROR);
	data->mlx_win = mlx_new_window(data->mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT, "Hello world!");
	if (data->mlx_win == NULL)
		return (MLX_ERROR);
	
}
/*
int	handle_no_event(void *data)
{
	char *i;

	i = data;
	i++;
	return (0);
}

int handle_keypress(int keysym, t_data *data)
{
	if (keysym == XK_Escape) 
		mlx_destroy_window(data->mlx_ptr, data->mlx_win);	
	return (0);
}

int	handle_keyrelease(int keysym, void *data)
{
	char *i;

	i = data;
	i++;
	
	printf("Keyrelease: %d\n", keysym);
	return (0);
	
}
*/
int	init(t_data *data)
{
	data = init_content(data);
	
// initialisation et création de fenêtre
	

	
// Register events before the loop starts = hooks functions



	// key events

	
	 //mlx_loop_hook(data.mlx_ptr, &handle_no_event, &data); // exécutée quand pas d'event sinon la boucle ne s'arrête jamais
	 // mlx_hook(data.mlx_win, KeyPress, KeyPressMask, &handle_keypress, &data); // fonction handle_keypress exécutée à chaque fois qu'une touche est pressée
	 // mlx_hook(data.mlx_win, KeyRelease, KeyReleaseMask, &handle_keyrelease, &data); // fonction handle_keyrelease exécutée à chaque fois qu'une touche est relachée


// loop

	mlx_loop(data->mlx_ptr);

// clear
	// mlx_destroy_window(data.mlx_ptr, data.mlx_win);
	// free (data.mlx_ptr);
	
	return (0);

}  




