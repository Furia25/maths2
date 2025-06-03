/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:51:02 by val               #+#    #+#             */
/*   Updated: 2025/06/03 22:20:57 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

inline int max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

#ifndef _USE_STANDARD_MATH

inline double fmax(double a, double b)
{
	if (a > b)
		return (a);
	return (b);
}

inline float fmaxf(float a, float b)
{
	if (a > b)
		return (a);
	return (b);
}
#endif
