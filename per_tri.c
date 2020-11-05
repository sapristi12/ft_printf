#include "ft_printf.h"

int	is_zero_bef(char *str)
{
//	printf("\n\n STRR : %s\n", str);
	while (*str != '.' && *str != '%')
	{
		if (*str == '0')
			return (1);
		str++;
	}
	return (0);
}

int	is_zero_per(char *str)
{
//	printf("STR : %s\n",str);
	while (*str != '.')
		str++;
	while (*str)
	{
		if (*str == '0')
			return (1);
		str++;
	}
	return (0);
}

int	tri_moins_per(char *str, va_list args)
{
	int before;
	int ret;

	(void)args;
	ret = 0;
	before = get_nbatoi_c(str, '%');
	if (before < 0)
	{
		ret = per_bneg_aneg(before, 0);
	}
	else
	{
		if (is_zero_bef(str))
			ret = per_bpos_aneg(before, '0', str);
		else
			ret = per_bpos_aneg(before, ' ', str);
	}
	return (ret);
}

int	tri_before_neg_per(int before, int after, va_list args)
{
	int ret;

	(void)args;
	ret = 0;
	if (after < 0)
		ret = per_bneg_aneg(before, after);
	else
		ret = per_bneg_apos(before, after);
	return (ret);
}

int	tri_before_pos_per(int before, int after, char *str, va_list args)
{
	int ret;

	(void)args;
	ret = 0;
	if (after < 0)
	{
		if (is_zero_bef(str))
			ret = per_bpos_aneg(before, '0', str);
		else
			ret = per_bpos_aneg(before, ' ', str);
	}
	else if (after >= 0 && is_zero_bef(str))
	{
//		puts("ZERO BEFORE");
		if (is_zero_per(str))
		{
//			puts("ZERO AFTER");
			ret = per_bpos_apos(before, after, '0');
		}
		else
		{
		//	puts("PAS DE ZERO AFTER");
			ret = per_bpos_apos(before, after, '0');
		}
	}
	else if (after >= 0)
	{
	//	puts("PAS DE ZERO BEFORE");
		if (is_zero_per(str))
		{
	//		puts("ZERO AFTER");
			ret = per_bpos_apos(before, after, ' ');
		}
		else
		{
	//		puts("PAS DE ZERO AFTER");
			ret = per_bpos_apos(before, after, ' ');
		}	
	}
	return (ret);
}

int	tri_prn_per(char *str, va_list args)
{
	int before;
	int after;
	int ret;

	ret = 0;
	if (is_argb_d(str))
		before = va_arg(args, int);
	else
		before = get_before_d(str);
	if (is_arga_c(str, '%'))
		after = va_arg(args, int);
	else
		after = get_after_c(str, '%');
//	printf("before : %d, after : %d\n", before, after);
	if (is_moins_before_c(str, '.') == 1 && before > 0)
		before = -before;
	if (before < 0)
		ret = tri_before_neg_per(before, after, args);
	else
		ret = tri_before_pos_per(before, after, str, args);
	return (ret);
}

