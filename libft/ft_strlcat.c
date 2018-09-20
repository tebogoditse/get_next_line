/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tditse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 12:36:10 by tditse            #+#    #+#             */
/*   Updated: 2018/06/16 12:44:01 by tditse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	j = 0;
	while (dst[j] && j < dstsize)
		j++;
	i = 0;
	while (src[i] && (i + j + 1) < dstsize)
	{
		dst[j + i] = src[i];
		i++;
	}
	if (i + j < dstsize)
		dst[i + j] = '\0';
	return (j + ft_strlen(src));
}
