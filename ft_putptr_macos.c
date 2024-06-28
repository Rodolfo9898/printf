/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_macos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperez-t <rperez-t@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:31:33 by rperez-t          #+#    #+#             */
/*   Updated: 2023/12/22 15:12:55 by rperez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*VERSION MACOS ft_putptr*/
int	ft_putptr(uintptr_t p)
{
	int		count;
	char	*address;

	count = 0;
	count += ft_putstr("0x");
	address = ft_make_hex(p, 1);
	count += ft_putstr(address);
	return (count);
}
