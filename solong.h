
#ifndef SOLONG_H
#define SOLONG_H
#include <stdlib.h>
#include <stdio.h>
#include "minilibx_macos/mlx.h"
// #include "/usr/X11/include/X11"
// #include "/usr/X11/Xutil.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stddef.h>



# define WINDOW_HEIGHT 900
# define WINDOW_WIDTH 900
# define MLX_ERROR 1


# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif



int		init(void);

int		ft_strlen(const char *str);
char	*read_and_addtostash(char *stash, int fd);
char	*extract_and_addtoline(char *stash);
char	*get_next_line(int fd);
char	*collect_andaddtostash(char *stash);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);

char 	**create_map(char *s);
int 	map_size(char *s); 
int 	check_only_C_E_P_1_0(const char **map);
int 	checkextension(const char *s);
int 	isitarectangle(const char **map);
int 	map_size(char *s);
int 	check_all(const char *s);


typedef struct s_data

{
	void	*mlx_ptr;
	void 	*mlx_win;

	int		img_width;
	int 	img_height;
	char 	img_path;


}		t_data;




#endif