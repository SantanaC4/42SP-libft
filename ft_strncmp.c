/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:46:12 by edrodrig          #+#    #+#             */
/*   Updated: 2021/09/01 21:42:35 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t num )
{
	while (num >= 1 && *str1 && *str1++ == *str2++)
		num--;
	return (*(str1 - 1) - *(str2 - 1));
}
