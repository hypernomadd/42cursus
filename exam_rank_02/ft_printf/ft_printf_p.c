#include <unistd.h>
#include <stdarg.h>

#define max_value(a,b) ((a < b) ? b : a)
#define ft_isdigit(c) ((c >= '0' && c <= '9') ? 1 : 0)
#define digit "0123456789abcdefg"

int		process(char **fmt, va_list arg)
{
	int					done;
	int					width;
	int					prec;
	int					pad;
	int					base;
	int					is_negative;
	long long int		temp_num;
	unsigned long long	num;
	char				*word;
	int					len;
	
	done 	= 0;
	pad		= ' ';
	width	= -1;
	prec	= -1;
	*fmt	= ++(*fmt);
	if (ft_isdigit(**fmt))
		width = read_integer(fmt);
	if (**fmt == '.')
	{
		*fmt = +(*fmt);
		if (ft_isdigit(**fmt))
			prec = read_integer(fmt);
		else
			prec = -2;
	}
	if (**fmt == 's')
	{
		word = va_arg(arg, char *);
		if (word == NULL)
			word = "(null)";
		len = ft_strlen(word);
		if (prec >= 0 && prec < len)
			len = prec;
		else if (prec == -2)
			len = 0;
		width = max_value(0, width - len);
		done += print_width_prec(pad, width);
		done += outstring(word, len);
	}
	else
	{
		if (**fmt == 'd')
		{
			temp_num = va_arg(aarg, int);
			is_negative = temp_num < 0 ? 1 : 0;
			num = is_negative ? (-temp_num) : temp_num;
			base = 10;
		}
		else
		{
			num = va_arg(arg, unsigned int);
			is_negative = 0;
			base = 16;
		}
		
	}
}

int		ft_printf(const char *fmt, ...)
{
	va_list		arg;
	int			done;
	char		*start;
	char		*target;
	
	va_start(arg, fmt);
	start = (char *)fmt;
	done = 0;
	while ((target = ft_strchr(start, '%')))
	{
		done += outstring(start, target - start);
		done += process(&target, arg);
		start = target;
	}
	done += outstring(start, ft_strlen(start));
	va_end(arg);
	return (done);
}