/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: val <val@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:15:50 by val               #+#    #+#             */
/*   Updated: 2025/06/03 21:42:19 by val              ###   ########.fr       */
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

extern t_vec3		vec3_add(const t_vec3 a, const t_vec3 b);
extern t_vec3		vec3_sub(const t_vec3 a, const t_vec3 b);
extern t_vec3		vec3_scale(const t_vec3 v, const float scalar);
extern t_vec3		vec3_cross(const t_vec3 a, const t_vec3 b);
extern t_vec3		vec3_normalize(t_vec3 v);
extern float		vec3_dot(const t_vec3 a, const t_vec3 b);
extern float		vec3_length(const t_vec3 v);
extern float		vec3_distance(const t_vec3 a, const t_vec3 b);
extern float		vec3_length(const t_vec3 v);

typedef struct s_quaternion
{
	float	x;
	float	y;
	float	z;
	float	w;
}	t_quaternion;

double				ft_invsqrt(double number);
extern double		ft_sqrt(double x);

extern int			clamp(int x, int min, int max);
extern double		dclamp(double x, double min, double max);
extern float		fclamp(float x, float min, float max);

inline int			max(int a, int b);
inline int			min(int a, int b);
#ifndef _USE_STANDARD_MATH
extern double		fmax(double a, double b);
extern float		fmaxf(float a, float b);
extern double		fmin(double a, double b);
extern float		fminf(float a, float b);
#endif

#endif