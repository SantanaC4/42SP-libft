/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 23:03:23 by edrodrig          #+#    #+#             */
/*   Updated: 2021/09/18 13:49:55 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*n;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	n = malloc((len + 1) * sizeof(char));
	if (n == NULL)
		return (NULL);
	ft_memcpy(n, s + start, len);
	n[len + 1] = '\0';
	return (n);
}
