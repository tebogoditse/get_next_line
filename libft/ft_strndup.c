/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tditse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 14:24:45 by tditse            #+#    #+#             */
/*   Updated: 2018/06/17 03:50:55 by tditse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	char	*ptr;

	ptr = ft_strnew(n);
	if (ptr == NULL)
		return (NULL);
	ft_strncpy(ptr, str, n);
	ptr[n] = '\0';
	return (ptr);
}
