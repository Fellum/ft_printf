#include "ft_printf.h"
#include "ft_string.h"
#include "misc.h"

int	c_conversions(t_params ft, va_list *args, t_list **lst)
{
	char	space_char;
	char 	*res;
	
	args++;
	if (ft.field_width < 2)
	{
		res = ft_strnew(1);
		res[0] = va_arg(*args, int);
		return (create_node(res, 2, lst));
	}
	space_char = (ft.flags & ZERO_FLAG && !(ft.flags & MINUS_FLAG)) ? '0' : ' ';
	res = fill_with_chars(ft.field_width, space_char);
	res[ft.flags & MINUS_FLAG ? 0 : ft.field_width - 1] = va_arg(*args, int);
	return (create_node(res, ft.field_width != -1 ? ft.field_width + 1 : 0, lst));
}
