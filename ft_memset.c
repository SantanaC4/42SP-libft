/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:38:52 by edrodrig          #+#    #+#             */
/*   Updated: 2021/09/09 20:19:22 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*copy;

	copy = str;
	while (n--)
		copy[n] = c;
	return (str);
}	
