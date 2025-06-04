/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sign.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 02:42:46 by vdurand           #+#    #+#             */
/*   Updated: 2025/06/04 02:43:02 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sign(double x)
{
	return ((x > 0) - (x < 0));
}

int	m2_abs(int x)
{
	if (x < 0)
		return (x * -1);
	return (x);
}

#ifndef _USE_STANDARD_MATH

double	fabs(double x)
{
	if (x < 0)
		return (x * -1);
	return (x);
}
#endif
