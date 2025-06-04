/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdurand <vdurand@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:15:50 by val               #+#    #+#             */
/*   Updated: 2025/06/04 02:22:23 by vdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATHS2_H
# define MATHS2_H

# ifdef __has_include
#  if __has_include(<math.h>)
#   include <math.h>
#  endif
# endif

# ifdef _MATH_H
#  define _USE_STANDARD_MATH	1
# endif

# ifndef M_PI
#  define M_PI 3.14159265358979323846
# endif

double				m2_invsqrt(double number);
extern double		m2_sqrt(double x);

extern int			clamp(int x, int min, int max);
extern double		dclamp(double x, double min, double max);
extern float		fclamp(float x, float min, float max);

extern int			max(int a, int b);
extern int			min(int a, int b);
extern int			m2_abs(int x);

#ifndef _USE_STANDARD_MATH
extern double		fmax(double a, double b);
extern float		fmaxf(float a, float b);
extern double		fmin(double a, double b);
extern float		fminf(float a, float b);
#endif

#endif