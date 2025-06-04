/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   geometry_misc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:17:00 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/04 18:27:18 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maths2.h"
#include "maths2_vectors.h"

t_rect	rect_from_rectb(const t_rect_bounds rectb)
{
	return ((t_rect){
		.pos = rectb.min,
		.size = {
			rectb.max.x - rectb.min.x,
			rectb.max.y - rectb.min.y
		}
	});
}

/*This is an alias which directly call vec2_distance*/

double	distance_2d(double x1, double y1, double x2, double y2)
{
	return (vec2_distance((t_vec2){x1, y1}, (t_vec2){x2, y2}));
}

#ifdef _USE_STANDARD_MATH

float	point_direction2D(t_vec2 origin, t_vec2 target)
{
	return (atan2f(target.y - origin.y, target.x - origin.x));
}

#endif
