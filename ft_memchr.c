/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 22:53:59 by frodrig2          #+#    #+#             */
/*   Updated: 2026/05/15 23:03:20 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const char *s, int c, size_t n)
{
	while (n-- > 0)
	{
		if (*(unsigned char *)s == (unsigned char) c)
			return (s);
		s++;
	}
	return (NULL);
}
