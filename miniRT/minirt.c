/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 20:48:21 by chshin            #+#    #+#             */
/*   Updated: 2020/10/26 10:42:27 by chshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

#include "mlx.h"
#include <unistd.h>
#include <stdlib.h>

typedef struct s_data {
	void	*img;
	int		*addr;
	int		bpp;
	int		line_length;
	int		endian;
	char	color;
}			t_data;

int		deal_key(int key, void *param)
{
	if (key == 53 && param)
	{
		write(1, "The Window is closed.\n", 22);
		exit(0);
		return (0);
	}
	else
	{
		write(1, "Press ESC to close Window.\n", 27);
		return (0);
	}
}

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	int		*dst;

	dst = data->addr + (y * data->line_length + x * (data->bpp / 8));
	*(unsigned int*)dst = color;
}

int		main()
{
	void	*mlx_ptr;
	void	*win_ptr;
	const int	img_H = 256;
	const int	img_W = 256;
	t_data	img;

	mlx_ptr = mlx_init();
	win_ptr	= mlx_new_window(mlx_ptr, 500, 500, "mlx_42");
	img.img = mlx_new_image(mlx_ptr, img_W, img_H);
	img.addr = (int *)mlx_get_data_addr(img.img, &img.bpp, &img.line_length,
			&img.endian);

	int j = 0;
	while (j < img_W)
	{
		int i = 0;
		while (i < img_H)
		{
			float r = (double)i / (img_W - 1);
			float g = (img_H - (double)j - 1) / (img_H - 1);
			float b = 0.25;

			int	ir = 255.999 * r;
			int	ig = 255.999 * g;
			int	ib = 255.999 * b;

			/*img.color[0] = ir * 256 * 256; //비트 시프트
			img.color[1] = ig * 256;
			img.color[2] = ib;

			int color = img.color[0] + img.color[1] + img.color[2];*/
			img.color = ft_RGBtoHex(ir, ig, ib);
			my_mlx_pixel_put(&img, j, i, img.color);
			// img.addr[j * 256 + i] = mlx_get_color_value(mlx_ptr, color);
			i++;
		}
		j++;
	}
	mlx_put_image_to_window(mlx_ptr, win_ptr, img.img, 0, 0);
	mlx_key_hook(win_ptr, deal_key, win_ptr);
	mlx_loop(mlx_ptr);
}
