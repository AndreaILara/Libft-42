/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainigo-l <ainigo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:07:23 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/10/03 10:27:10 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*latest = NULL;

	while (*str)
	{
		if (*str == (char)c)
			latest = str;
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return ((char *)latest);
}
