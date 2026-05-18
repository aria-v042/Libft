/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 21:50:23 by frodrig2          #+#    #+#             */
/*   Updated: 2026/05/19 00:55:32 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*a;

	if (!n || !size)
		return (malloc(0));
	a = malloc(n * size);
	if (!a)
		return (NULL);
	ft_bzero(a, (n * size));
	return (a);
}
