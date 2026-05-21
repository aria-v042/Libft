/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 20:44:55 by frodrig2          #+#    #+#             */
/*   Updated: 2026/05/15 00:45:59 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*ptr;
	unsigned char	c;

	ptr = (unsigned char *)s;
	c = (unsigned char) c;
	while (*ptr && (*ptr != c))
		ptr++;
	if (*ptr == c)
		return ((char *)ptr);
	return (NULL);
}
