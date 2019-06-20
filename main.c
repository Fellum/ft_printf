
#include "ft_printf.h"
#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
	printf("%f|%-f|%+f|% f|%#f|%0f\n", -42., -42., -42., -42., -42., -42.);
	ft_printf("%f|%-f|%+f|% f|%#f|%0f\n", -42., -42., -42., -42., -42., -42.);

	printf("%f|%-f|%+f|% f|%#f|%0f\n", 0., 0., 0., 0., 0., 0.);
	ft_printf("%f|%-f|%+f|% f|%#f|%0f\n", 0., 0., 0., 0., 0., 0.);

	printf("\n%d\n", printf("%-+23.5lld|%- 23.5lld|%-023.5lld|", LLONG_MIN, LLONG_MIN, LLONG_MIN));
	ft_printf("\n%d\n", ft_printf("%-+23.5lld|%- 23.5lld|%-023.5lld|", LLONG_MIN, LLONG_MIN, LLONG_MIN));



}