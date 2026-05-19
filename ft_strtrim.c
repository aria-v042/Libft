/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 19:54:18 by frodrig2          #+#    #+#             */
/*   Updated: 2026/05/19 19:59:31 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (ft_strdup(s1));
	i = 0;
	while (*(s1 + i) && ft_strchr(set, *(s1 + i)))
		i++;
	j = ft_strlen(s1) - 1;
	while (*(s1 + j) && j > i && ft_strchr(set, *(s1 + j)))
		j--;
	s2 = (char *)malloc((j - i + 2) * sizeof(char));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1 + i, (j - i + 2));
	return (s2);
} // "  ", " " 
  //  0123   01
