/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths2_geometry.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:24:28 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/04 16:36:36 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATHS2_GEOMETRY_H
# define MATHS2_GEOMETRY_H
# include "private/maths2_objects.h"
# include "stdbool.h"

bool	point_in_rect_bp(const t_rect_bounds *rb, t_vec2 point);
bool	point_in_rect_b(const t_rect_bounds rb, t_vec2 point);
bool	point_in_rect_p(const t_rect *r, t_vec2 point);
bool	point_in_rect(const t_rect r, t_vec2 point);

#endif