/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle_overlapping.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:50:18 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/04 16:53:35 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maths2_geometry.h"

bool	point_in_circle_p(const t_circle *c, t_vec2 p)
{
	float	dx;
	float	dy;

	dx = p.x - c->pos.x;
	dy = p.y - c->pos.y;
	return ((dx * dx) + (dy * dy) <= (c->radius * c->radius));
}

bool	point_in_circle(const t_circle c, t_vec2 p)
{
	float	dx;
	float	dy;

	dx = p.x - c.pos.x;
	dy = p.y - c.pos.y;
    return (dx * dx + dy * dy <= (c.radius * c.radius));
}
