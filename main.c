
#include "ft_printf.h"
#include <stdio.h>
#include <float.h>
#include <limits.h>
#include <math.h>


int				main(void)
{
	char *str = "%.f|%.f|%.f|%.f|%.f\n";
	ft_printf(str, 44.5, 44.4, 44.6, 44.50001, 44.5 + 1e-52);
	printf(str, 44.5, 44.4, 44.6, 44.50001, 44.5 + 1e-52);

	return (0);
}