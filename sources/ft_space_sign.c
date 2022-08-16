/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space_sign.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguranda <pguranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:12:24 by pguranda          #+#    #+#             */
/*   Updated: 2022/05/28 12:13:09 by pguranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_space_sign(int i)
{
	if (i >= 0)
	{
		write (1, " ", 1);
		return (1);
	}
	else
		return (0);
}
