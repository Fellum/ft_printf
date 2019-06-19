#include <stdio.h>
#include <string.h>
#include <unistd.h>

//#include "ft_printf.h"
#define BUFF_LEN 2
//int b_write(const char *str, size_t str_len, char force_write)
//{
//	static char buff[BUFF_LEN];
//	static size_t cur_c;
//
//	if (str_len < BUFF_LEN - cur_c)
//	{
//		memcpy(buff + cur_c, str, str_len);
//		cur_c += str_len;
//	}
//	else
//	{
//		write(1, buff, cur_c);
//		if (str_len > BUFF_LEN)
//			write(1, str, str_len);
//		else
//			memcpy(buff, str, str_len);
//		cur_c = str_len;
//	}
//	return (0);
//}

#include "ft_printf.h"
int main()
{
	printf("---------------\n");
	char *str = "|%%|\n";
	printf(str);
	ft_printf(str);


	printf("---------------\n");
	str = "|%25%|\n";
	printf(str);
	ft_printf(str);

	printf("---------------\n");
	str = "|%-25%|\n";
	printf(str);
	ft_printf(str);

	printf("---------------\n");
	str = "|%-01%|\n";
	printf(str);
	ft_printf(str);
}