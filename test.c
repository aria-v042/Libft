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
#include <string.h>
#include <stdarg.h>

static int	tested = 0;
static int	passed = 0;
static int	failed = 0;

/* ================= PRINTERS ================= */

static void	print_header(const char *title)
{
	printf("\n");
	printf("==================================================\n");
	printf("  TESTING: %s\n", title);
	printf("==================================================\n");
}

static void	print_call(const char *test)
{
	printf("  %s\n", test);
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

/* ============== LIBC FUNCTIONS ============== */

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

static void	test_ft_memset(void)
{
	int		prefailed;
	char	str[10];

	prefailed = failed;
	print_header("ft_memset");
	// test 1
	str[5] = '\0';
	ft_memset(str, 'x', 5);
	print_test("ft_memset(str, 'x', 5) ? \"xxxxx\"", strcmp(str, "xxxxx") == 0);
	// test 2
	str[8] = '\0';
	ft_memset(str, '0', 8);
	print_test("ft_memset(str, '0', 8) ? \"00000000\"", strcmp(str, "00000000") == 0);

	if (failed == prefailed)
		printf("\n >>> SUCCESS <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	else
		printf("\n <<< FAILURE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
}

static void	test_ft_bzero(void)
{
	int		prefailed;
	char	str[4];

	prefailed = failed;
	print_header("ft_bzero");
	// test
	memset(str, 'x', 4);
	ft_bzero(str, 4);
	print_test("ft_bzero(str, 4) ? zeroes 4 bytes", str[0] == 0
			&& str[1] == 0 && str[2] == 0 && str[3] == 0);

	if (failed == prefailed)
		printf("\n >>> SUCCESS <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	else
		printf("\n <<< FAILURE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
}

static void	test_ft_memcpy(void)
{
	int		prefailed;
	char	dest[10];

	print_header("ft_memcpy");
	ft_memcpy(dest, "testing", 7);
	print_call("	ft_memcpy(dest, \"testing\", 7)");
	print_test("  ? copy \"testing\" to dest",
			strcmp(dest, "testing") == 0);

	if (failed == prefailed)
		printf("\n >>> SUCCESS <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	else
		printf("\n <<< FAILURE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
}

static void	test_ft_memmove(void)
{
	int		prefailed;
	char	src[10] = "testing";

	print_header("ft_memmove");
	ft_memmove(src + 3, src, 7);
	print_call("	ft_memmove(src + 3, src, 7)");
	print_test("  ? copy \"testing\" from src to src+3",
			strcmp(src + 3, "testing") == 0);

	if (failed == prefailed)
		printf("\n >>> SUCCESS <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	else
		printf("\n <<< FAILURE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
}

static void	test_ft_strlcpy(void)
{
	int		prefailed;
	char	dst[5];
	int		len;

	print_header("ft_strlcpy");
	// test 1
	len = ft_strlcpy(dst, "test", sizeof(dst));
	print_call("	ft_strlcpy(dst, \"test\", sizeof(dst))");
	print_test("  ? copy \"test\" to dst",
		strcmp(dst, "test") == 0);
	print_test("  ? return lenght of source (4)",
		len == 4);
	// test 2
	len = ft_strlcpy(dst, "testing", sizeof(dst));
	print_call("	ft_strlcpy(dst, \"testing\", sizeof(dst))");
	print_test("  ? copy only \"test\" to dst",
		strcmp(dst, "test") == 0);
	print_test("  ? return lenght of source (7)",
		len == 7);
	// test 3
	len = ft_strlcpy(dst, "test", 4);
	print_call("	ft_strlcpy(dst, \"test\", 4)");
	print_test("  ? copy \"tes\" to dst (5 bytes)",
		strcmp(dst, "tes") == 0);
	print_test("  ? truncate dst with '\\0'",
		dst[3] == 0);

	if (failed == prefailed)
		printf("\n >>> SUCCESS <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	else
		printf("\n <<< FAILURE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
}

static void	test_ft_strlcat(void)
{
	int		prefailed;
	char	dst[10] = "test";
	int		len;

	print_header("ft_strlcat");
	// test 1
	len = ft_strlcat(dst, "ing", sizeof(dst));
	print_call("	ft_strlcat(dst, \"ing\", sizeof(dst))");
	print_test("  ? append \"ing\" to the end of dst (\"test\")",
			strcmp(dst, "testing") == 0);
	print_test("  ? return length of \"testing\" (7)",
			len == 7);
	// test 2
	memcpy(dst, "test\0", 5);
	len = ft_strlcat(dst, "ing", 7);
	print_call("	ft_strlcat(dst, \"ing\", 7)");
	print_test("  ? append \"in\" to dst and NUL-terminate",
			strcmp(dst, "testin") == 0);
	print_test("  ? return length of \"testing\" (7)",
			len == 7);

	if (failed == prefailed)
		printf("\n >>> SUCCESS <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	else
		printf("\n <<< FAILURE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
}

/* =================== MAIN ==================== */

int	main(void)
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
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_strlcpy();
	test_ft_strlcat();
	// SUMMARY:
	print_summary();
	return (1);
}
