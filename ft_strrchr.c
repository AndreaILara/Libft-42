/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreailara <andreailara@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:07:23 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/10/03 18:35:47 by andreailara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*latest = NULL;

	while (*s)
	{
		if (*s == (char)c)
			latest = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)latest);
}
