/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweissha <aweissha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:35:04 by aweissha          #+#    #+#             */
/*   Updated: 2023/10/06 15:05:57 by aweissha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    unsigned char   *dest;
    unsigned char   *source;
    size_t          i;

    dest = (unsigned char *)dst;
    source = (unsigned char *)src;
    while (i < n)
    {
        dest[i] = source[i];
        i++;
    }
    return (dst);
}
