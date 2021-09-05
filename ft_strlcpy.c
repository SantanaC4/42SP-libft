/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 15:27:19 by edrodrig          #+#    #+#             */
/*   Updated: 2021/08/31 21:28:43 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (src == NULL)
		return (0);
	if (size > 0)
	{
		while ((size--) - 1)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (ft_strlen(src));
}
