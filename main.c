
#include "ft_printf.h"
#include <stdio.h>
#include <float.h>
#include <limits.h>

int				main(void)
{
	ft_printf("%f|%f|%f|%f|%f\n", 1.e1, 1.e2, 1.e18, 1.e57, 1.e201);
	printf("%f|%f|%f|%f|%f\n", 1.e1, 1.e2, 1.e18, 1.e57, 1.e201);

	return (0);
}