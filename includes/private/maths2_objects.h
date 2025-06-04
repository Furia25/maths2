/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths2_objects.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 01:50:18 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/04 01:51:29 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATHS2_OBJECTS_H
# define MATHS2_OBJECTS_H

typedef struct s_vec2
{
	float	x;
	float	y;
}	t_vec2;

typedef struct s_vec3
{
	float	x;
	float	y;
	float	z;
}	t_vec3;

typedef struct s_quaternion
{
	float	x;
	float	y;
	float	z;
	float	w;
}	t_quaternion;

#endif