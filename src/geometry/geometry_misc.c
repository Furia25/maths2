/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   geometry_misc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:17:00 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/04 16:27:06 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maths2_vectors.h"
#include "limits.h"

/*This is an alias which directly call vec2_distance*/

double	distance_2d(double x1, double y1, double x2, double y2)
{
	return (vec2_distance((t_vec2){x1, y1}, (t_vec2){x2, y2}));
}
