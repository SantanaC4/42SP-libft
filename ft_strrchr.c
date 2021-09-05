/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:26:42 by edrodrig          #+#    #+#             */
/*   Updated: 2021/09/01 15:47:27 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (i--)
		if (str[i] == c)
			return ((char *)str + i);
	return (NULL);
}
