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

static int	tested = 0;
static int	passed = 0;
static int	failed = 0;

static void	print_header(const char *title)
{
	printf("");
}

static void	print_test(const char *test, int pass)
{
	tested++;
	if (pass)
	{
		passed++;
		printf("  [PASS]:  %s\n", test);
	}
	else
	{
		failed++;
		printf("  [FAIL]:  %s\n", test);
	}
}

static void	test_ft_isalpha(int c, int exp)
{
	print_header("ft_isalpha");
	print_test("ft_isalpha('a') ? 1", ft_isalpha('a') == 1);
	print_test("ft_isalpha('Z') ? 1", ft_isalpha('Z') == 1);
	print_test("ft_isalpha('9') ? 0", ft_isalpha('9') == 0);
	print_test("ft_isalpha(' ') ? 0", ft_isalpha(' ') == 0);
	print_test("ft_isalpha('\t') ? 0", ft_isalpha('\t') == 0);
}

static void	test_ft_isdigit(int c, int exp)
{
	print_header("ft_isalpha");
	print_test("ft_isalpha('a') ? 1", ft_isalpha('a') == 1);
	print_test("ft_isalpha('Z') ? 1", ft_isalpha('Z') == 1);
	print_test("ft_isalpha('9') ? 0", ft_isalpha('9') == 0);
	print_test("ft_isalpha(' ') ? 0", ft_isalpha(' ') == 0);
	print_test("ft_isalpha('\t') ? 0", ft_isalpha('\t') == 0);

	// from main
	printf("Testing ft_isdigit()...\n\n");
	test_ft_isdigit('0', 1);
	test_ft_isdigit('9', 1);
	test_ft_isdigit('a', 0);
	test_ft_isdigit('Z', 0);
	test_ft_isdigit(' ', 0);
	test_ft_isdigit('\t', 0);
}

int	main(int argc, char **argv)
{
	test_ft_isalpha();
	test_ft_isdigit();
	return (1);
}
