/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:55:55 by edrodrig          #+#    #+#             */
/*   Updated: 2021/09/18 13:07:03 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)str;
	while (*p && n--)
		if (*p++ == (unsigned char)c)
			return ((p - 1));
	return (NULL);
}
