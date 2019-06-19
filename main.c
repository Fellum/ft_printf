
#include "ft_printf.h"
#include <stdio.h>
#include <float.h>

int main()
{
	printf("%f|%-f|%+f|% f|%#f|%0f\n", -42., -42., -42., -42., -42., -42.);
	ft_printf("%f|%-f|%+f|% f|%#f|%0f\n", -42., -42., -42., -42., -42., -42.);

	printf("%f|%-f|%+f|% f|%#f|%0f\n", 0., 0., 0., 0., 0., 0.);
	ft_printf("%f|%-f|%+f|% f|%#f|%0f\n", 0., 0., 0., 0., 0., 0.);


}