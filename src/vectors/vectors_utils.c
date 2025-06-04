/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 02:28:56 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/04 02:29:30 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/maths2_objects.h"

t_quaternion	vec2_to_homogeneous(const t_vec2 v)
{
	return ((t_quaternion){v.x, v.y, 0.0f, 1.0f});
}

t_quaternion	vec3_to_homogeneous(const t_vec3 v)
{
	return ((t_quaternion){v.x, v.y, v.z, 1.0f});
}