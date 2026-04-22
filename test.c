/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 22:13:37 by frodrig2          #+#    #+#             */
/*   Updated: 2026/04/22 18:04:15 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_ft_isalpha(char c, int exp)
{
	printf("Testing ft_isalpha()...\n");
	printf("> ft_isalpha(%d) ? %d\n", c, exp);
	if (ft_isalpha(c) == exp)
		printf(">>> PASSED\n");
	else
		printf("<<< FAILED\n");
}

int	main(int argc, char *argv)
{
	test_ft_isalpha('a', 1);
}
