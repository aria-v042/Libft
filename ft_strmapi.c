/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 01:47:09 by frodrig2          #+#    #+#             */
/*   Updated: 2026/05/21 02:10:45 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	i;

	s2 = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s2)
		return (NULL);
	i = 0;
	while (s[i])
		s2[i] = f(i, s[i++]);
	return (s2);
}
