/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 23:01:21 by frodrig2          #+#    #+#             */
/*   Updated: 2026/05/20 02:22:39 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *str = "hello!";
	char **words;

	printf("%s", str);
	words = ft_split(str, " ");
	while (words)
	{
		printf("%s", words++);
	}
	return (0);
}
