/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 20:44:55 by frodrig2          #+#    #+#             */
/*   Updated: 2026/05/15 00:56:26 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	unsigned char	uc;

	i = ft_strlen(s);
	uc = (unsigned char) c;
	while (i && (s[i] != uc))
		i--;
	if (s[i] == uc)
		return ((char *)&s[i]);
	return (NULL);
}
