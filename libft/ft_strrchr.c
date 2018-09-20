/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tditse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 13:05:32 by tditse            #+#    #+#             */
/*   Updated: 2018/06/16 13:08:54 by tditse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*st;

	st = (char *)s;
	len = ft_strlen(st);
	while ((len != 0) && (st[len] != c))
		len--;
	if (st[len] == c)
		return (&st[len]);
	return (0);
}
