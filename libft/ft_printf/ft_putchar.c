/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlocusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:33:41 by nlocusso          #+#    #+#             */
/*   Updated: 2022/10/04 19:34:28 by nlocusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c, int cnt)
{
	c = c % 256;
	write(1, &c, 1);
	cnt++;
	return (cnt);
}
