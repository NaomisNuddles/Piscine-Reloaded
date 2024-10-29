/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleandro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 03:21:57 by nleandro          #+#    #+#             */
/*   Updated: 2024/10/24 17:37:43 by nleandro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	strl(char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	i = strl(src);
	cpy = malloc(sizeof(char) * i);
	i = 0;
	while (src[i] != 0)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str[] = "Couves verdes";

	printf("%s\n", ft_strdup(str));
	printf("%s\n", strdup(str));
}*/
