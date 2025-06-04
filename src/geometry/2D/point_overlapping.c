/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_overlappings.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:06:46 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/04 18:07:06 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maths2_geometry.h"

bool	point_in_rect_b(const t_rect_bounds rb, t_vec2 point)
{
	return (point.x >= rb.min.x
		&& point.x <= rb.max.x
		&& point.y >= rb.min.y
		&& point.y <= rb.max.y
	);
}

bool	point_in_rect(const t_rect r, t_vec2 point)
{
	return (point.x >= r.pos.x
		&& point.x <= r.pos.x + r.size.x
		&& point.y >= r.pos.y
		&& point.y <= r.pos.y + r.size.y
	);
}

bool	point_in_circle(const t_circle c, t_vec2 p)
{
	float	dx;
	float	dy;

	dx = p.x - c.pos.x;
	dy = p.y - c.pos.y;
	return (dx * dx + dy * dy <= (c.radius * c.radius));
}

static float	signed_area(t_vec2 p1, t_vec2 p2, t_vec2 p3)
{
	return ((p1.x - p3.x) * (p2.y - p3.y) - (p2.x - p3.x) * (p1.y - p3.y));
}

bool	point_in_triangle(const t_triangle t, t_vec2 p)
{
	float	d1;
	float	d2;
	float	d3;

	d1 = signed_area(p, t.a, t.b);
	d2 = signed_area(p, t.b, t.c);
	d3 = signed_area(p, t.c, t.a);
	return (!((d1 < 0) || (d2 < 0)
			|| (d3 < 0) && (d1 > 0) || (d2 > 0) || (d3 > 0)));
}
