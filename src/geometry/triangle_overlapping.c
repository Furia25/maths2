/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangle_overlapping.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:44:20 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/04 16:49:14 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maths2_geometry.h"

static float	signed_area(t_vec2 p1, t_vec2 p2, t_vec2 p3)
{
	return ((p1.x - p3.x) * (p2.y - p3.y) - (p2.x - p3.x) * (p1.y - p3.y));
}

bool	point_in_triangle_p(const t_triangle *t, t_vec2 p)
{
	float	d1;
	float	d2;
	float	d3;

	d1 = signed_area(p, t->a, t->b);
	d2 = signed_area(p, t->b, t->c);
	d3 = signed_area(p, t->c, t->a);
	return (!((d1 < 0) || (d2 < 0) || (d3 < 0) && (d1 > 0) || (d2 > 0) || (d3 > 0)));
}

bool	point_in_triangle(const t_triangle t, t_vec2 p)
{
	float	d1;
	float	d2;
	float	d3;

	d1 = signed_area(p, t.a, t.b);
	d2 = signed_area(p, t.b, t.c);
	d3 = signed_area(p, t.c, t.a);
	return (!((d1 < 0) || (d2 < 0) || (d3 < 0) && (d1 > 0) || (d2 > 0) || (d3 > 0)));
}
