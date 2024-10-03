/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainigo-l <ainigo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:16:10 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/10/03 10:26:27 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp_pointer;

	tmp_pointer = (unsigned char *)s;
	while (n > 0)
	{
		*(tmp_pointer++) = (unsigned char)c;
		n--;
	}
	return (s);
}
