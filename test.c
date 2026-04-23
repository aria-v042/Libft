/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 22:13:37 by frodrig2          #+#    #+#             */
/*   Updated: 2026/04/23 18:34:16 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_ft_isalpha(int c, int exp)
{
	printf("> ft_isalpha(%d) ? %d\n", c, exp);
	if (ft_isalpha(c) == exp)
		printf(">>> PASSED <<<\n");
	else
		printf("<<< FAILED >>>\n");
}

void	test_ft_isdigit(int c, int exp)
{
	printf("> ft_isdigit(%d) ? %d\n", c, exp);
	if (ft_isalpha(c) == exp)
		printf(">>> PASSED <<<\n");
	else
		printf("<<< FAILED >>>\n");
}

int	main(int argc, char **argv)
{
	printf("Testing ft_isalpha()...\n\n");
	test_ft_isalpha('a', 1);
	printf("\n");
	test_ft_isalpha('Z', 1);
	printf("\n");
	test_ft_isalpha('9', 0);
	printf("\n");
	test_ft_isalpha(' ', 0);
	printf("\n");
	test_ft_isalpha('\t', 0);
	printf("\n");
	printf("Testing ft_isdigit()...\n\n");
	test_ft_isdigit('0', 1);
	printf("\n");
	test_ft_isdigit('9', 1);
	printf("\n");
	test_ft_isdigit('a', 0);
	printf("\n");
	test_ft_isdigit('Z', 0);
	printf("\n");
	test_ft_isdigit(' ', 0);
	printf("\n");
	test_ft_isdigit('\t', 0);
	printf("\n");
	return (1);
}
