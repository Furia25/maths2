/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_properties.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 01:06:36 by val               #+#    #+#             */
/*   Updated: 2025/06/03 22:21:02 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maths2.h"

#ifdef _USE_STANDARD_MATH

inline float	vec3_length(const t_vec3 v)
{
	return (sqrt(v.x * v.x + v.y * v.y + v.z * v.z));
}
#else

inline float	vec3_length(const t_vec3 v)
{
	return (ft_sqrt(v.x * v.x + v.y * v.y + v.z * v.z));
}
#endif

inline float	vec3_distance(const t_vec3 a, const t_vec3 b)
{
	t_vec3	diff;

	diff = vec3_sub(a, b);
	return (vec3_length(diff));
}

inline t_vec3	vec3_normalize(t_vec3 v)
{
	float	length;

	length = vec3_length(v);
	if (length > 0)
	{
		v.x /= length;
		v.y /= length;
		v.z /= length;
	}
	return (v);
}

inline t_quaternion	vec3_to_homogeneous(const t_vec3 v)
{
	return ((t_quaternion){v.x, v.y, v.z, 1.0f});
}
