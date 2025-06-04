/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   geometry_misc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:17:00 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/04 16:42:47 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maths2_vectors.h"
#include "limits.h"

/*This is an alias which directly call vec2_distance*/

double	distance_2d(double x1, double y1, double x2, double y2)
{
	return (vec2_distance((t_vec2){x1, y1}, (t_vec2){x2, y2}));
}

#ifdef _USE_STANDARD_MATH

float	point_direction(t_vec2 origin, t_vec2 target)
{
    return (atan2f(target.y - origin.y, target.x - origin.x));
}

#endif
