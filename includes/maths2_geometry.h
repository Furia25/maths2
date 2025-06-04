/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths2_geometry.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:24:28 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/04 19:18:30 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATHS2_GEOMETRY_H
# define MATHS2_GEOMETRY_H
# include "maths2.h"
# include "private/maths2_objects.h"
# include "maths2_vectors.h"

# ifdef _USE_STANDARD_MATH

float	point_direction2D(t_vec2 origin, t_vec2 target);
# endif

/*Functions to operate on 2D objects*/

t_rect	rect_from_rectb(const t_rect_bounds rectb);

bool	point_in_rect_b(t_vec2 point, const t_rect_bounds rb);
bool	point_in_rect(t_vec2 point, const t_rect r);
bool	point_in_triangle(t_vec2 point, const t_triangle t);
bool	point_in_circle(t_vec2 point, const t_circle c);

bool	rect_in_rect(t_rect a, t_rect b);
bool	circle_in_circle(t_circle a, t_circle b);
bool	circle_in_rect(t_circle c, t_circle r);

/***********************************************************/

/*Functions to operate on 3D objects*/

float	point_plane_signed_distance(t_vec3 point, t_plane3 plane);
t_vec3	project_point_on_plane(t_vec3 point, t_plane3 plane);

bool	point_in_plane3(t_vec3 point, t_plane3 plane);

/***********************************************************/

#endif