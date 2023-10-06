/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweissha <aweissha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:07:34 by aweissha          #+#    #+#             */
/*   Updated: 2023/10/06 18:34:56 by aweissha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	char			*dest;
	const char		*source;
	size_t			i;

	dest = (char *)dst;
	source = (const char *)src;
	i = 0;
	while (i < len)
	{
		dest[i] = source[i]
		i++;
	}
	return (dst);
}

int main(void)
{
    char src[] = "helloo";
    char dst[] = "blabla";
    // char *src = "blabla";
    ft_memcpy(dst, src, 6);
    write(1, dst, 6);
    return (0);
}