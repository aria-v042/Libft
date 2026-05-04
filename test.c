/* ******************j******************************************************* */
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
	printf("\n");
	printf("==================================================\n");
	printf("  TESTING: %s\n", title);
	printf("==================================================\n");
	//printf("\n");
}

static void	print_test(const char *test, int pass)
{
	tested++;
	if (pass)
	{
		passed++;
		printf("  [OK]  %s\n", test);
	}
	else
	{
		failed++;
		printf("  [FAIL]  %s\n", test);
	}
}

static void	test_ft_isalpha(void)
{
	int	prefailed;

	prefailed = failed;
	print_header("ft_isalpha");
	print_test("ft_isalpha('0') ? 0", ft_isalpha('0') == 0);
	print_test("ft_isalpha('@') ? 0", ft_isalpha('@') == 0);
	print_test("ft_isalpha('A') ? 1", ft_isalpha('A') == 1);
	print_test("ft_isalpha('[') ? 0", ft_isalpha('[') == 0);
	print_test("ft_isalpha('`') ? 0", ft_isalpha('`') == 0);
	print_test("ft_isalpha('z') ? 1", ft_isalpha('z') == 1);
	print_test("ft_isalpha('{') ? 0", ft_isalpha('{') == 0);
	if (failed == prefailed)
		printf("\n >>> SUCCESS <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	else
		printf("\n <<< FAILURE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
}

static void	test_ft_isdigit(void)
{
	int	prefailed;

	prefailed = failed;
	print_header("ft_isdigit");
	print_test("ft_isdigit('/') ? 0", ft_isdigit('/') == 0);
	print_test("ft_isdigit('0') ? 1", ft_isdigit('0') == 1);
	print_test("ft_isdigit('9') ? 1", ft_isdigit('9') == 1);
	print_test("ft_isdigit(':') ? 0", ft_isdigit(':') == 0);
	print_test("ft_isdigit('a') ? 0", ft_isdigit('a') == 0);
	print_test("ft_isdigit('{') ? 0", ft_isdigit('{') == 0);
	if (failed == prefailed)
		printf("\n >>> SUCCESS <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	else
		printf("\n <<< FAILURE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
}

static void	test_ft_isalnum(void)
{
	int	prefailed;

	prefailed = failed;
	print_header("ft_isalnum");
	print_test("ft_isalnum('/') ? 0", ft_isalnum('/') == 0);
	print_test("ft_isalnum('0') ? 1", ft_isalnum('0') == 1);
	print_test("ft_isalnum('9') ? 1", ft_isalnum('9') == 1);
	print_test("ft_isalnum(':') ? 0", ft_isalnum(':') == 0);
	print_test("ft_isalnum('@') ? 0", ft_isalnum('@') == 0);
	print_test("ft_isalnum('A') ? 1", ft_isalnum('A') == 1);
	print_test("ft_isalnum('Z') ? 1", ft_isalnum('Z') == 1);
	print_test("ft_isalnum('[') ? 0", ft_isalnum('[') == 0);
	print_test("ft_isalnum('`') ? 0", ft_isalnum('`') == 0);
	print_test("ft_isalnum('a') ? 1", ft_isalnum('a') == 1);
	print_test("ft_isalnum('z') ? 1", ft_isalnum('z') == 1);
	print_test("ft_isalnum('{') ? 0", ft_isalnum('{') == 0);
	if (failed == prefailed)
		printf("\n >>> SUCCESS <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	else
		printf("\n <<< FAILURE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
}

static void	test_ft_isascii(void)
{
	int	prefailed;

	prefailed = failed;
	print_header("ft_isascii");
	print_test("ft_isascii(-1) ? 0", ft_isascii(-1) == 0);
	print_test("ft_isascii(0) ? 1", ft_isascii(0) == 1);
	print_test("ft_isascii('/') ? 1", ft_isascii('/') == 1);
	print_test("ft_isascii('0') ? 1", ft_isascii('0') == 1);
	print_test("ft_isascii('@') ? 1", ft_isascii('@') == 1);
	print_test("ft_isascii('Z') ? 1", ft_isascii('Z') == 1);
	print_test("ft_isascii('`') ? 1", ft_isascii('`') == 1);
	print_test("ft_isascii('a') ? 1", ft_isascii('a') == 1);
	print_test("ft_isascii('{') ? 1", ft_isascii('{') == 1);
	print_test("ft_isascii(127) ? 1", ft_isascii(127) == 1);
	print_test("ft_isascii(128) ? 0", ft_isascii(128) == 0);
	if (failed == prefailed)
		printf("\n >>> SUCCESS <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	else
		printf("\n <<< FAILURE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
}

static void	test_ft_isprint(void)
{
	int	prefailed;

	prefailed = failed;
	print_header("ft_isprint");
	print_test("ft_isprint(-1) ? 0", ft_isprint(-1) == 0);
	print_test("ft_isprint(0) ? 0", ft_isprint(0) == 0);
	print_test("ft_isprint(31) ? 0", ft_isprint(31) == 0);
	print_test("ft_isprint(' ') ? 1", ft_isprint(' ') == 1);
	print_test("ft_isprint('/') ? 1", ft_isprint('/') == 1);
	print_test("ft_isprint('0') ? 1", ft_isprint('0') == 1);
	print_test("ft_isprint(':') ? 1", ft_isprint(':') == 1);
	print_test("ft_isprint('Z') ? 1", ft_isprint('Z') == 1);
	print_test("ft_isprint('a') ? 1", ft_isprint('a') == 1);
	print_test("ft_isprint('~') ? 1", ft_isprint('~') == 1);
	print_test("ft_isprint(127) ? 0", ft_isprint(127) == 0);
	print_test("ft_isprint(128) ? 0", ft_isprint(128) == 0);
	if (failed == prefailed)
		printf("\n >>> SUCCESS <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	else
		printf("\n <<< FAILURE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
}

static void	test_ft_strlen(void)
{
	int	prefailed;

	prefailed = failed;
	print_header("ft_strlen");
	print_test("ft_strlen(\"\") ? 0", ft_strlen("") == 0);
	print_test("ft_strlen(\"42\") ? 2", ft_strlen("42") == 2);
	print_test("ft_strlen(\"hello friend\") ? 12", ft_strlen("hello friend") == 12);
	if (failed == prefailed)
		printf("\n >>> SUCCESS <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	else
		printf("\n <<< FAILURE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
}

static void	print_summary(void)
{
	printf("\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	printf("  SUMMARY:\n");
	printf("\n");
	printf("  Passed	%d/%d	tests\n", passed, tested);
	printf("  Failed	%d/%d	tests\n", failed, tested);
	printf("\n");
	if (failed == 0)
		printf("  All tests were successful!\n\n");
}

int	main(int argc, char **argv)
{
	printf("\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("              ARIACORE: LIBFT TESTER              \n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	// LIBC FUNCTIONS:
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	// SUMMARY:
	print_summary();
	return (1);
}
