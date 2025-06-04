/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths2_geometry.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:24:28 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/04 18:27:23 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATHS2_GEOMETRY_H
# define MATHS2_GEOMETRY_H
# include "stdbool.h"
# include "maths2.h"
# include "private/maths2_objects.h"

# ifdef _USE_STANDARD_MATH

float	point_direction2D(t_vec2 origin, t_vec2 target);
# endif

t_rect	rect_from_rectb(const t_rect_bounds rectb);

bool	point_in_rect_b(const t_rect_bounds rb, t_vec2 point);
bool	point_in_rect(const t_rect r, t_vec2 point);
bool	point_in_triangle(const t_triangle t, t_vec2 p);
bool	point_in_circle(const t_circle c, t_vec2 p);

bool	rect_in_rect(t_rect a, t_rect b);
bool	circle_in_circle(t_circle a, t_circle b);
bool	circle_in_rect(t_circle c, t_circle r);
#endif