#include "ft_string.h"
#include <values.h>

char	*ft_strnew(size_t size)
{
	if (size == ULONG_MAX)
		return (NULL);
	return (malloc(size + 1));
}