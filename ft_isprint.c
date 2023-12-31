/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnikzad <fnikzad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:38:48 by fnikzad           #+#    #+#             */
/*   Updated: 2023/10/11 12:41:15 by fnikzad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int s)
{
	if ((s >= 32 && s <= 126))
		return (1);
	return (0);
}

// int main ()
// {
// 	printf("%d", ft_isprint('~'));
// }
