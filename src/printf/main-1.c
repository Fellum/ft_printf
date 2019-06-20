#include <stdio.h>
#include "ft_printf.h"
#define ULONG_MAX  4294967295UL
#define ULLONG_MAX 18446744073709551615ULL
#define USHRT_MAX  65535
#define LLONG_MAX  9223372036854775807LL
#define LLONG_MIN  (-9223372036854775808LL - 1)

int main()
{
	// int a = 9834;
	// int b = 60267;
	// char *format = "%5x0\n";
	// char *format2 = "%#upXo\n";
	// char *format3 = "%#016.5uxo\n";
	// char *format4 = "%#uXo\n";

	// printf("%d\n", printf("%lld\n", -9223372036854775807));
	// ft_printf("%d\n", ft_printf("%lld\n", -9223372036854775807));

	// printf("%d\n", printf("%lu\n", -42));
	// ft_printf("%d\n", ft_printf("%lu\n", -42));

	// ft_printf("%.2c", NULL);
	
	// printf("%d\n",  ft_printf("%lu\n", 4294967296));
	// ft_printf("%d\n",  ft_printf("%lu\n", 4294967296));

	// printf("%d\n", printf("%llu\n", 4999999999));
	// ft_printf("%d\n", ft_printf("%llu\n", 4999999999));
	// printf("%d\n",  printf("@moulitest: %5.o %5.0o", 0, 0));
	// ft_printf("%d\n",  ft_printf("@moulitest: %5.o %5.0o", 0, 0));

	// ft_printf("\n");
	// ft_printf("%%\n");
	// ft_printf("%d\n", 42);
	// ft_printf("%d%d\n", 42, 41);
	// ft_printf("%d%d%d\n", 42, 43, 44);
	// ft_printf("%ld\n", 2147483647);
	// ft_printf("%lld\n", 9223372036854775807);
	// ft_printf("%x\n", 505);
	// ft_printf("%X\n", 505);
	// ft_printf("%p\n", &ft_printf);
	// ft_printf("%20.15d\n", 54321);
	// ft_printf("%-10d\n", 3);
	// ft_printf("% d\n", 3);
	// ft_printf("%+d\n", 3);
	// ft_printf("%010d\n", 1);
	// ft_printf("%hhd\n", 0);
	// ft_printf("%\n");
	// ft_printf("%u\n", 4294967295);
	// ft_printf("%o\n", 40);
	// ft_printf("%%#08x\n", 42);
	// ft_printf("%x\n", 1000);
	// ft_printf("%#X\n", 1000);
	// ft_printf("%s\n", NULL);
	// ft_printf("%s%s\n", "test", "test");
	// ft_printf("%s%s%s\n", "test", "test", "test");
	// printf("%d\n",  printf("|%+d|\n", 0));
	// ft_printf("%d\n",  ft_printf("|%+d|\n", 0));
	printf("\n%d\n", printf("%-+23.5lld|%- 23.5lld|%-023.5lld|", LLONG_MIN, LLONG_MIN, LLONG_MIN));
	ft_printf("\n%d\n", ft_printf("%-+23.5lld|%- 23.5lld|%-023.5lld|", LLONG_MIN, LLONG_MIN, LLONG_MIN));
	// printf("%d\n", printf("%llx\n", 9223372036854775808));
	// ft_printf("%d\n", ft_printf("%llx\n", 9223372036854775808));
	// printf("%d\n", printf("%010x\n", 542));
	// ft_printf("%d\n", ft_printf("%010x\n", 542));
	// printf("%d\n", printf("%X\n", -42));
	// ft_printf("%d\n", ft_printf("%X\n", -42));
	// printf("%d\n", printf("%#llx\n", 9223372036854775807));
	// ft_printf("%d\n", ft_printf("%#llx\n", 9223372036854775807));
	// printf("%d\n", printf("|%-#6o|\n", 2500));
	// ft_printf("%d\n", ft_printf("|%-#6o|\n", 2500));
	// printf("%d\n", printf("%llx\n", 9223372036854775807));
	// ft_printf("%d\n", ft_printf("%llx\n", 9223372036854775807));
	// printf("%d\n", printf("%llx\n", 9223372036854775808));
	// ft_printf("%d\n", ft_printf("%llx\n", 9223372036854775808));
	//printf(format, 101);
	// ft_printf("%d\n",ft_printf(format, 101));
	// printf("%d\n", printf(format, -42));
	// ft_printf("%d\n", ft_printf(format, -42));
	// printf("%d\n", printf(format2, 12));
	// ft_printf("%d\n", ft_printf(format2, 12));
	// printf("%d\n", printf(format2, -100));
	// ft_printf("%d\n", ft_printf(format2, -100));
	// printf("%d\n", printf(format2, 90));
	// ft_printf("%d\n", ft_printf(format2, 90));
	// printf("%d\n", printf(format3, 0));
	// ft_printf("%d\n", ft_printf(format3, 0));
	// printf("%d\n", printf(format4, -45976));
	// ft_printf("%d\n", ft_printf(format4, -45976));
	// printf("%d\n",printf(format, "hello"));
	// ft_printf("%d\n",ft_printf(format, "hello"));
	//>> printf("%d\n", printf("%hd\n", -32769));
	//>> ft_printf("%d\n", ft_printf("%hd\n", -32769));
	// printf("%d\n", printf("@moulitest: %#.o %#.0o\n", 0, 0));
	// ft_printf("%d\n", ft_printf("@moulitest: %#.o %#.0o\n", 0, 0));
	// printf("%d\n", printf("@moulitest: %.d %0.0d\n", 42, 43));
	// ft_printf("%d\n", ft_printf("@moulitest: %.d %.0d\n", 42, 43));
	return 0;
}

// % <flags> <min_field> <.> <precision> <conversion_flags> <conversion>
//   +-# 0     NUMBER          NUMBER        l ll h hh L     diouxXfcspb