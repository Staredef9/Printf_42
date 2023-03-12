/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalvett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:39:00 by fsalvett          #+#    #+#             */
/*   Updated: 2022/11/17 11:09:57 by fsalvett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>
# include "./libft/libft.h"

void			ft_putstr(char *str);
int				ft_printf(const char *format, ...);
int				ft_print_count_str(char *str);
int				ft_printnbr(int n);
int				ft_string_conversion(char *str);
int				ft_char_conversion(char c);
int				ft_percent_conversion(char per);
int				hex_counter(uintptr_t i);
int				hex_internal_conv_min(uintptr_t i, char *array, int max_a);
int				hex_internal_conv_ma(uintptr_t i, char *array, int max_array);
unsigned int	ft_unsigned_conversion( unsigned int i);
unsigned int	ft_hexa_maiusc_conversion(uintptr_t i);
unsigned int	ft_hexa_min_conversion(uintptr_t i);
unsigned int	ft_pt_conversion(void *ptr);
char			*ft_uitoa(unsigned int i);

#endif
