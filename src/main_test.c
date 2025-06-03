/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: val <val@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:38:45 by val               #+#    #+#             */
/*   Updated: 2025/06/03 16:42:50 by val              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <maths2.h>
#include <stdio.h>

int	main(void)
{
	t_vec3 testv;
	testv = (t_vec3){10,10,10};
	testv = vec3_normalize(testv);
	double test = ft_sqrt(2);
	printf("%f\n", test);
}
