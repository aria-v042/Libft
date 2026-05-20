/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 23:01:21 by frodrig2          #+#    #+#             */
/*   Updated: 2026/05/20 02:29:25 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *str = "hello!";
	char **words;

	printf("%s\n", str);
	words = ft_split(str, ' ');
	printf("\n");
	while (words)
	{
		printf("word: %s\n", *words);
		free(*words);
		words++;
	}
	free(words);
	return (0);
}
