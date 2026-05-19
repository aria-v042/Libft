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
	size_t	trimlen;
	size_t	trimrlen;
	size_t	size;

	i = 0;
	while (ft_strchr(set, s1 + i++))
		trimlen++;
	i = ft_strlen(s1);
	while (ft_strrchr(set, s1 + --i))
		trimrlen++;
	size = ft_strlen(s1) - trimlen - trimrlen + 1;
	s2 = (char *)malloc(size * sizeof(char));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1 + trimlen - 1, size - trimlen);
	return (s2);
}
