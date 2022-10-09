////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
//////                                                                //////
//////   ||||||||||  ||||||||| |||||||||      ||||       ||     ||    //////
//////   |||         ||     || ||            ||  ||      ||   ||      //////
//////   ||||||||||  ||||||||| ||           ||    ||     || ||        //////
//////   |||         ||||      |||||||||   ||||||||||    || ||        //////
//////   |||         ||  ||    ||         ||        ||   ||   ||      //////
//////   |||         ||    ||  ||||||||| ||          ||  ||     ||    //////
//////                  version 0.0.0    *ALAZ*                       //////
////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

#include <unistd.h>
#include <stdlib.h>
#include "minilibx_macos/mlx.h"

typedef struct freak
{
	void	*mlx;
	void	*mlx_win;
}			t_freak;

int	key(int key)
{
	if (key >= 0)
		system("pmset displaysleepnow");
		exit(1);
	return 0;
}

int	ft_close(void *data)
{
	(void)data;
		system("pmset displaysleepnow");
		exit(1);
	return 0;
}

int main(void) 
{
	t_freak	*data;

	data = (t_freak *)malloc(sizeof(t_freak));
	data->mlx = mlx_init();
	data->mlx_win = mlx_new_window(data->mlx, 2560, 1900, "Freak!");
	mlx_key_hook(data->mlx_win, key, data);
	mlx_hook(data->mlx_win, 6, 0, ft_close, data);
	mlx_loop(data->mlx);
	return 0;
}
