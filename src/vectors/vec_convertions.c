/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_convertions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 01:29:12 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/04 02:24:36 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "private/maths2_objects.h"

t_vec2	vec2_new(float x, float y)
{
	return ((t_vec2){x, y});
}

t_vec3	vec3_new(float x, float y, float z)
{
	return ((t_vec3){x, y, z});
}

t_vec3	vec2_to_vec3(t_vec2 v)
{
	return ((t_vec3){v.x, v.y, 0});
}

t_vec2	vec3_to_vec2(t_vec3 v)
{
	return ((t_vec2){v.x, v.y});
}
