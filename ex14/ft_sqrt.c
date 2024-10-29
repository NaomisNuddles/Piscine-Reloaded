/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 03:09:47 by nleandro          #+#    #+#             */
/*   Updated: 2024/10/24 17:36:29 by nleandro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;

	a = 1;
	if (nb <= 0)
		return (0);
	while (a * a < nb)
		a++;
	if (a * a == nb)
		return (a);
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(16));
}*/
