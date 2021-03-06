/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erlajoua <erlajoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:49:28 by erlajoua          #+#    #+#             */
/*   Updated: 2020/11/23 10:59:41 by erlajoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

void	ft_putnbr(int nb);
void	print_sp(int nb);
void	print_zr(int nb);
void	ft_putnbr_u(unsigned int nb);
void	ft_putnbr_x(unsigned int nb);
void	ft_putnbr_xx(unsigned int nb);
void	ft_putstr(char *str);
void	ft_putstrn(char *str, int n);
void	ft_putcharac(char c, int *ret);
void	ft_putchar(char c);
int		ft_printf(const char *format, ...);
int		is_prn_c(char *str, char c);
int		d_flag(char *str, va_list args);
int		is_arg_c(char *str, char c);
int		get_before_d(char *str);
int		int_lgth(int nb);
int		uint_lgth(unsigned int nb);
int		is_arga_c(char *str, char c);
int		is_argb_d(char *str);
int		get_after_c(char *str, char c);
int		is_moins_before_c(char *str, char c);
int		bneg_aneg(int before, va_list args);
int		bneg_apos(int before, int after, va_list args);
int		tri_before_negative(int before, int after, va_list args);
int		tri_before_positive(char *str, int before, int after, va_list args);
int		bpos_aneg(int before, va_list args, char c, char *str);
int		tri_moins_d(char *str, va_list args);
int		plus_d(char *str, va_list args);
int		get_nbatoi_c(char *str, char c);
int		bpos_apos(int before, int after, va_list args);
int		bpos_zero(int before, char *str);
int		is_zero_before_d(char *str);
int		special_zero(int before);
int		c_flag(char *str, va_list args);
int		is_moins_c(char *str, char c);
int		get_nbatoi_c(char *str, char c);
int		p_flag(char *str, va_list args);
int		ft_strlen(char *str);
int		s_flag(char *str, va_list args);
int		s_bneg_aneg(int before, int after, va_list args);
int		s_bneg_apos(int before, int after, va_list args);
int		s_bpos_aneg(int before, va_list args);
int		s_bpos_apos(int before, int after, va_list args);
int		s_bneg(int before, va_list args);
int		s_bpos(int before, va_list args);
int		u_flag(char *str, va_list args);
int		is_zero_before_c(char *str, char c);
int		xx_flag(char *str, va_list args);
int		xx_flag(char *str, va_list args);
int		lgt_hex(unsigned int nb);
int		ft_print_nil(int before);
int		ft_print_memory(int before, unsigned long long str);
int		tri_prn_s(char *str, va_list args);
int		tri_moins_s(char *str, va_list args);
int		special_zero_u(int before);
int		bpos_zero_u(int before, char *str);
int		bpos_else_u(int before, unsigned int nb);
int		tri_prn_u(char *str, va_list args);
int		tri_moins_u(char *str, va_list args);
int		tri_arg_u(char *str, va_list args);
int		bpos_zero_before_u(int before, unsigned int nb);
int		is_in_string(char c);
int		bneg_aneg_u(int nb, va_list args);
int		bpos_aneg_u(int before, char *str, char c, va_list args);
int		bneg_apos_u(int before, int after, va_list args);
int		bpos_apos_u(int before, int after, va_list args);
int		special_zero_xx(int before);
int		bpos_zero_xx(int before, char *str);
int		tri_prn_xx(char *str, va_list args);
int		tri_arg_xx(char *str, va_list args);
int		tri_moins_xx(char *str, va_list args);
int		plus_xx(char *str, va_list args);
int		bpos_zero_before_xx(int before, unsigned int nb);
int		bpos_else_x(int before, unsigned int nb);
int		bpos_aneg_x(int before, char *str, char c, va_list args);
int		bneg_apos_x(int before, int after, va_list args);
int		bpos_apos_x(int before, int after, va_list args);
int		bneg_aneg_x(int before, va_list args);
int		bpos_else_xx(int before, unsigned int nb);
int		bpos_aneg_xx(int before, char *str, char c, va_list args);
int		bneg_apos_xx(int before, int after, va_list args);
int		bpos_apos_xx(int before, int after, va_list args);
int		bneg_aneg_xx(int before, va_list args);
int		tri_prn_x(char *str, va_list args);
int		tri_arg_x(char *str, va_list args);
int		tri_moins_x(char *str, va_list args);
int		plus_x(char *str, va_list args);
int		bpos_zero_before_x(int before, unsigned int nb);
int		tri_prn_d(char *str, va_list args);
int		tri_arg_d(char *str, va_list args);
int		bpos_zero_x(int nb, char *str);
int		special_zero_x(int before);
int		tri_bneg_xx(int before, int after, va_list args);
int		tri_bpos_xx(char *str, int before, int after, va_list args);
int		xx_flag(char *str, va_list args);
int		x_flag(char *str, va_list args);
int		per_bneg_aneg(int before, int after);
int		percent_flag(char *str, va_list args);
int		per_bpos_aneg(int before, char c, char *str);
int		tri_prn_per(char *str, va_list args);
int		tri_moins_per(char *str, va_list args);
int		per_bneg_apos(int before, int after);
int		per_bpos_apos(int before, int after, char c);
int		is_zero_bef(char *str);
int		tri_before_pos_per(int before, int after, char *str, va_list args);
int		tri_before_neg_per(int before, int after, va_list args);
int		is_sp_before_c(char *str, char c);
char	get_d_or_i(char *str);

#endif
