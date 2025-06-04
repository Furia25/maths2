/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectangle_overlaping.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:26:35 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/04 16:36:16 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maths2_geometry.h"

bool	point_in_rect_bp(const t_rect_bounds *rb, t_vec2 point)
{
	return (point.x >= rb->min.x
		&& point.x <= rb->max.x
		&& point.y >= rb->min.y
		&& point.y <= rb->max.y
	);
}

bool	point_in_rect_b(const t_rect_bounds rb, t_vec2 point)
{
	return (point.x >= rb.min.x
		&& point.x <= rb.max.x
		&& point.y >= rb.min.y
		&& point.y <= rb.max.y
	);
}

bool	point_in_rect_p(const t_rect *r, t_vec2 point)
{
	return (point.x >= r->pos.x
		&& point.x <=  r->pos.x + r->size.x
		&& point.y >= r->pos.y
		&& point.y <= r->pos.y + r->size.y
	);
}

bool	point_in_rect(const t_rect r, t_vec2 point)
{
	return (point.x >= r.pos.x
		&& point.x <=  r.pos.x + r.size.x
		&& point.y >= r.pos.y
		&& point.y <= r.pos.y + r.size.y
	);
}
