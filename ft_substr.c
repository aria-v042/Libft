/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 02:37:55 by frodrig2          #+#    #+#             */
/*   Updated: 2026/05/19 02:37:55 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dup;

	dup = ft_calloc(len + 1, sizeof(char));
	if (!dup)
		return (NULL);
	if (start <= ft_strlen(s))
		ft_strlcpy(dup, s + start, len);
	return (dup);
}
// TODO
