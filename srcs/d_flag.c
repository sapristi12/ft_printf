/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_flag.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlajoua <erlajoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:47:25 by erlajoua          #+#    #+#             */
/*   Updated: 2020/11/23 10:47:26 by erlajoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int		int_lgth(int nb)
{
	int ret;

	ret = 0;
	if (nb == 0 || nb == -0)
		return (1);
	while (nb > 0 || nb < 0)
	{
		nb /= 10;
		ret++;
	}
	return (ret);
}

int		d_flag(char *str, va_list args)
{
	int		ret;
	char	c;

	c = get_d_or_i(str);
	ret = 0;
	if (is_sp_before_c(str, c))
		ft_putchar(' ');
	if (is_prn_c(str, c))
		ret = tri_prn_d(str, args);
	else if (is_arg_c(str, c))
		ret = tri_arg_d(str, args);
	else if (is_moins_c(str, c))
		ret = tri_moins_d(str, args);
	else
		ret = plus_d(str, args);
	return (ret);
}
