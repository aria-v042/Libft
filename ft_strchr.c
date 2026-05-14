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
	unsigned char	*i;
	unsigned char	uc;

	i = (unsigned char *)s;
	uc = (unsigned char) c;
	while (*i && (*i != uc))
		i++;
	if (*i == uc)
		return ((char *)i);
	return (NULL);
}
