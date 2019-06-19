#include "libft.h"
#include <stdlib.h>

char	*fill_with_chars(int num, char c)
{
	char *str;
	if (num > 0)
	{
		if (!(str = ft_strnew(num)))
			return (NULL);
		ft_memset(str, c, num);
		return (str);
	}
	return (NULL);
}
