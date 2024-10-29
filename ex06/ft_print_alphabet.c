/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:22:21 by nleandro          #+#    #+#             */
/*   Updated: 2024/10/24 17:33:12 by nleandro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/
void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;

	c = 96;
	while (c++ <= 121)
		ft_putchar(c);
}

/*int	main(void)
{
	ft_print_alphabet();
}*/
