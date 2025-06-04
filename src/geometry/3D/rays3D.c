/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rays3D.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 00:45:17 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/05 00:46:19 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maths2_geometry.h"

t_vec2	ray2_point_at(t_ray2 ray, float t)
{
	return (vec2_add(ray.origin, vec2_scale(ray.dir_normal, t)));
}

t_vec3	ray3_point_at(t_ray3 ray, float t)
{
	return (vec3_add(ray.origin, vec3_scale(ray.dir_normal, t)));
}
