/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: val <val@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:51:02 by val               #+#    #+#             */
/*   Updated: 2025/06/03 21:41:45 by val              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

inline int	min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

#ifndef _USE_STANDARD_MATH

inline double	fmin(double a, double b)
{
	if (a < b)
		return (a);
	return (b);
}

inline float	fminf(float a, float b)
{
	if (a < b)
		return (a);
	return (b);
}
#endif
