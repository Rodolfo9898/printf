/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_linux.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperez-t <rperez-t@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:30:08 by rperez-t          #+#    #+#             */
/*   Updated: 2023/12/27 13:21:25 by rperez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*VERSION LINUX ft_putptr*/
int	ft_putptr(uintptr_t p)
{
	int		count;
	char	*address;

	count = 0;
	if (!p)
		count += ft_putstr("(nil)");
	else
	{
		count += ft_putstr("0x");
		address = ft_make_hex(p, 1);
		count += ft_putstr(address);
	}
	return (count);
}
