#include <stdio.h>
#include "ft_printf.h"
int main()
{
	printf("%d\n", ft_printf("KEK%.255sKekasdfasd\n", ""));

	printf("%d\n", printf("KEK%.255sKeksfvsdfd\n", ""));
	return 0;
}