/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths2_objects.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 01:50:18 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/04 03:00:36 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATHS2_OBJECTS_H
# define MATHS2_OBJECTS_H

typedef struct s_circle
{
	t_vec2	pos;
	double	r;
}	t_circle;

typedef struct s_rect
{
	t_vec2	pos;
	t_vec2	size;
}	t_rect;

typedef struct s_rect_bounds
{
	t_vec2	min;
	t_vec2	max;
}	t_rect_bounds;

typedef struct s_triangle
{
	t_vec2	a;
	t_vec2	b;
	t_vec2	c;
}	t_triangle;

typedef struct s_vec2
{
	float	x;
	float	y;
}	t_vec2;

typedef struct s_vec3
{
	float	x;
	float	y;
	float	z;
}	t_vec3;

typedef struct s_quaternion
{
	float	x;
	float	y;
	float	z;
	float	w;
}	t_quaternion;

#endif