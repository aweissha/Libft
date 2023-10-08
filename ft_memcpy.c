/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweissha <aweissha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:35:04 by aweissha          #+#    #+#             */
/*   Updated: 2023/10/08 11:33:15 by aweissha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char			*dest;
	const unsigned char		*source;
	size_t					i;

	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	src[] = "helloo";
// 	char	dst[] = "blabla";
// 	// char *src = "blabla";
// 	ft_memcpy(dst, src, 6);
// 	write(1, dst, 6);
// 	return (0);
// }
// /*
// The restrict keyword tells the compiler that for the scope of that pointer,
// no other pointer (with the restrict qualifier) will access the same data. 
// Usually used in pointer declarations in fuctions.
// This allows the compiler to optimize code more aggressively because it 
// can assume that modifications through that pointer won't be affected 
// by any other pointers.
// */