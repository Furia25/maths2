/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths2_vec3.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 01:48:16 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/04 02:21:44 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATHS2_VEC3_H
# define MATHS2_VEC3_H
# include "maths2_objects.h"

extern t_vec3		vec3_add(const t_vec3 a, const t_vec3 b);
extern t_vec3		vec3_sub(const t_vec3 a, const t_vec3 b);
extern t_vec3		vec3_scale(const t_vec3 v, const float scalar);
extern t_vec3		vec3_cross(const t_vec3 a, const t_vec3 b);
extern float		vec3_dot(const t_vec3 a, const t_vec3 b);
extern float		vec3_length(const t_vec3 v);
extern float		vec3_distance(const t_vec3 a, const t_vec3 b);
extern float		vec3_distance2(const t_vec3 a, const t_vec3 b);
extern t_vec3		vec3_normalize(t_vec3 v);
extern t_quaternion	vec3_to_homogeneous(const t_vec3 v);
extern t_vec2		vec3_to_vec2(t_vec3 v);
extern t_vec3		vec3_new(float x, float y);

#endif