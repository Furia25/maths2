/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point_overlapping.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:29:49 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/04 19:17:18 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maths2_geometry.h"

bool	point_in_plane3(t_vec3 point, t_plane3 plane)
{
	return (float_equal(point_plane_signed_distance(point, plane), 0.0f));
}
