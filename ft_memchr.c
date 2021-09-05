/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:55:55 by edrodrig          #+#    #+#             */
/*   Updated: 2021/09/02 19:53:13 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*p;

	p = str;
	while (*p++ && n--)
		if (*p == (unsigned char)c)
			return ((void *)(p));
	return (NULL);
}
