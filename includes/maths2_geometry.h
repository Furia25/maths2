/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths2_geometry.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:24:28 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/04 16:52:34 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATHS2_GEOMETRY_H
# define MATHS2_GEOMETRY_H
# include "stdbool.h"
# include "maths2.h"
# include "private/maths2_objects.h"

# ifdef _USE_STANDARD_MATH

float	point_direction(t_vec2 origin, t_vec2 target);
# endif

bool	point_in_rect_bp(const t_rect_bounds *rb, t_vec2 point);
bool	point_in_rect_b(const t_rect_bounds rb, t_vec2 point);
bool	point_in_rect_p(const t_rect *r, t_vec2 point);
bool	point_in_rect(const t_rect r, t_vec2 point);

bool	point_in_triangle_p(const t_triangle *t, t_vec2 p);
bool	point_in_triangle(const t_triangle t, t_vec2 p);

bool	point_in_circle_p(const t_circle *c, t_vec2 p);
bool	point_in_circle(const t_circle c, t_vec2 p);

#endif