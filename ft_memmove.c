/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:35:38 by frodrig2          #+#    #+#             */
/*   Updated: 2026/05/10 21:54:04 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*aux;

	aux = (unsigned char *)malloc(n);
	ft_memcpy(aux, src, n);
	ft_memcpy(dest, aux, n);
	free(aux);
	return (dest);
}
