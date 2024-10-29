/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleandro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 03:21:57 by nleandro          #+#    #+#             */
/*   Updated: 2024/10/24 17:37:53 by nleandro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*i;
	int	j;

	if (min >= max)
		return (0);
	i = malloc(sizeof(int) * (max - min + 1));
	i[max - min] = 0;
	j = 0;
	while (min != max)
	{
		i[j] = min;
		min++;
		j++;
	}
	return (i);
}

/*#include <stdio.h>
int	strl(int *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}
int	main(void)
{
	int	i;
	int *k;

	k = ft_range(3, 7);
	i = -1;
	printf("%d\n", strl(k));
	while (i++ < j)
		printf("%c", k[i] + 48);
	printf("\n");
}*/
