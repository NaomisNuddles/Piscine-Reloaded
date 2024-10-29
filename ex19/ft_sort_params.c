/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleandro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 03:21:57 by nleandro          #+#    #+#             */
/*   Updated: 2024/10/24 17:37:33 by nleandro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

void	sort_str(char **tab, int size)
{
	int		i;
	char	*j;
	int		k;

	k = size - 1;
	while (k != 1)
	{
		i = 0;
		while (i++ < k)
		{
			if (ft_strcmp(tab[i], tab[k]) > 0)
			{
				j = tab[i];
				tab[i] = tab[k];
				tab[k] = j;
			}
		}
		k--;
	}
}

/*#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_putchar(char c);

void	wstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int a, char **b)
{
	int	i;

	if (a > 1)
	{
		sort_str(b, a);
		i = 1;
		while (i < a)
		{
			wstr(b[i]);
			ft_putchar(10);
			i++;
		}
	}
	return (0);
}
